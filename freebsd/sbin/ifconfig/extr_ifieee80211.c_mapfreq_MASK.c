
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct ieee80211_channel {int ic_freq; int ic_flags; } ;
struct TYPE_2__ {size_t ic_nchans; struct ieee80211_channel* ic_chans; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,char*,int,int) ;
 size_t FUNC_1 (size_t) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_channel *VAR_1, int VAR_2, int VAR_3)
{
 u_int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->ic_nchans; VAR_4++) {
  const struct ieee80211_channel *VAR_5 = &VAR_0->ic_chans[VAR_4];

  if (VAR_5->ic_freq == VAR_2 && (VAR_5->ic_flags & VAR_3) == VAR_3) {
   if (VAR_3 == 0) {

    VAR_5 = &VAR_0->ic_chans[FUNC_1(VAR_4)];
   }
   *VAR_1 = *VAR_5;
   return;
  }
 }
 FUNC_0(1, "unknown/undefined frequency %u/0x%x", VAR_2, VAR_3);
}
