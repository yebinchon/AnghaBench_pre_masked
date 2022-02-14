
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_defact {scalar_t__ tcf_bindcnt; scalar_t__ tcf_refcnt; int common; int tcfd_defdata; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct tcf_defact *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 if (VAR_1) {
  if (VAR_2)
   VAR_1->tcf_bindcnt--;
  VAR_1->tcf_refcnt--;
  if (VAR_1->tcf_bindcnt <= 0 && VAR_1->tcf_refcnt <= 0) {
   FUNC_0(VAR_1->tcfd_defdata);
   FUNC_1(&VAR_1->common, &VAR_0);
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
