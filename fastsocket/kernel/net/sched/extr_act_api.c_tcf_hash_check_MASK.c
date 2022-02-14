
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcf_hashinfo {int dummy; } ;
struct tcf_common {int tcfc_refcnt; int tcfc_bindcnt; } ;
struct tc_action {struct tcf_common* priv; } ;


 struct tcf_common* FUNC_0 (scalar_t__,struct tcf_hashinfo*) ;

struct tcf_common *FUNC_1(u32 VAR_0, struct tc_action *VAR_1, int VAR_2,
      struct tcf_hashinfo *VAR_3)
{
 struct tcf_common *VAR_4 = ((void*)0);
 if (VAR_0 && (VAR_4 = FUNC_0(VAR_0, VAR_3)) != ((void*)0)) {
  if (VAR_2)
   VAR_4->tcfc_bindcnt++;
  VAR_4->tcfc_refcnt++;
  VAR_1->priv = VAR_4;
 }
 return VAR_4;
}
