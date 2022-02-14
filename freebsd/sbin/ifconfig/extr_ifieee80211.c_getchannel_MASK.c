
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_freq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (struct ieee80211_channel*,int,int) ;
 int FUNC_5 (struct ieee80211_channel*,int,int) ;
 int FUNC_6 (struct ieee80211_channel*,int ,int) ;
 int FUNC_7 (char const*,char**,int) ;

__attribute__((used)) static void
FUNC_8(int VAR_3, struct ieee80211_channel *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 char *VAR_8;

 FUNC_6(VAR_4, 0, sizeof(*VAR_4));
 if (FUNC_3(VAR_5)) {
  VAR_4->ic_freq = VAR_1;
  return;
 }
 FUNC_1(VAR_3);
 VAR_2 = 0;
 VAR_6 = FUNC_7(VAR_5, &VAR_8, 10);
 if (VAR_5[0] == '\0' || VAR_5 == VAR_8 || VAR_2 == VAR_0 ||

     (VAR_8[0] != '\0' && VAR_8[0] != ':' && VAR_8[0] != '/'))
  FUNC_0(1, "invalid channel specification%s",
      VAR_2 == VAR_0 ? " (out of range)" : "");
 VAR_7 = FUNC_2(VAR_5, VAR_6);
 if (VAR_6 > 255) {
  FUNC_5(VAR_4, VAR_6, VAR_7);
 } else {
  FUNC_4(VAR_4, VAR_6, VAR_7);
 }
}
