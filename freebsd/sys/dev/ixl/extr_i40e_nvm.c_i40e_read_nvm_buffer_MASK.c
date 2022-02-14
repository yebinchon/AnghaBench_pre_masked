
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int flags; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*,int ) ;
 int FUNC_1 (struct i40e_hw*,int ,int *,int *) ;
 int FUNC_2 (struct i40e_hw*,int ,int *,int *) ;
 int FUNC_3 (struct i40e_hw*) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3, u16 VAR_4,
        u16 *VAR_5, u16 *VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_2;

 if (VAR_3->flags & VAR_0) {
  VAR_7 = FUNC_0(VAR_3, VAR_1);
  if (!VAR_7) {
   VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
        VAR_6);
   FUNC_3(VAR_3);
  }
 } else {
  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 }
 return VAR_7;
}
