
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_msghdr {scalar_t__ rtm_type; scalar_t__ rtm_version; } ;
struct if_announcemsghdr {scalar_t__ ifan_what; } ;
struct ieee80211req {int sr_flags; int i_len; struct ieee80211req* i_data; scalar_t__ sr_nssid; int sr_duration; int i_type; int i_name; } ;
struct ieee80211_scan_req {int sr_flags; int i_len; struct ieee80211_scan_req* i_data; scalar_t__ sr_nssid; int sr_duration; int i_type; int i_name; } ;
typedef int sr ;
typedef int ireq ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int ,struct ieee80211req*) ;
 int FUNC_2 (struct ieee80211req*,int ,int) ;
 int VAR_12 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int,char*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_13)
{
 struct ieee80211_scan_req VAR_14;
 struct ieee80211req VAR_15;
 int VAR_16;

 VAR_16 = FUNC_5(VAR_6, VAR_11, 0);
 if (VAR_16 < 0) {
  FUNC_3("socket(PF_ROUTE,SOCK_RAW)");
  return;
 }
 (void) FUNC_2(&VAR_15, 0, sizeof(VAR_15));
 (void) FUNC_6(VAR_15.i_name, VAR_12, sizeof(VAR_15.i_name));
 VAR_15.i_type = VAR_5;

 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.sr_flags = VAR_0
      | VAR_1
      | VAR_3
      | VAR_4;
 VAR_14.sr_duration = VAR_2;
 VAR_14.sr_nssid = 0;

 VAR_15.i_data = &VAR_14;
 VAR_15.i_len = sizeof(VAR_14);





 if (FUNC_1(VAR_13, VAR_10, &VAR_15) == 0) {
  char VAR_17[2048];
  struct if_announcemsghdr *VAR_18;
  struct rt_msghdr *VAR_19;

  do {
   if (FUNC_4(VAR_16, VAR_17, sizeof(VAR_17)) < 0) {
    FUNC_3("read(PF_ROUTE)");
    break;
   }
   VAR_19 = (struct rt_msghdr *) VAR_17;
   if (VAR_19->rtm_version != VAR_9)
    break;
   VAR_18 = (struct if_announcemsghdr *) VAR_19;
  } while (VAR_19->rtm_type != VAR_7 ||
      VAR_18->ifan_what != VAR_8);
 }
 FUNC_0(VAR_16);
}
