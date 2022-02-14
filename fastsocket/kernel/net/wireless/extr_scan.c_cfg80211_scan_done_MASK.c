
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg80211_scan_request {int aborted; int wiphy; } ;
struct TYPE_2__ {int scan_done_wk; struct cfg80211_scan_request* scan_req; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct cfg80211_scan_request*,int) ;
 TYPE_1__* FUNC_3 (int ) ;

void FUNC_4(struct cfg80211_scan_request *VAR_1, bool VAR_2)
{
 FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_1 != FUNC_3(VAR_1->wiphy)->scan_req);

 VAR_1->aborted = VAR_2;
 FUNC_1(VAR_0, &FUNC_3(VAR_1->wiphy)->scan_done_wk);
}
