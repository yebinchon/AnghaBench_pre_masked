
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t action; } ;
struct TYPE_6__ {TYPE_1__ fst_action; } ;
struct TYPE_7__ {scalar_t__ category; TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; int sa; } ;
struct fst_session {int dummy; } ;
struct fst_iface {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t* VAR_7 ;
 struct fst_session* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fst_iface*) ;
 int FUNC_2 (struct fst_iface*,int ,char*,...) ;
 int FUNC_3 (struct fst_session*,struct fst_iface*,struct ieee80211_mgmt const*,size_t) ;
 int FUNC_4 (struct fst_iface*,struct ieee80211_mgmt const*,size_t) ;

void FUNC_5(struct fst_iface *VAR_8,
         const struct ieee80211_mgmt *VAR_9,
         size_t VAR_10)
{
 struct fst_session *VAR_11;

 if (VAR_10 < VAR_2 + 2 ||
     VAR_9->u.action.category != VAR_6) {
  FUNC_2(VAR_8, VAR_4,
     "invalid Action frame received");
  return;
 }

 if (VAR_9->u.action.u.fst_action.action <= VAR_0) {
  FUNC_2(VAR_8, VAR_3,
     "FST Action '%s' received!",
     VAR_7[VAR_9->u.action.u.fst_action.action]);
 } else {
  FUNC_2(VAR_8, VAR_5,
     "unknown FST Action (%u) received!",
     VAR_9->u.action.u.fst_action.action);
  return;
 }

 if (VAR_9->u.action.u.fst_action.action == VAR_1) {
  FUNC_4(VAR_8, VAR_9, VAR_10);
  return;
 }

 VAR_11 = FUNC_0(VAR_9->sa, FUNC_1(VAR_8));
 if (VAR_11) {
  FUNC_3(VAR_11, VAR_8, VAR_9, VAR_10);
 } else {
  FUNC_2(VAR_8, VAR_5,
     "FST Action '%s' dropped: no session in progress found",
     VAR_7[VAR_9->u.action.u.fst_action.action]);
 }
}
