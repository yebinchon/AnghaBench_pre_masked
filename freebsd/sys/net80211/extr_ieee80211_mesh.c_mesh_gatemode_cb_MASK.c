
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211vap {int iv_bss; int iv_myaddr; struct ieee80211_mesh_state* iv_mesh; } ;
struct ieee80211_meshgann_ie {scalar_t__ gann_seq; int gann_interval; int gann_addr; int gann_ttl; scalar_t__ gann_hopcount; scalar_t__ gann_flags; } ;
struct ieee80211_mesh_state {int ms_gateseq; int ms_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ieee80211vap*,int ,int ,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,struct ieee80211_meshgann_ie*) ;
 int FUNC_3 (struct ieee80211vap*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct ieee80211vap *VAR_5 = (struct ieee80211vap *)VAR_4;
 struct ieee80211_mesh_state *VAR_6 = VAR_5->iv_mesh;
 struct ieee80211_meshgann_ie VAR_7;

 VAR_7.gann_flags = 0;
 VAR_7.gann_hopcount = 0;
 VAR_7.gann_ttl = VAR_6->ms_ttl;
 FUNC_0(VAR_7.gann_addr, VAR_5->iv_myaddr);
 VAR_7.gann_seq = VAR_6->ms_gateseq++;
 VAR_7.gann_interval = VAR_3;

 FUNC_1(VAR_5, VAR_2, VAR_5->iv_bss,
     "send broadcast GANN (seq %u)", VAR_7.gann_seq);

 FUNC_2(VAR_5->iv_bss, VAR_0,
     VAR_1, &VAR_7);
 FUNC_3(VAR_5);
}
