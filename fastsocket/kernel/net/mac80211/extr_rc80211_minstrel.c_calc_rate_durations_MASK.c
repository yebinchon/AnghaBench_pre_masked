
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_rate {void* ack_time; void* perfect_tx_time; } ;
struct ieee80211_rate {int flags; int bitrate; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;


 int VAR_0 ;
 void* FUNC_0 (int,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_1(enum ieee80211_band VAR_1,
      struct minstrel_rate *VAR_2,
      struct ieee80211_rate *VAR_3)
{
 int VAR_4 = !!(VAR_3->flags & VAR_0);

 VAR_2->perfect_tx_time = FUNC_0(VAR_1, 1200,
   VAR_3->bitrate, VAR_4, 1);
 VAR_2->ack_time = FUNC_0(VAR_1, 10,
   VAR_3->bitrate, VAR_4, 1);
}
