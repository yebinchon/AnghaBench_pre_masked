
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int dlm_domain_handlers; int dlm_hb_down; int dlm_hb_up; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dlm_ctxt *VAR_0)
{
 FUNC_0(((void*)0), &VAR_0->dlm_hb_up);
 FUNC_0(((void*)0), &VAR_0->dlm_hb_down);
 FUNC_1(&VAR_0->dlm_domain_handlers);
}
