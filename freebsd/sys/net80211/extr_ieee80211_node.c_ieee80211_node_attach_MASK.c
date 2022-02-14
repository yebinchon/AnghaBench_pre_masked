
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_max_keyix; int ic_flags_ext; int ic_node_getmimoinfo; int ic_node_getsignal; int ic_node_getrssi; void* ic_node_drain; void* ic_node_age; int ic_node_cleanup; int ic_node_free; int ic_node_alloc; int ic_inact; int ic_sta; int ic_stageq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int,int ,struct ieee80211com*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (struct ieee80211com*,int *,char*,int ,int) ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void
FUNC_4(struct ieee80211com *VAR_12)
{

 FUNC_2(&VAR_12->ic_stageq, VAR_12->ic_max_keyix * 8,
     "802.11 staging q");
 FUNC_3(VAR_12, &VAR_12->ic_sta, "station",
  VAR_1, VAR_12->ic_max_keyix);
 FUNC_0(&VAR_12->ic_inact, 1);
 FUNC_1(&VAR_12->ic_inact, VAR_2*VAR_3,
  VAR_4, VAR_12);

 VAR_12->ic_node_alloc = VAR_6;
 VAR_12->ic_node_free = VAR_8;
 VAR_12->ic_node_cleanup = VAR_7;
 VAR_12->ic_node_age = VAR_5;
 VAR_12->ic_node_drain = VAR_5;
 VAR_12->ic_node_getrssi = VAR_10;
 VAR_12->ic_node_getsignal = VAR_11;
 VAR_12->ic_node_getmimoinfo = VAR_9;





 VAR_12->ic_flags_ext |= VAR_0;
}
