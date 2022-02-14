
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_hwmp_rootrann; } ;
struct ieee80211vap {TYPE_1__ iv_stats; int iv_myaddr; int iv_bss; struct ieee80211_mesh_state* iv_mesh; struct ieee80211_hwmp_state* iv_hwmp; } ;
struct ieee80211_meshrann_ie {int rann_flags; int rann_metric; int rann_interval; scalar_t__ rann_seq; int rann_addr; int rann_ttl; scalar_t__ rann_hopcount; } ;
struct ieee80211_mesh_state {int ms_flags; int ms_ttl; } ;
struct ieee80211_hwmp_state {scalar_t__ hs_seq; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211vap*,int ,int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct ieee80211vap*,int ,struct ieee80211_meshrann_ie*) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4(void *VAR_5)
{
 struct ieee80211vap *VAR_6 = (struct ieee80211vap *)VAR_5;
 struct ieee80211_hwmp_state *VAR_7 = VAR_6->iv_hwmp;
 struct ieee80211_mesh_state *VAR_8 = VAR_6->iv_mesh;
 struct ieee80211_meshrann_ie VAR_9;

 FUNC_1(VAR_6, VAR_2, VAR_6->iv_bss,
     "%s", "send broadcast RANN");

 VAR_9.rann_flags = 0;
 if (VAR_8->ms_flags & VAR_0)
  VAR_9.rann_flags |= VAR_0;
 VAR_9.rann_hopcount = 0;
 VAR_9.rann_ttl = VAR_8->ms_ttl;
 FUNC_0(VAR_9.rann_addr, VAR_6->iv_myaddr);
 VAR_9.rann_seq = ++VAR_7->hs_seq;
 VAR_9.rann_interval = VAR_4;
 VAR_9.rann_metric = VAR_1;

 VAR_6->iv_stats.is_hwmp_rootrann++;
 FUNC_3(VAR_6, VAR_3, &VAR_9);
 FUNC_2(VAR_6);
}
