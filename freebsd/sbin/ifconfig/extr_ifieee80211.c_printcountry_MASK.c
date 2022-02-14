
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int8_t ;
struct ieee80211_country_ie {int* cc; int len; TYPE_1__* band; } ;
struct TYPE_2__ {int schan; int nchan; int maxtxpwr; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_0, const u_int8_t *VAR_1, size_t VAR_2, int VAR_3)
{
 const struct ieee80211_country_ie *VAR_4 =
    (const struct ieee80211_country_ie *) VAR_1;
 int VAR_5, VAR_6, VAR_7, VAR_8;

 FUNC_0("%s<%c%c%c", VAR_0, VAR_4->cc[0], VAR_4->cc[1], VAR_4->cc[2]);
 VAR_6 = (VAR_4->len - 3) / sizeof(VAR_4->band[0]);
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_7 = VAR_4->band[VAR_5].schan;
  VAR_8 = VAR_4->band[VAR_5].nchan;
  if (VAR_8 != 1)
   FUNC_0(" %u-%u,%u", VAR_7, VAR_7 + VAR_8-1,
       VAR_4->band[VAR_5].maxtxpwr);
  else
   FUNC_0(" %u,%u", VAR_7, VAR_4->band[VAR_5].maxtxpwr);
 }
 FUNC_0(">");
}
