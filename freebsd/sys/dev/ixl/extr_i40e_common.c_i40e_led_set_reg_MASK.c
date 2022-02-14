
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
 int FUNC_0 (struct i40e_hw*,int ,int ,int ,scalar_t__,int *) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,int ,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_3(struct i40e_hw *VAR_4, u16 VAR_5,
           u32 VAR_6)
{
 enum i40e_status_code VAR_7;
 u8 VAR_8 = 0;

 if (VAR_4->flags & VAR_1) {
  VAR_7 = FUNC_0(VAR_4,
      VAR_0,
      VAR_2,
      VAR_3,
      VAR_6, ((void*)0));
 } else {
  VAR_8 = FUNC_1(VAR_4, VAR_4->port);
  VAR_7 = FUNC_2(VAR_4,
         VAR_2,
         VAR_5, VAR_8,
         (u16)VAR_6);
 }

 return VAR_7;
}
