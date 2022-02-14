
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcf_hashinfo {int dummy; } ;
struct TYPE_2__ {void* lastuse; void* install; } ;
struct tcf_common {int tcfc_refcnt; int tcfc_bindcnt; int tcfc_lock; int tcfc_rate_est; int tcfc_bstats; TYPE_1__ tcfc_tm; scalar_t__ tcfc_index; } ;
struct tc_action {void* priv; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 struct tcf_common* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int *,struct nlattr*) ;
 void* VAR_2 ;
 int FUNC_2 (struct tcf_common*) ;
 struct tcf_common* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__*,struct tcf_hashinfo*) ;
 scalar_t__ FUNC_6 (int) ;

struct tcf_common *FUNC_7(u32 VAR_3, struct nlattr *VAR_4,
       struct tc_action *VAR_5, int VAR_6, int VAR_7,
       u32 *VAR_8, struct tcf_hashinfo *VAR_9)
{
 struct tcf_common *VAR_10 = FUNC_3(VAR_6, VAR_1);

 if (FUNC_6(!VAR_10))
  return FUNC_0(-VAR_0);
 VAR_10->tcfc_refcnt = 1;
 if (VAR_7)
  VAR_10->tcfc_bindcnt = 1;

 FUNC_4(&VAR_10->tcfc_lock);
 VAR_10->tcfc_index = VAR_3 ? VAR_3 : FUNC_5(VAR_8, VAR_9);
 VAR_10->tcfc_tm.install = VAR_2;
 VAR_10->tcfc_tm.lastuse = VAR_2;
 if (VAR_4) {
  int VAR_11 = FUNC_1(&VAR_10->tcfc_bstats, &VAR_10->tcfc_rate_est,
         &VAR_10->tcfc_lock, VAR_4);
  if (VAR_11) {
   FUNC_2(VAR_10);
   return FUNC_0(VAR_11);
  }
 }

 VAR_5->priv = (void *) VAR_10;
 return VAR_10;
}
