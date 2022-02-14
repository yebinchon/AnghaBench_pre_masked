
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {scalar_t__* chan_num_5ghz; int * chan_list_5ghz; } ;
struct ieee80211com {int ic_htcaps; struct rtwn_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,scalar_t__,int *,int) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (scalar_t__*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_7,
    int VAR_8, int *VAR_9, struct ieee80211_channel VAR_10[])
{
 struct rtwn_softc *VAR_11 = VAR_7->ic_softc;
 uint8_t VAR_12[VAR_6];
 int VAR_13;

 FUNC_2(VAR_12, 0, sizeof(VAR_12));
 FUNC_4(VAR_12, VAR_2);
 FUNC_4(VAR_12, VAR_3);
 FUNC_4(VAR_12, VAR_5);
 FUNC_1(VAR_10, VAR_8, VAR_9,
     VAR_12, !!(VAR_7->ic_htcaps & VAR_0));


 FUNC_4(VAR_12, VAR_1);
 FUNC_4(VAR_12, VAR_4);
 for (VAR_13 = 0; VAR_13 < FUNC_3(VAR_11->chan_num_5ghz); VAR_13++) {
  if (VAR_11->chan_num_5ghz[VAR_13] == 0)
   continue;

  FUNC_0(VAR_10, VAR_8, VAR_9,
      VAR_11->chan_list_5ghz[VAR_13], VAR_11->chan_num_5ghz[VAR_13], VAR_12,
      !!(VAR_7->ic_htcaps & VAR_0));
 }
}
