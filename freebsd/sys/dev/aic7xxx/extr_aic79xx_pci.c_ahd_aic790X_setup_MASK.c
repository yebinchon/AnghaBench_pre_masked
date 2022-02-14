
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahd_softc {int bugs; int flags; int features; scalar_t__ channel; int dev_softc; } ;
typedef int aic_dev_softc_t ;


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
 int FUNC_0 (struct ahd_softc*,int ) ;
 int VAR_31 ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 char* FUNC_3 (struct ahd_softc*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,scalar_t__,int) ;
 int FUNC_7 (char*,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct ahd_softc *VAR_41)
{
 aic_dev_softc_t VAR_42;
 u_int VAR_43;

 VAR_42 = VAR_41->dev_softc;
 VAR_43 = FUNC_5(VAR_42, VAR_39, 1);
 if (VAR_43 < VAR_36) {
  FUNC_7("%s: Unable to attach to unsupported chip revision %d\n",
         FUNC_3(VAR_41), VAR_43);
  FUNC_6(VAR_42, VAR_38, 0, 2);
  return (VAR_35);
 }
 VAR_41->channel = FUNC_4(VAR_42) + 'A';
 if (VAR_43 < VAR_37) {



  VAR_41->bugs |= VAR_30|VAR_0
     | VAR_24|VAR_10
     | VAR_17|VAR_29
     | VAR_12|VAR_2
     | VAR_4|VAR_21
     | VAR_20|VAR_22
     | VAR_23|VAR_25
     | VAR_13|VAR_27
     | VAR_31|VAR_3
     | VAR_18|VAR_19
     | VAR_6;




  FUNC_1(VAR_41, VAR_26);

  if ((VAR_41->flags & VAR_8) == 0)
   FUNC_2(VAR_41, VAR_32);
 } else {
  u_int VAR_44;

  VAR_41->features |= VAR_28|VAR_16
         | VAR_15|VAR_7;
  VAR_41->bugs |= VAR_11|VAR_5;




  if ((VAR_41->features & VAR_14) != 0)
   VAR_41->bugs |= VAR_9|VAR_0
      | VAR_3;




  FUNC_1(VAR_41, VAR_26);
  FUNC_2(VAR_41, VAR_33);
  FUNC_0(VAR_41, VAR_1);







  VAR_44 = FUNC_5(VAR_42, VAR_34, 1);
  FUNC_6(VAR_42, VAR_34,
         VAR_44|VAR_40, 1);
  VAR_44 = FUNC_5(VAR_42, VAR_34, 1);
 }

 return (0);
}
