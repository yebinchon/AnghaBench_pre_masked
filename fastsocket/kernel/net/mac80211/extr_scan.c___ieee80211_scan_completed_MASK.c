
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int * scan_channel; scalar_t__ scanning; int scan_sdata; int * scan_req; int * int_scan_req; int * hw_scan_req; int mtx; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct ieee80211_local*,int ,int *) ;
 int FUNC_3 (struct ieee80211_local*) ;
 struct ieee80211_local* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_local*) ;
 int FUNC_6 (struct ieee80211_local*,int ) ;
 int FUNC_7 (struct ieee80211_local*) ;
 int FUNC_8 (struct ieee80211_local*) ;
 int FUNC_9 (struct ieee80211_local*) ;
 int FUNC_10 (struct ieee80211_local*) ;
 scalar_t__ FUNC_11 (struct ieee80211_local*) ;
 int FUNC_12 (struct ieee80211_local*) ;
 int FUNC_13 (struct ieee80211_local*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int *) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void FUNC_19(struct ieee80211_hw *VAR_0, bool VAR_1,
           bool VAR_2)
{
 struct ieee80211_local *VAR_3 = FUNC_4(VAR_0);

 FUNC_15(&VAR_3->mtx);







 if (FUNC_0(!VAR_3->scanning && !VAR_1))
  VAR_1 = 1;

 if (FUNC_0(!VAR_3->scan_req))
  return;

 if (VAR_2 && !VAR_1 && FUNC_11(VAR_3)) {
  int VAR_4;

  VAR_4 = FUNC_2(VAR_3,
   FUNC_18(VAR_3->scan_sdata,
        FUNC_16(&VAR_3->mtx)),
   VAR_3->hw_scan_req);

  if (VAR_4 == 0)
   return;
 }

 FUNC_14(VAR_3->hw_scan_req);
 VAR_3->hw_scan_req = ((void*)0);

 if (VAR_3->scan_req != VAR_3->int_scan_req)
  FUNC_1(VAR_3->scan_req, VAR_1);
 VAR_3->scan_req = ((void*)0);
 FUNC_17(VAR_3->scan_sdata, ((void*)0));

 VAR_3->scanning = 0;
 VAR_3->scan_channel = ((void*)0);


 FUNC_6(VAR_3, 0);

 if (!VAR_2) {
  FUNC_5(VAR_3);
  FUNC_3(VAR_3);
  FUNC_10(VAR_3);
 }

 FUNC_12(VAR_3);

 FUNC_9(VAR_3);
 FUNC_7(VAR_3);
 FUNC_8(VAR_3);
 FUNC_13(VAR_3);
}
