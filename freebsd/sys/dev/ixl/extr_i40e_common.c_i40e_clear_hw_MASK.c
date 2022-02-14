
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int) ;
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
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_24 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct i40e_hw*,int ) ;
 int FUNC_11 (struct i40e_hw*,int ,int) ;

void FUNC_12(struct i40e_hw *VAR_25)
{
 u32 VAR_26, VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;
 u32 VAR_31, VAR_32;
 u32 VAR_33;
 u32 VAR_34 = 0x7ff;


 VAR_33 = FUNC_10(VAR_25, VAR_3);
 VAR_28 = (VAR_33 & VAR_4) >>
   VAR_5;
 VAR_29 = (VAR_33 & VAR_6) >>
   VAR_7;

 VAR_33 = FUNC_10(VAR_25, VAR_12);
 VAR_27 = (VAR_33 & VAR_13) >>
   VAR_14;
 VAR_32 = (VAR_33 & VAR_15) >>
   VAR_16;
 if (VAR_33 & VAR_17)
  VAR_26 = (VAR_32 - VAR_27) + 1;
 else
  VAR_26 = 0;

 VAR_33 = FUNC_10(VAR_25, VAR_18);
 VAR_31 = (VAR_33 & VAR_19) >>
   VAR_20;
 VAR_32 = (VAR_33 & VAR_21) >>
   VAR_22;
 if (VAR_33 & VAR_23)
  VAR_30 = (VAR_32 - VAR_31) + 1;
 else
  VAR_30 = 0;


 FUNC_11(VAR_25, VAR_9, 0);
 VAR_33 = 0x3 << VAR_8;
 for (VAR_31 = 0; VAR_31 < VAR_28 - 2; VAR_31++)
  FUNC_11(VAR_25, FUNC_1(VAR_31), VAR_33);


 VAR_33 = VAR_34 << VAR_11;
 FUNC_11(VAR_25, VAR_10, VAR_33);
 for (VAR_31 = 0; VAR_31 < VAR_28 - 2; VAR_31++)
  FUNC_11(VAR_25, FUNC_2(VAR_31), VAR_33);
 VAR_33 = VAR_34 << VAR_24;
 for (VAR_31 = 0; VAR_31 < VAR_30; VAR_31++)
  FUNC_11(VAR_25, FUNC_7(VAR_31), VAR_33);
 for (VAR_31 = 0; VAR_31 < VAR_29 - 2; VAR_31++)
  FUNC_11(VAR_25, FUNC_8(VAR_31), VAR_33);


 for (VAR_31 = 0; VAR_31 < VAR_26; VAR_31++) {
  u32 VAR_35 = VAR_27 + VAR_31;
  u32 VAR_36 = 0;

  if (VAR_35 >= 128) {
   VAR_36 = VAR_35 / 128;
   VAR_35 %= 128;
  }

  VAR_33 = FUNC_10(VAR_25, FUNC_0(VAR_36));
  VAR_33 &= ~VAR_0;
  VAR_33 |= (VAR_35 << VAR_1);
  VAR_33 |= VAR_2;

  FUNC_11(VAR_25, FUNC_0(VAR_36), VAR_33);
 }
 FUNC_9(400);


 for (VAR_31 = 0; VAR_31 < VAR_26; VAR_31++) {
  FUNC_11(VAR_25, FUNC_4(VAR_31), 0);
  FUNC_11(VAR_25, FUNC_6(VAR_31), 0);
  FUNC_11(VAR_25, FUNC_3(VAR_31), 0);
  FUNC_11(VAR_25, FUNC_5(VAR_31), 0);
 }


 FUNC_9(50);
}
