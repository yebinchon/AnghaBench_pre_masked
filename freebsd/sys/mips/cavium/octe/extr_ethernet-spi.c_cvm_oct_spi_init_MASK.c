
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octebus_softc {int sc_dev; int * sc_spi_irq; } ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_2__ {int port; int poll; int dev; } ;
typedef TYPE_1__ cvm_oct_private_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int ,int*,int ,int ,int,int ) ;
 int FUNC_2 (int ,int *,int,int ,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 struct octebus_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ VAR_8 ;

int FUNC_8(struct ifnet *VAR_9)
{
 struct octebus_softc *VAR_10;
 cvm_oct_private_t *VAR_11 = (cvm_oct_private_t *)VAR_9->if_softc;
 int VAR_12;
 int VAR_13;

 if (VAR_8 == 0) {
  VAR_10 = FUNC_6(FUNC_5(VAR_11->dev));

  VAR_13 = 0;
  VAR_10->sc_spi_irq = FUNC_1(VAR_10->sc_dev, VAR_5,
          &VAR_13, VAR_3,
          VAR_3, 1,
          VAR_4);
  if (VAR_10->sc_spi_irq == ((void*)0)) {
   FUNC_7(VAR_10->sc_dev, "could not allocate SPI irq");
   return VAR_0;
  }

  VAR_12 = FUNC_2(VAR_10->sc_dev, VAR_10->sc_spi_irq,
           VAR_2 | VAR_1,
           VAR_7, ((void*)0),
           &VAR_8, ((void*)0));
  if (VAR_12 != 0) {
   FUNC_7(VAR_10->sc_dev, "could not setup SPI irq");
   return VAR_12;
  }
 }
 VAR_8++;

 if ((VAR_11->port == 0) || (VAR_11->port == 16)) {
  FUNC_4(FUNC_0(VAR_11->port));
  VAR_11->poll = VAR_6;
 }
 if (FUNC_3(VAR_9) != 0)
     return VAR_0;
 return 0;
}
