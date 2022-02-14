
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {int dummy; } ;
struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (struct ieee80211vap*,int,struct ieee80211_frame const*,int *,char*,char*) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_1(struct ieee80211vap *VAR_5,
    const struct ieee80211_frame *VAR_6, const uint8_t *VAR_7)
{
 int VAR_8 = -1;
 if (VAR_7[2] & VAR_2) {
  if (VAR_7[1] == VAR_1)
   VAR_8 = VAR_1;
 } else if (VAR_7[1] == VAR_0)
  VAR_8 = VAR_0;
 if(VAR_8 < 0) {
  FUNC_0(VAR_5,
      VAR_3 | VAR_4,
      VAR_6, ((void*)0), "PREP (AE=%s) with wrong len",
      VAR_7[2] & VAR_2 ? "1" : "0");
  return (-1);
 }
 return (1);
}
