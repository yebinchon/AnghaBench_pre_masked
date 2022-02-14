
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_1__ hw; int ack_status_frames; scalar_t__ wiphy_ciphers_allocated; int mtx; int iflist_mtx; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_4__ {int cipher_suites; } ;


 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6(struct ieee80211_hw *VAR_1)
{
 struct ieee80211_local *VAR_2 = FUNC_0(VAR_1);

 FUNC_4(&VAR_2->iflist_mtx);
 FUNC_4(&VAR_2->mtx);

 if (VAR_2->wiphy_ciphers_allocated)
  FUNC_3(VAR_2->hw.wiphy->cipher_suites);

 FUNC_2(&VAR_2->ack_status_frames,
       VAR_0, ((void*)0));
 FUNC_1(&VAR_2->ack_status_frames);

 FUNC_5(VAR_2->hw.wiphy);
}
