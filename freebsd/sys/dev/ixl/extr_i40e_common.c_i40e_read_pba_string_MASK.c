
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct i40e_hw*,int,int*) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_4, u8 *VAR_5,
         u32 VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_3;
 u16 VAR_8 = 0;
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;

 VAR_7 = FUNC_2(VAR_4, VAR_2, &VAR_8);
 if ((VAR_7 != VAR_3) || (VAR_8 != 0xFAFA)) {
  FUNC_0("Failed to read PBA flags or flag is invalid.\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_1, &VAR_10);
 if (VAR_7 != VAR_3) {
  FUNC_0("Failed to read PBA Block pointer.\n");
  return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_10, &VAR_9);
 if (VAR_7 != VAR_3) {
  FUNC_0("Failed to read PBA Block size.\n");
  return VAR_7;
 }




 VAR_9--;
 if (VAR_6 < (((u32)VAR_9 * 2) + 1)) {
  FUNC_0("Buffer to small for PBA data.\n");
  return VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_7 = FUNC_2(VAR_4, (VAR_10 + 1) + VAR_11, &VAR_8);
  if (VAR_7 != VAR_3) {
   FUNC_1("Failed to read PBA Block word %d.\n", VAR_11);
   return VAR_7;
  }

  VAR_5[(VAR_11 * 2)] = (VAR_8 >> 8) & 0xFF;
  VAR_5[(VAR_11 * 2) + 1] = VAR_8 & 0xFF;
 }
 VAR_5[(VAR_9 * 2)] = '\0';

 return VAR_7;
}
