
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_police {scalar_t__ tcf_refcnt; int tcf_bindcnt; } ;
struct tc_action {struct tcf_police* priv; } ;


 int FUNC_0 (struct tcf_police*) ;

__attribute__((used)) static int FUNC_1(struct tc_action *VAR_0, int VAR_1)
{
 struct tcf_police *VAR_2 = VAR_0->priv;
 int VAR_3 = 0;

 if (VAR_2 != ((void*)0)) {
  if (VAR_1)
   VAR_2->tcf_bindcnt--;

  VAR_2->tcf_refcnt--;
  if (VAR_2->tcf_refcnt <= 0 && !VAR_2->tcf_bindcnt) {
   FUNC_0(VAR_2);
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
