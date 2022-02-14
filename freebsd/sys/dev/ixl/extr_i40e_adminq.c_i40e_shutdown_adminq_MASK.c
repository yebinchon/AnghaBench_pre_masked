
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ va; } ;
struct TYPE_3__ {int arq_spinlock; int asq_spinlock; } ;
struct i40e_hw {TYPE_2__ nvm_buff; TYPE_1__ aq; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,int ) ;
 scalar_t__ FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i40e_hw*,TYPE_2__*) ;
 int FUNC_4 (struct i40e_hw*) ;
 int FUNC_5 (struct i40e_hw*) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_2)
{
 enum i40e_status_code VAR_3 = VAR_0;

 if (FUNC_1(VAR_2))
  FUNC_0(VAR_2, VAR_1);

 FUNC_5(VAR_2);
 FUNC_4(VAR_2);
 FUNC_2(&VAR_2->aq.asq_spinlock);
 FUNC_2(&VAR_2->aq.arq_spinlock);

 if (VAR_2->nvm_buff.va)
  FUNC_3(VAR_2, &VAR_2->nvm_buff);

 return VAR_3;
}
