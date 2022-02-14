
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct octebus_softc {int sc_dev; int * sc_rgmii_irq; } ;
struct ifnet {scalar_t__ if_softc; } ;
struct TYPE_5__ {int phy_dupx; int phy_link; int phy_spd; } ;
struct TYPE_6__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gmxx_rxx_int_en_t ;
struct TYPE_7__ {scalar_t__ imode; scalar_t__ port; int poll; int dev; int (* stop ) (struct ifnet*) ;int open; } ;
typedef TYPE_3__ cvm_oct_private_t ;
struct TYPE_8__ {scalar_t__ board_type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int ,int ,int*,int ,int ,int,int ) ;
 int FUNC_4 (int ,int *,int,int ,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (struct ifnet*) ;
 int VAR_9 ;
 int FUNC_6 (struct ifnet*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 () ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 struct octebus_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_13 (struct ifnet*) ;

int FUNC_14(struct ifnet *VAR_13)
{
 struct octebus_softc *VAR_14;
 cvm_oct_private_t *VAR_15 = (cvm_oct_private_t *)VAR_13->if_softc;
 int VAR_16;
 int VAR_17;

 if (FUNC_5(VAR_13) != 0)
     return VAR_3;

 VAR_15->open = VAR_9;
 VAR_15->stop = FUNC_6;
 VAR_15->stop(VAR_13);






 if (VAR_12 == 0) {
  VAR_14 = FUNC_11(FUNC_10(VAR_15->dev));

  VAR_17 = 0;
  VAR_14->sc_rgmii_irq = FUNC_3(VAR_14->sc_dev, VAR_8,
            &VAR_17, VAR_6,
            VAR_6, 1,
            VAR_7);
  if (VAR_14->sc_rgmii_irq == ((void*)0)) {
   FUNC_12(VAR_14->sc_dev, "could not allocate RGMII irq");
   return VAR_3;
  }

  VAR_16 = FUNC_4(VAR_14->sc_dev, VAR_14->sc_rgmii_irq,
           VAR_5 | VAR_4,
           VAR_11, ((void*)0),
           &VAR_12, ((void*)0));
  if (VAR_16 != 0) {
   FUNC_12(VAR_14->sc_dev, "could not setup RGMII irq");
   return VAR_16;
  }
 }
 VAR_12++;



 if (((VAR_15->imode == VAR_1) && (VAR_15->port == 0)) ||
     (VAR_15->imode == VAR_2)) {

  if (FUNC_8()->board_type != VAR_0) {

   cvmx_gmxx_rxx_int_en_t VAR_18;
   int VAR_19 = FUNC_2(VAR_15->port);
   int VAR_20 = FUNC_1(VAR_15->port);


   VAR_18.u64 = FUNC_7(FUNC_0(VAR_20, VAR_19));
   VAR_18.s.phy_dupx = 1;
   VAR_18.s.phy_link = 1;
   VAR_18.s.phy_spd = 1;
   FUNC_9(FUNC_0(VAR_20, VAR_19), VAR_18.u64);
   VAR_15->poll = VAR_10;
  }
 }

 return 0;
}
