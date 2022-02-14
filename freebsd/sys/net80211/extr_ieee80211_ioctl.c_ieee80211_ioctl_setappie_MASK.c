
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211req {int i_val; } ;
struct ieee80211com {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211com*) ;
 int FUNC_1 (struct ieee80211com*) ;
 int FUNC_2 (struct ieee80211vap*,struct ieee80211req const*,int) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_3,
 const struct ieee80211req *VAR_4)
{
 struct ieee80211com *VAR_5 = VAR_3->iv_ic;
 int VAR_6;
 uint8_t VAR_7;

 VAR_7 = VAR_4->i_val & 0xff;
 if ((VAR_7 & VAR_1) != VAR_2)
  return VAR_0;

 FUNC_0(VAR_5);
 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_7);
 FUNC_1(VAR_5);
 return VAR_6;
}
