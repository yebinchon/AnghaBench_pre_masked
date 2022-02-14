
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211_channel {int dummy; } ;
struct bwn_channelinfo {int nchannels; struct bwn_channel* channels; } ;
struct bwn_channel {int maxTxPow; int freq; int ieee; } ;


 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,int ,int ,int ,int const*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211_channel VAR_0[], int VAR_1, int *VAR_2,
    const struct bwn_channelinfo *VAR_3, const uint8_t VAR_4[])
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_3->nchannels && VAR_6 == 0; VAR_5++) {
  const struct bwn_channel *VAR_7 = &VAR_3->channels[VAR_5];

  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2,
      VAR_7->ieee, VAR_7->freq, VAR_7->maxTxPow, 0, VAR_4);
 }
}
