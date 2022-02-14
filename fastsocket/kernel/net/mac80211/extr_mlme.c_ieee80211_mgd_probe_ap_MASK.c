
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_if_managed {int flags; int mtx; scalar_t__ probe_send_count; int associated; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__* local; int vif; TYPE_1__ u; } ;
struct TYPE_4__ {int iflist_mtx; int mtx; scalar_t__ scanning; scalar_t__ tmp_channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_5,
       bool VAR_6)
{
 struct ieee80211_if_managed *VAR_7 = &VAR_5->u.mgd;
 bool VAR_8 = 0;

 if (!FUNC_3(VAR_5))
  return;

 FUNC_5(&VAR_7->mtx);

 if (!VAR_7->associated)
  goto out;

 FUNC_5(&VAR_5->local->mtx);

 if (VAR_5->local->tmp_channel || VAR_5->local->scanning) {
  FUNC_6(&VAR_5->local->mtx);
  goto out;
 }

 if (VAR_6) {
  FUNC_4(VAR_5,
         "detected beacon loss from AP (missed %d beacons) - probing\n",
         VAR_4);

  FUNC_0(&VAR_5->vif,
       VAR_3,
       VAR_0);
 }
 if (VAR_7->flags & (VAR_1 |
       VAR_2))
  VAR_8 = 1;

 if (VAR_6)
  VAR_7->flags |= VAR_1;
 else
  VAR_7->flags |= VAR_2;

 FUNC_6(&VAR_5->local->mtx);

 if (VAR_8)
  goto out;

 FUNC_5(&VAR_5->local->iflist_mtx);
 FUNC_2(VAR_5->local, -1);
 FUNC_6(&VAR_5->local->iflist_mtx);

 VAR_7->probe_send_count = 0;
 FUNC_1(VAR_5);
 out:
 FUNC_6(&VAR_7->mtx);
}
