
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {scalar_t__ dlm_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct dlm_ctxt *VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_2);
 VAR_4 = (VAR_3->dlm_state == VAR_1) ||
  (VAR_3->dlm_state == VAR_0);
 FUNC_1(&VAR_2);

 return VAR_4;
}
