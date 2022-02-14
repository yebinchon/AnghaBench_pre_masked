
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct fwohci_softc {scalar_t__ state; int * config_rom; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct fwohci_softc*,int ) ;
 int FUNC_1 (struct fwohci_softc*,int ,int) ;
 int FUNC_2 (int ,char*,...) ;
 TYPE_1__* VAR_28 ;
 int FUNC_3 (struct fwohci_softc*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct fwohci_softc *VAR_29, uint32_t VAR_30, int VAR_31)
{
 if(VAR_30 & VAR_22 ){
  FUNC_2(VAR_28->dev, "BUS reset\n");
  if (VAR_29->state == VAR_2)
   goto busresetout;
  VAR_29->state = VAR_2;

  FUNC_1(VAR_29, VAR_1, VAR_22);

  FUNC_1(VAR_29, VAR_1, VAR_9);
  FUNC_1(VAR_29, VAR_27, VAR_4);

  FUNC_1(VAR_29, VAR_5, FUNC_4(VAR_29->config_rom[0]));
  FUNC_1(VAR_29, VAR_3, FUNC_4(VAR_29->config_rom[2]));
 } else if (VAR_29->state == VAR_2) {
  FUNC_3(VAR_29);
 }
busresetout:
 return;
}
