
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct i40e_hw {int flags; int port; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i40e_hw*,int ,int ,int,scalar_t__*,int *) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int,int ,int*) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_6, u16 *VAR_7,
           u16 *VAR_8)
{
 enum i40e_status_code VAR_9 = VAR_5;
 u16 VAR_10;
 u32 VAR_11;
 u16 VAR_12;
 u8 VAR_13 = 0;
 u16 VAR_14;

 if (VAR_6->flags & VAR_1) {
  VAR_9 = FUNC_0(VAR_6,
      VAR_0,
      VAR_2,
      VAR_4,
      &VAR_11, ((void*)0));
  if (VAR_9 == VAR_5)
   *VAR_8 = (u16)VAR_11;
  return VAR_9;
 }
 VAR_12 = VAR_4;
 VAR_13 = FUNC_1(VAR_6, VAR_6->port);
 for (VAR_10 = 0; VAR_10 < 3; VAR_10++,
      VAR_12++) {
  VAR_9 = FUNC_2(VAR_6,
        VAR_2,
        VAR_12, VAR_13,
        &VAR_14);
  if (VAR_9)
   return VAR_9;
  *VAR_8 = VAR_14;
  if (VAR_14 & VAR_3) {
   *VAR_7 = VAR_12;
   break;
  }
 }
 return VAR_9;
}
