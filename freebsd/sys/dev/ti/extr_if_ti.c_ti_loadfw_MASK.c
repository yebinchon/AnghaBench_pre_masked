
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_softc {int ti_hwrev; int ti_dev; } ;


 int FUNC_0 (struct ti_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_1 (struct ti_softc*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct ti_softc*,int ,int ,int ) ;
 int FUNC_4 (struct ti_softc*,int ,int ) ;
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
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;

__attribute__((used)) static void
FUNC_5(struct ti_softc *VAR_38)
{

 FUNC_1(VAR_38);

 switch (VAR_38->ti_hwrev) {
 case 129:
  if (VAR_27 != VAR_2 ||
      VAR_28 != VAR_3 ||
      VAR_26 != VAR_1) {
   FUNC_2(VAR_38->ti_dev, "firmware revision mismatch; "
       "want %d.%d.%d, got %d.%d.%d\n",
       VAR_2, VAR_3,
       VAR_1, VAR_27,
       VAR_28, VAR_26);
   return;
  }
  FUNC_3(VAR_38, VAR_36, VAR_37, VAR_35);
  FUNC_3(VAR_38, VAR_24, VAR_25, VAR_23);
  FUNC_3(VAR_38, VAR_30, VAR_31,
      VAR_29);
  FUNC_4(VAR_38, VAR_21, VAR_22);
  FUNC_4(VAR_38, VAR_32, VAR_33);
  FUNC_0(VAR_38, VAR_0, VAR_34);
  break;
 case 128:
  if (VAR_10 != VAR_2 ||
      VAR_11 != VAR_3 ||
      VAR_9 != VAR_1) {
   FUNC_2(VAR_38->ti_dev, "firmware revision mismatch; "
       "want %d.%d.%d, got %d.%d.%d\n",
       VAR_2, VAR_3,
       VAR_1, VAR_10,
       VAR_11, VAR_9);
   return;
  }
  FUNC_3(VAR_38, VAR_19, VAR_20,
      VAR_18);
  FUNC_3(VAR_38, VAR_7, VAR_8,
      VAR_6);
  FUNC_3(VAR_38, VAR_13, VAR_14,
      VAR_12);
  FUNC_4(VAR_38, VAR_4, VAR_5);
  FUNC_4(VAR_38, VAR_15, VAR_16);
  FUNC_0(VAR_38, VAR_0, VAR_17);
  break;
 default:
  FUNC_2(VAR_38->ti_dev,
      "can't load firmware: unknown hardware rev\n");
  break;
 }
}
