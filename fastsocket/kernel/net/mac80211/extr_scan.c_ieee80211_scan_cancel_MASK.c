
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_local {int mtx; int hw; int scan_work; int scan_sdata; TYPE_1__* ops; int scanning; int scan_req; } ;
struct TYPE_2__ {scalar_t__ cancel_hw_scan; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_local*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void FUNC_8(struct ieee80211_local *VAR_1)
{
 FUNC_4(&VAR_1->mtx);
 if (!VAR_1->scan_req)
  goto out;

 if (FUNC_7(VAR_0, &VAR_1->scanning)) {
  if (VAR_1->ops->cancel_hw_scan)
   FUNC_2(VAR_1,
    FUNC_6(VAR_1->scan_sdata,
      FUNC_3(&VAR_1->mtx)));
  goto out;
 }






 FUNC_1(&VAR_1->scan_work);

 FUNC_0(&VAR_1->hw, 1, 0);
out:
 FUNC_5(&VAR_1->mtx);
}
