
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_vap {int rvp_id; int * beacon_mbuf; } ;
struct run_softc {int ratectl_run; int rvp_bmap; int rvp_cnt; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct run_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct run_softc*,int ,char*,struct ieee80211vap*,int,int,int ) ;
 int FUNC_3 (struct run_softc*) ;
 int FUNC_4 (struct run_softc*) ;
 struct run_vap* FUNC_5 (struct ieee80211vap*) ;
 int FUNC_6 (struct run_vap*,int ) ;
 int FUNC_7 (struct ieee80211vap*) ;
 int FUNC_8 (struct ieee80211vap*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct run_softc*,int ,int ,int) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211vap *VAR_2)
{
 struct run_vap *VAR_3 = FUNC_5(VAR_2);
 struct ieee80211com *VAR_4;
 struct run_softc *VAR_5;
 uint8_t VAR_6;

 if (VAR_2 == ((void*)0))
  return;

 VAR_4 = VAR_2->iv_ic;
 VAR_5 = VAR_4->ic_softc;

 FUNC_3(VAR_5);

 FUNC_9(VAR_3->beacon_mbuf);
 VAR_3->beacon_mbuf = ((void*)0);

 VAR_6 = VAR_3->rvp_id;
 VAR_5->ratectl_run &= ~(1 << VAR_6);
 VAR_5->rvp_bmap &= ~(1 << VAR_6);
 FUNC_10(VAR_5, FUNC_1(VAR_6, 0), 0, 128);
 FUNC_10(VAR_5, FUNC_0(VAR_6), 0, 512);
 --VAR_5->rvp_cnt;

 FUNC_2(VAR_5, VAR_1,
     "vap=%p rvp_id=%d bmap=%x rvp_cnt=%d\n",
     VAR_2, VAR_6, VAR_5->rvp_bmap, VAR_5->rvp_cnt);

 FUNC_4(VAR_5);

 FUNC_7(VAR_2);
 FUNC_8(VAR_2);
 FUNC_6(VAR_3, VAR_0);
}
