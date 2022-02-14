
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_txpowlimit; int ic_bintval; int ic_lintval; int ic_hash_key; int ic_update_chw; int ic_update_promisc; int ic_update_mcast; void* ic_oerrors; void* ic_ierrors; int ic_name; int ic_tq; int ic_vaps; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211com*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ieee80211com*,int ) ;
 int FUNC_2 (int *,struct ieee80211com*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 void* FUNC_5 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*) ;
 int FUNC_8 (struct ieee80211com*) ;
 int FUNC_9 (struct ieee80211com*) ;
 int FUNC_10 (struct ieee80211com*) ;
 int FUNC_11 (struct ieee80211com*) ;
 int FUNC_12 (struct ieee80211com*) ;
 int FUNC_13 (struct ieee80211com*) ;
 int FUNC_14 (struct ieee80211com*) ;
 int FUNC_15 (struct ieee80211com*) ;
 int FUNC_16 (struct ieee80211com*) ;
 int FUNC_17 (struct ieee80211com*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_20 (char*,int,int ,int *) ;
 int FUNC_21 (int *,int,int ,char*,int ) ;
 int VAR_11 ;

void
FUNC_22(struct ieee80211com *VAR_12)
{

 FUNC_0(VAR_12, VAR_12->ic_name);
 FUNC_1(VAR_12, VAR_12->ic_name);
 FUNC_3(&VAR_12->ic_vaps);


 VAR_12->ic_tq = FUNC_20("ic_taskq", VAR_2 | VAR_3,
     VAR_11, &VAR_12->ic_tq);
 FUNC_21(&VAR_12->ic_tq, 1, VAR_4, "%s net80211 taskq",
     VAR_12->ic_name);
 VAR_12->ic_ierrors = FUNC_5(VAR_2);
 VAR_12->ic_oerrors = FUNC_5(VAR_2);





 FUNC_6(VAR_12);

 VAR_12->ic_update_mcast = VAR_9;
 VAR_12->ic_update_promisc = VAR_10;
 VAR_12->ic_update_chw = VAR_8;

 VAR_12->ic_hash_key = FUNC_4();
 VAR_12->ic_bintval = VAR_0;
 VAR_12->ic_lintval = VAR_12->ic_bintval;
 VAR_12->ic_txpowlimit = VAR_1;

 FUNC_7(VAR_12);
 FUNC_10(VAR_12);
 FUNC_11(VAR_12);
 FUNC_12(VAR_12);



 FUNC_9(VAR_12);
 FUNC_17(VAR_12);
 FUNC_14(VAR_12);
 FUNC_13(VAR_12);
 FUNC_8(VAR_12);

 FUNC_16(VAR_12);

 FUNC_18(&VAR_6);
 FUNC_2(&VAR_5, VAR_12, VAR_7);
 FUNC_19(&VAR_6);
}
