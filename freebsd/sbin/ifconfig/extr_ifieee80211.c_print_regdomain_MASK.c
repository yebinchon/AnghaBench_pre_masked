
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regdomain {int name; } ;
struct ieee80211_regdomain {scalar_t__ regdomain; scalar_t__ country; char location; scalar_t__ ecm; } ;
struct country {int isoname; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 () ;
 struct country* FUNC_2 (int ,scalar_t__) ;
 struct regdomain* FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(const struct ieee80211_regdomain *VAR_0, int VAR_1)
{
 if ((VAR_0->regdomain != 0 &&
     VAR_0->regdomain != VAR_0->country) || VAR_1) {
  const struct regdomain *VAR_2 =
      FUNC_3(FUNC_1(), VAR_0->regdomain);
  if (VAR_2 == ((void*)0))
   FUNC_0("regdomain %d", VAR_0->regdomain);
  else
   FUNC_0("regdomain %s", VAR_2->name);
 }
 if (VAR_0->country != 0 || VAR_1) {
  const struct country *VAR_3 =
      FUNC_2(FUNC_1(), VAR_0->country);
  if (VAR_3 == ((void*)0))
   FUNC_0("country %d", VAR_0->country);
  else
   FUNC_0("country %s", VAR_3->isoname);
 }
 if (VAR_0->location == 'I')
  FUNC_0("indoor");
 else if (VAR_0->location == 'O')
  FUNC_0("outdoor");
 else if (VAR_1)
  FUNC_0("anywhere");
 if (VAR_0->ecm)
  FUNC_0("ecm");
 else if (VAR_1)
  FUNC_0("-ecm");
}
