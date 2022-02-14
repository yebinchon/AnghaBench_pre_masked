
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211req_chaninfo {int ic_nchans; struct ieee80211_channel* ic_chans; } ;
struct ieee80211_channel {scalar_t__ ic_maxpower; int ic_ieee; } ;
typedef int reported ;
struct TYPE_3__ {int ic_nchans; struct ieee80211_channel* ic_chans; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ieee80211req_chaninfo*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 struct ieee80211req_chaninfo* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct ieee80211_channel*) ;
 int FUNC_9 (struct ieee80211_channel*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int *,int ) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_12(int VAR_3)
{
 struct ieee80211req_chaninfo *VAR_4;
 uint8_t VAR_5[VAR_0];
 struct ieee80211_channel *VAR_6, *VAR_7;
 int VAR_8, VAR_9;

 FUNC_4(VAR_3);
 VAR_4 = FUNC_6(FUNC_0(VAR_1));
 if (VAR_4 == ((void*)0))
  FUNC_2(1, "no space for active channel list");
 VAR_4->ic_nchans = 0;
 FUNC_7(VAR_5, 0, sizeof(VAR_5));
 for (VAR_8 = 0; VAR_8 < VAR_1->ic_nchans; VAR_8++) {
  VAR_6 = &VAR_1->ic_chans[VAR_8];

  if (FUNC_5(VAR_5, VAR_6->ic_ieee) && !VAR_2) {

   FUNC_1(VAR_4->ic_nchans > 0);
   VAR_7 = &VAR_4->ic_chans[VAR_4->ic_nchans-1];

   if (VAR_6->ic_maxpower > VAR_7->ic_maxpower)
    *VAR_7 = *VAR_6;
  } else {
   VAR_4->ic_chans[VAR_4->ic_nchans++] = *VAR_6;
   FUNC_11(VAR_5, VAR_6->ic_ieee);
  }
 }
 if (!VAR_2) {
  VAR_9 = VAR_4->ic_nchans / 2;
  if (VAR_4->ic_nchans % 2)
   VAR_9++;

  for (VAR_8 = 0; VAR_8 < VAR_4->ic_nchans / 2; VAR_8++) {
   FUNC_8(&VAR_4->ic_chans[VAR_8]);
   FUNC_8(&VAR_4->ic_chans[VAR_9+VAR_8]);
   FUNC_10("\n");
  }
  if (VAR_4->ic_nchans % 2) {
   FUNC_8(&VAR_4->ic_chans[VAR_8]);
   FUNC_10("\n");
  }
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_4->ic_nchans; VAR_8++) {
   FUNC_9(&VAR_4->ic_chans[VAR_8]);
   FUNC_10("\n");
  }
 }
 FUNC_3(VAR_4);
}
