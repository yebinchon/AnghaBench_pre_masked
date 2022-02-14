
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_4 (int ) ;
 int VAR_21 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_22 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int VAR_23 ;
 int FUNC_9 (int ) ;
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
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 scalar_t__ VAR_43 ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct sc_info*,int ,int) ;
 int FUNC_16 (int ,struct sc_info*,int ) ;
 int FUNC_17 (struct sc_info*,int ,int) ;
 scalar_t__ FUNC_18 (struct sc_info*,int ,int,int) ;
 int FUNC_19 (struct sc_info*,int ,int) ;
 int FUNC_20 (int ,struct sc_info*,int ,int) ;
 int FUNC_21 (int ,char*) ;

__attribute__((used)) static int
FUNC_22(struct sc_info *VAR_44)
{
    u_int32_t VAR_45, VAR_46;


    FUNC_19(VAR_44, VAR_10, 0);
    FUNC_19(VAR_44, VAR_31, 0);


    FUNC_19(VAR_44, VAR_3, 0);
    FUNC_14(50);


    FUNC_19(VAR_44, VAR_33, 0);
    FUNC_14(100);
    FUNC_19(VAR_44, VAR_33, VAR_34);

    FUNC_14(50000);


    FUNC_19(VAR_44, VAR_10, VAR_11);
    FUNC_14(50000);
    FUNC_19(VAR_44, VAR_10,
       VAR_11 | VAR_13);


    FUNC_17(VAR_44, VAR_36,
  VAR_37 | VAR_40 |
  VAR_38 | VAR_39);


    if (FUNC_18(VAR_44,
         VAR_10,
         VAR_12,
         250) == 0) {
 FUNC_21(VAR_44->dev, "Clock stabilization failed\n");
 return -1;
    }


    FUNC_19(VAR_44, VAR_3,VAR_4);


    FUNC_14(50000);


    FUNC_19(VAR_44, VAR_31, VAR_32);


    if (FUNC_18(VAR_44, VAR_8, VAR_9, 250) == 0) {
 FUNC_21(VAR_44->dev, "codec did not avail\n");
 return -1;
    }



    FUNC_19(VAR_44,
       VAR_3,
       VAR_5 | VAR_4);


    for(VAR_45 = 0 ; VAR_45 < 1000; VAR_45++) {
 FUNC_14(10000);
 VAR_46 = FUNC_16(0, VAR_44, VAR_2);
 if ((VAR_46 & 0x0f) == 0x0f) {
     break;
 }
    }
    if (VAR_45 == 1000) {
 FUNC_21(VAR_44->dev, "codec failed to calibrate\n");
 return -1;
    }


    FUNC_19(VAR_44, VAR_31, VAR_32);


    if (FUNC_18(VAR_44,
         VAR_6,
         FUNC_0(3) | FUNC_0(4),
         10000) == 0) {
 FUNC_21(VAR_44->dev, "cs4281 never got valid data\n");
 return -1;
    }


    FUNC_19(VAR_44,
       VAR_7,
       FUNC_1(3) | FUNC_1(4));


    FUNC_20(0, VAR_44, VAR_0, 0);
    FUNC_20(0, VAR_44, VAR_1, 0);


    VAR_46 = FUNC_16(0, VAR_44, VAR_2) & 0xfdff;
    FUNC_20(0, VAR_44, VAR_2, VAR_46);


    for(VAR_45 = 0; VAR_45 < 320; VAR_45++) {
 FUNC_14(100);
 VAR_46 = FUNC_16(0, VAR_44, VAR_2);
 if (VAR_46 & 0x02) break;
    }


    VAR_46 = FUNC_16(0, VAR_44, VAR_2) & 0xfeff;
    FUNC_20(0, VAR_44, VAR_2, VAR_46);


    for(VAR_45 = 0; VAR_45 < 320; VAR_45++) {
 FUNC_14(100);
 VAR_46 = FUNC_16(0, VAR_44, VAR_2);
 if (VAR_46 & 0x01) break;
    }




    VAR_46 = FUNC_7(VAR_29) |
 FUNC_5(VAR_25) |
 FUNC_8(VAR_43)|
 FUNC_6(0);
    FUNC_19(VAR_44, FUNC_4(VAR_41), VAR_46);

    FUNC_19(VAR_44, FUNC_4(VAR_41), VAR_46 | VAR_21);


    VAR_46 = FUNC_7(VAR_30) |
 FUNC_5(VAR_26) |
 FUNC_8(VAR_43)|
 FUNC_6(VAR_43 + 1);
    FUNC_19(VAR_44, FUNC_4(VAR_42), VAR_46 | VAR_22);
    FUNC_19(VAR_44, FUNC_4(VAR_42), VAR_46 | VAR_21);


    VAR_46 = FUNC_12(VAR_25) |
 FUNC_13(VAR_29) |
 FUNC_10(VAR_26) |
 FUNC_11(VAR_30);
    FUNC_19(VAR_44, VAR_35, VAR_46);


    FUNC_19(VAR_44,
       FUNC_3(VAR_41),
       VAR_18 |
       VAR_17 |
       VAR_19);
    FUNC_19(VAR_44,
       FUNC_3(VAR_42),
       VAR_18 |
       VAR_17 |
       VAR_20);


    FUNC_19(VAR_44,
       FUNC_2(VAR_41),
       VAR_16 | VAR_14 | VAR_15);
    FUNC_19(VAR_44,
       FUNC_2(VAR_42),
       VAR_16 | VAR_14 | VAR_15);


    FUNC_15(VAR_44,
  VAR_23,
  VAR_24 |
  FUNC_9(VAR_41) |
  FUNC_9(VAR_42));


    FUNC_19(VAR_44, VAR_27, 7);
    FUNC_19(VAR_44, VAR_28, 7);

    return 0;
}
