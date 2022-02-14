
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_regdomain {int * alpha2; } ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (struct ieee80211_regdomain const*) ;

__attribute__((used)) static void FUNC_2(const struct ieee80211_regdomain *VAR_0)
{
 FUNC_0("Regulatory domain: %c%c\n", VAR_0->alpha2[0], VAR_0->alpha2[1]);
 FUNC_1(VAR_0);
}
