
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
 int FUNC_0 (struct i40e_hw*,int ,int *) ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_3, u16 VAR_4,
      u16 *VAR_5)
{
 enum i40e_status_code VAR_6 = VAR_2;

 if (VAR_3->flags & VAR_0)
  VAR_6 = FUNC_1(VAR_3, VAR_1);

 if (VAR_6)
  return VAR_6;
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);

 if (VAR_3->flags & VAR_0)
  FUNC_2(VAR_3);
 return VAR_6;
}
