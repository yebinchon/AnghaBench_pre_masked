
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {int regdomain; int country; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
__attribute__((used)) static int
FUNC_0(const struct ieee80211_regdomain *VAR_11)
{
 switch (VAR_11->regdomain) {
 case 131:
 case 130:
  return VAR_6;
 case 135:
  return VAR_8;
 case 134:
 case 133:
 case 132:
  if (VAR_11->country == VAR_2)
   return VAR_10;
  if (VAR_11->country == VAR_0 || VAR_11->country == VAR_1)
   return VAR_7;

  return VAR_5;
 case 129:
  return VAR_9;
 case 128:
  return VAR_4;
 case 138:
 case 137:
 case 136:
  return VAR_3;
 }

 return VAR_6;
}
