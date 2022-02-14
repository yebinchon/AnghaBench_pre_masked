
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ipt {scalar_t__ tcf_bindcnt; scalar_t__ tcf_refcnt; int common; int tcfi_t; int tcfi_tname; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct tcf_ipt *VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 if (VAR_2) {
  if (VAR_3)
   VAR_2->tcf_bindcnt--;
  VAR_2->tcf_refcnt--;
  if (VAR_2->tcf_bindcnt <= 0 && VAR_2->tcf_refcnt <= 0) {
   FUNC_0(VAR_2->tcfi_t);
   FUNC_1(VAR_2->tcfi_tname);
   FUNC_1(VAR_2->tcfi_t);
   FUNC_2(&VAR_2->common, &VAR_1);
   VAR_4 = VAR_0;
  }
 }
 return VAR_4;
}
