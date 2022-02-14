
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
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
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct i40e_hw*,int ) ;
 int FUNC_5 (struct i40e_hw*,int ,int) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_14)
{
 u32 VAR_15 = 0;
 u32 VAR_16 = 0;
 u32 VAR_17 = 0;
 u32 VAR_18;





 VAR_18 = (FUNC_4(VAR_14, VAR_4) &
   VAR_5) >>
   VAR_6;

 VAR_18 = VAR_18 * 20;

 for (VAR_15 = 0; VAR_15 < VAR_18; VAR_15++) {
  VAR_17 = FUNC_4(VAR_14, VAR_2);
  if (!(VAR_17 & VAR_3))
   break;
  FUNC_3(100);
 }
 if (VAR_17 & VAR_3) {
  FUNC_0("Global reset polling failed to complete.\n");
  return VAR_1;
 }


 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++) {
  VAR_17 = FUNC_4(VAR_14, VAR_7);
  VAR_17 &= (VAR_8 |
   VAR_9);
  if (VAR_17 == (VAR_8 |
       VAR_9)) {
   FUNC_1("Core and Global modules ready %d\n", VAR_16);
   break;
  }
  FUNC_3(10);
 }
 if (!(VAR_17 & (VAR_8 |
       VAR_9))) {
  FUNC_0("wait for FW Reset complete timedout\n");
  FUNC_1("I40E_GLNVM_ULD = 0x%x\n", VAR_17);
  return VAR_1;
 }




 if (!VAR_15) {
  u32 VAR_19 = 0;

  VAR_17 = FUNC_4(VAR_14, VAR_10);
  FUNC_5(VAR_14, VAR_10,
       (VAR_17 | VAR_11));
  for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++) {
   VAR_17 = FUNC_4(VAR_14, VAR_10);
   if (!(VAR_17 & VAR_11))
    break;
   VAR_19 = FUNC_4(VAR_14, VAR_2);
   if (VAR_19 & VAR_3) {
    FUNC_0("Core reset upcoming. Skipping PF reset request.\n");
    FUNC_1("I40E_GLGEN_RSTAT = 0x%x\n", VAR_19);
    return VAR_0;
   }
   FUNC_3(1);
  }
  if (VAR_17 & VAR_11) {
   FUNC_0("PF reset polling failed to complete.\n");
   return VAR_1;
  }
 }

 FUNC_2(VAR_14);


 return VAR_13;
}
