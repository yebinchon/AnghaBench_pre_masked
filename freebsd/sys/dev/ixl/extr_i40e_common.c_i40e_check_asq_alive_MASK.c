
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;
struct TYPE_4__ {TYPE_1__ asq; } ;
struct i40e_hw {TYPE_2__ aq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*,scalar_t__) ;

bool FUNC_2(struct i40e_hw *VAR_3)
{
 if (VAR_3->aq.asq.len) {
  if (!FUNC_0(VAR_3))
   return !!(FUNC_1(VAR_3, VAR_3->aq.asq.len) &
    VAR_1);
  else
   return !!(FUNC_1(VAR_3, VAR_3->aq.asq.len) &
    VAR_2);
 }
 return VAR_0;
}
