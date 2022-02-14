
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211req_chaninfo {int ic_nchans; int ic_chans; } ;
struct ieee80211req {int i_len; int i_data; } ;
struct ieee80211com {int (* ic_getradiocaps ) (struct ieee80211com*,int,int*,int ) ;int ic_vhtcaps; int ic_htcaps; int ic_cryptocaps; int ic_caps; } ;
struct ieee80211_devcaps_req {struct ieee80211req_chaninfo dc_chaninfo; int dc_vhtcaps; int dc_htcaps; int dc_cryptocaps; int dc_drivercaps; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_devcaps_req*) ;
 int FUNC_2 (struct ieee80211_devcaps_req*,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int,char*) ;
 int VAR_4 ;
 int FUNC_5 (struct ieee80211_devcaps_req*,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct ieee80211com*,int,int*,int ) ;

__attribute__((used)) static int
FUNC_8(struct ieee80211com *VAR_5,
 const struct ieee80211req *VAR_6)
{
 struct ieee80211_devcaps_req *VAR_7;
 struct ieee80211req_chaninfo *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = 1 + ((VAR_6->i_len - sizeof(struct ieee80211_devcaps_req)) /
     sizeof(struct ieee80211_channel));

 if (VAR_9 < 1)
  return VAR_0;

 if (VAR_9 > 2048)
  VAR_9 = 2048;
 VAR_7 = (struct ieee80211_devcaps_req *)
     FUNC_3(FUNC_0(VAR_9), VAR_4,
     VAR_2 | VAR_3);
 if (VAR_7 == ((void*)0))
  return VAR_1;
 VAR_7->dc_drivercaps = VAR_5->ic_caps;
 VAR_7->dc_cryptocaps = VAR_5->ic_cryptocaps;
 VAR_7->dc_htcaps = VAR_5->ic_htcaps;
 VAR_7->dc_vhtcaps = VAR_5->ic_vhtcaps;
 VAR_8 = &VAR_7->dc_chaninfo;
 VAR_5->ic_getradiocaps(VAR_5, VAR_9, &VAR_8->ic_nchans, VAR_8->ic_chans);
 FUNC_4(VAR_8->ic_nchans <= VAR_9,
     ("nchans %d maxchans %d", VAR_8->ic_nchans, VAR_9));
 FUNC_6(VAR_8->ic_chans, VAR_8->ic_nchans);
 VAR_10 = FUNC_5(VAR_7, VAR_6->i_data, FUNC_1(VAR_7));
 FUNC_2(VAR_7, VAR_4);
 return VAR_10;
}
