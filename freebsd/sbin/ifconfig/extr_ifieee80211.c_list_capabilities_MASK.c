
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ic_nchans; } ;
struct ieee80211_devcaps_req {scalar_t__ dc_drivercaps; scalar_t__ dc_cryptocaps; scalar_t__ dc_htcaps; scalar_t__ dc_vhtcaps; TYPE_1__ dc_chaninfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct ieee80211_devcaps_req*) ;
 int FUNC_3 (int,struct ieee80211_devcaps_req*) ;
 struct ieee80211_devcaps_req* FUNC_4 (int ) ;
 int FUNC_5 (int,TYPE_1__*,int,scalar_t__) ;
 int FUNC_6 (char*,scalar_t__,int ) ;
 int FUNC_7 (char) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_8(int VAR_7)
{
 struct ieee80211_devcaps_req *VAR_8;

 if (VAR_6)
  VAR_8 = FUNC_4(FUNC_0(VAR_4));
 else
  VAR_8 = FUNC_4(FUNC_0(1));
 if (VAR_8 == ((void*)0))
  FUNC_1(1, "no space for device capabilities");
 VAR_8->dc_chaninfo.ic_nchans = VAR_6 ? VAR_4 : 1;
 FUNC_3(VAR_7, VAR_8);
 FUNC_6("drivercaps", VAR_8->dc_drivercaps, VAR_1);
 if (VAR_8->dc_cryptocaps != 0 || VAR_6) {
  FUNC_7('\n');
  FUNC_6("cryptocaps", VAR_8->dc_cryptocaps, VAR_0);
 }
 if (VAR_8->dc_htcaps != 0 || VAR_6) {
  FUNC_7('\n');
  FUNC_6("htcaps", VAR_8->dc_htcaps, VAR_2);
 }
 if (VAR_8->dc_vhtcaps != 0 || VAR_6) {
  FUNC_7('\n');
  FUNC_6("vhtcaps", VAR_8->dc_vhtcaps, VAR_3);
 }

 FUNC_7('\n');
 if (VAR_6) {
  VAR_5 = &VAR_8->dc_chaninfo;
  FUNC_5(VAR_7, &VAR_8->dc_chaninfo, 1 , VAR_6);
 }
 FUNC_2(VAR_8);
}
