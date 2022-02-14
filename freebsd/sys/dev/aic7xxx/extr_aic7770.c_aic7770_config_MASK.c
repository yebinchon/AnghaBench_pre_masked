
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct aic7770_identity {int (* setup ) (struct ahc_softc*) ;int name; } ;
struct TYPE_3__ {int busspd; int bustime; } ;
struct TYPE_4__ {TYPE_1__ aic7770_softc; } ;
struct ahc_softc {int flags; int chip; int features; int our_id; int our_id_b; TYPE_2__ bus_softc; int * seep_config; int bus_resume; int bus_suspend; int bus_chip_init; int description; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*) ;
 int FUNC_3 (struct ahc_softc*,int ) ;
 int FUNC_4 (struct ahc_softc*) ;
 int FUNC_5 (struct ahc_softc*,int ,int) ;
 int FUNC_6 (struct ahc_softc*,int ) ;
 int FUNC_7 (struct ahc_softc*) ;
 int FUNC_8 (struct ahc_softc*) ;
 int FUNC_9 (struct ahc_softc*) ;
 int VAR_32 ;
 int FUNC_10 (struct ahc_softc*,int) ;
 int FUNC_11 (struct ahc_softc*,int) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (struct ahc_softc*) ;

int
FUNC_15(struct ahc_softc *VAR_35, struct aic7770_identity *VAR_36, u_int VAR_37)
{
 int VAR_38;
 int VAR_39;
 u_int VAR_40;
 u_int VAR_41;
 u_int VAR_42;

 VAR_38 = VAR_36->setup(VAR_35);
 VAR_39 = 0;
 if (VAR_38 != 0)
  return (VAR_38);

 VAR_38 = FUNC_11(VAR_35, VAR_37);
 if (VAR_38 != 0)
  return (VAR_38);







 FUNC_3(VAR_35, VAR_19);

 VAR_35->description = VAR_36->name;
 VAR_38 = FUNC_7(VAR_35);
 if (VAR_38 != 0)
  return (VAR_38);

 VAR_35->bus_chip_init = VAR_32;
 VAR_35->bus_suspend = VAR_34;
 VAR_35->bus_resume = VAR_33;

 VAR_38 = FUNC_6(VAR_35, VAR_19);
 if (VAR_38 != 0)
  return (VAR_38);


 VAR_42 = FUNC_1(VAR_35, VAR_26);
 VAR_41 = VAR_42 & VAR_31;
 switch (VAR_41) {
 case 9:
 case 10:
 case 11:
 case 12:
 case 14:
 case 15:
  break;
 default:
  FUNC_13("aic7770_config: invalid irq setting %d\n", VAR_42);
  return (VAR_18);
 }

 if ((VAR_42 & VAR_16) != 0)
  VAR_35->flags |= VAR_0;

 switch (VAR_35->chip & (129|128)) {
 case 129:
 {
  u_int VAR_43;
  u_int VAR_44;
  u_int VAR_45;

  VAR_43 = FUNC_1(VAR_35, VAR_20);
  VAR_44 = FUNC_1(VAR_35, VAR_29);
  VAR_45 = FUNC_1(VAR_35, VAR_29 + 1);


  if ((VAR_43 & VAR_14) != 0)
   VAR_35->flags |= 1;

  if ((VAR_43 & VAR_10) == VAR_9) {
   VAR_35->flags |= VAR_5;
  } else {
   if ((VAR_35->features & VAR_6) != 0) {
    VAR_35->our_id = VAR_45 & VAR_25;
    if (VAR_44 & VAR_30)
     VAR_35->flags |= VAR_3;
   } else {
    VAR_35->our_id = VAR_44 & VAR_24;
    VAR_35->our_id_b = VAR_45 & VAR_24;
    if (VAR_44 & VAR_30)
     VAR_35->flags |= VAR_3;
    if (VAR_45 & VAR_30)
     VAR_35->flags |= VAR_4;
   }
  }
  if ((FUNC_1(VAR_35, VAR_21) & VAR_22))
   VAR_35->flags |= VAR_1|VAR_2;
  break;
 }
 case 128:
 {
  VAR_39 = FUNC_0(VAR_35);
  break;
 }
 default:
  break;
 }
 if (VAR_39 == 0) {
  FUNC_12(VAR_35->seep_config, VAR_27);
  VAR_35->seep_config = ((void*)0);
 }




 FUNC_5(VAR_35, VAR_28, FUNC_1(VAR_35, VAR_28) & ~VAR_7);


 VAR_40 = FUNC_1(VAR_35, VAR_23);
 FUNC_5(VAR_35, VAR_12, VAR_40 & VAR_15);
 FUNC_5(VAR_35, VAR_13, (VAR_40 << 2) & VAR_11);

 VAR_35->bus_softc.aic7770_softc.busspd = VAR_40 & VAR_15;
 VAR_35->bus_softc.aic7770_softc.bustime = (VAR_40 << 2) & VAR_11;




 VAR_38 = FUNC_2(VAR_35);
 if (VAR_38 != 0)
  return (VAR_38);

 VAR_38 = FUNC_10(VAR_35, VAR_41);
 if (VAR_38 != 0)
  return (VAR_38);

 FUNC_4(VAR_35);



 FUNC_8(VAR_35);




 FUNC_5(VAR_35, VAR_8, VAR_17);

 FUNC_9(VAR_35);

 return (0);
}
