
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dot11MeshHWMPpreqMinInterval; } ;
struct ieee80211_if_mesh {int wrkq_flags; TYPE_1__ mshcfg; scalar_t__ last_preq; scalar_t__ preq_queue_len; } ;
struct TYPE_4__ {struct ieee80211_if_mesh mesh; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;

void FUNC_9(struct ieee80211_sub_if_data *VAR_6)
{
 struct ieee80211_if_mesh *VAR_7 = &VAR_6->u.mesh;

 if (VAR_7->preq_queue_len &&
     FUNC_8(VAR_5,
         VAR_7->last_preq + FUNC_6(VAR_7->mshcfg.dot11MeshHWMPpreqMinInterval)))
  FUNC_4(VAR_6);

 if (FUNC_7(VAR_1, &VAR_7->wrkq_flags))
  FUNC_2();

 if (FUNC_7(VAR_2, &VAR_7->wrkq_flags))
  FUNC_3();

 if (FUNC_7(VAR_3, &VAR_7->wrkq_flags))
  FUNC_0(VAR_6);

 if (FUNC_7(VAR_4, &VAR_7->wrkq_flags))
  FUNC_1(VAR_6);

 if (FUNC_7(VAR_0, &VAR_7->wrkq_flags))
  FUNC_5(VAR_6);
}
