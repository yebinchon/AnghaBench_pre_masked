
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_nchans; struct ieee80211_channel* ic_channels; } ;
struct ieee80211_channel {int ic_ieee; int ic_freq; int ic_maxregpower; int ic_minpower; int ic_maxpower; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_8 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_9 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_10 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_11 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_12 (struct ieee80211_channel const*) ;
 int FUNC_13 (char*,...) ;

void
FUNC_14(struct ieee80211com *VAR_0)
{
 const struct ieee80211_channel *VAR_1;
 char VAR_2;
 int VAR_3, VAR_4;

 FUNC_13("Chan  Freq  CW  RegPwr  MinPwr  MaxPwr\n");
 for (VAR_3 = 0; VAR_3 < VAR_0->ic_nchans; VAR_3++) {
  VAR_1 = &VAR_0->ic_channels[VAR_3];
  if (FUNC_11(VAR_1))
   VAR_2 = 'S';
  else if (FUNC_0(VAR_1))
   VAR_2 = 'T';
  else if (FUNC_1(VAR_1))
   VAR_2 = 'G';
  else if (FUNC_6(VAR_1))
   VAR_2 = 'n';
  else if (FUNC_2(VAR_1))
   VAR_2 = 'a';
  else if (FUNC_3(VAR_1))
   VAR_2 = 'g';
  else if (FUNC_4(VAR_1))
   VAR_2 = 'b';
  else
   VAR_2 = 'f';
  if (FUNC_7(VAR_1) || FUNC_12(VAR_1))
   VAR_4 = 40;
  else if (FUNC_5(VAR_1))
   VAR_4 = 10;
  else if (FUNC_10(VAR_1))
   VAR_4 = 5;
  else
   VAR_4 = 20;
  FUNC_13("%4d  %4d%c %2d%c %6d  %4d.%d  %4d.%d\n"
   , VAR_1->ic_ieee, VAR_1->ic_freq, VAR_2
   , VAR_4
   , FUNC_9(VAR_1) ? '+' :
     FUNC_8(VAR_1) ? '-' : ' '
   , VAR_1->ic_maxregpower
   , VAR_1->ic_minpower / 2, VAR_1->ic_minpower & 1 ? 5 : 0
   , VAR_1->ic_maxpower / 2, VAR_1->ic_maxpower & 1 ? 5 : 0
  );
 }
}
