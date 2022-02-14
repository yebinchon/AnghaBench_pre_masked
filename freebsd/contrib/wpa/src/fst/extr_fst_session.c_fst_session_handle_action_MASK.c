
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int action; } ;
struct TYPE_6__ {TYPE_1__ fst_action; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct TYPE_8__ {TYPE_3__ action; } ;
struct ieee80211_mgmt {TYPE_4__ u; } ;
struct fst_session {int dummy; } ;
struct fst_iface {int dummy; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fst_session*,int ,int ,char*) ;
 int FUNC_2 (struct fst_session*,struct fst_iface*,struct ieee80211_mgmt const*,size_t) ;
 int FUNC_3 (struct fst_session*,struct fst_iface*,struct ieee80211_mgmt const*,size_t) ;
 int FUNC_4 (struct fst_session*,struct fst_iface*,struct ieee80211_mgmt const*,size_t) ;
 int FUNC_5 (struct fst_session*,struct fst_iface*,struct ieee80211_mgmt const*,size_t) ;

void FUNC_6(struct fst_session *VAR_2,
          struct fst_iface *VAR_3,
          const struct ieee80211_mgmt *VAR_4,
          size_t VAR_5)
{
 switch (VAR_4->u.action.u.fst_action.action) {
 case 130:
  FUNC_0(0);
  break;
 case 129:
  FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case 128:
  FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case 133:
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case 132:
  FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
  break;
 case 131:
 default:
  FUNC_1(VAR_2, VAR_0, VAR_1,
      "Unsupported FST Action frame");
  break;
 }
}
