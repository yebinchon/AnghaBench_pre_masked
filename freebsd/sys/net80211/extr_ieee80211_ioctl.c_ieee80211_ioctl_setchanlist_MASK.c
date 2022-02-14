
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int ic_nchans; int ic_chan_active; TYPE_1__* ic_bsschan; struct ieee80211_channel* ic_channels; } ;
struct ieee80211_channel {int ic_ieee; } ;
struct TYPE_2__ {int ic_ieee; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (scalar_t__,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct ieee80211vap*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int *,scalar_t__) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211vap *VAR_9, struct ieee80211req *VAR_10)
{
 struct ieee80211com *VAR_11 = VAR_9->iv_ic;
 uint8_t *VAR_12, *VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 if (VAR_10->i_len > sizeof(VAR_11->ic_chan_active))
  VAR_10->i_len = sizeof(VAR_11->ic_chan_active);
 VAR_13 = FUNC_1(VAR_10->i_len + VAR_4, VAR_7,
     VAR_5 | VAR_6);
 if (VAR_13 == ((void*)0))
  return VAR_2;
 VAR_17 = FUNC_2(VAR_10->i_data, VAR_13, VAR_10->i_len);
 if (VAR_17) {
  FUNC_0(VAR_13, VAR_7);
  return VAR_17;
 }
 VAR_15 = 0;
 VAR_12 = VAR_13 + VAR_10->i_len;
 VAR_16 = VAR_10->i_len * VAR_8;
 for (VAR_14 = 0; VAR_14 < VAR_11->ic_nchans; VAR_14++) {
  const struct ieee80211_channel *VAR_18 = &VAR_11->ic_channels[VAR_14];





  if (VAR_18->ic_ieee < VAR_16 && FUNC_5(VAR_13, VAR_18->ic_ieee)) {
   FUNC_7(VAR_12, VAR_18->ic_ieee);
   VAR_15++;
  }
 }
 if (VAR_15 == 0) {
  FUNC_0(VAR_13, VAR_7);
  return VAR_0;
 }
 if (VAR_11->ic_bsschan != VAR_3 &&
     FUNC_4(VAR_12, VAR_11->ic_bsschan->ic_ieee))
  VAR_11->ic_bsschan = VAR_3;
 FUNC_6(VAR_11->ic_chan_active, VAR_12, VAR_4);
 FUNC_3(VAR_9);
 FUNC_0(VAR_13, VAR_7);
 return VAR_1;
}
