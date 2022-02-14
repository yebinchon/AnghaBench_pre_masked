
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_hashinfo {int dummy; } ;
struct tcf_common {scalar_t__ tcfc_bindcnt; scalar_t__ tcfc_refcnt; } ;


 int FUNC_0 (struct tcf_common*,struct tcf_hashinfo*) ;

int FUNC_1(struct tcf_common *VAR_0, int VAR_1,
       struct tcf_hashinfo *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_0) {
  if (VAR_1)
   VAR_0->tcfc_bindcnt--;

  VAR_0->tcfc_refcnt--;
  if (VAR_0->tcfc_bindcnt <= 0 && VAR_0->tcfc_refcnt <= 0) {
   FUNC_0(VAR_0, VAR_2);
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
