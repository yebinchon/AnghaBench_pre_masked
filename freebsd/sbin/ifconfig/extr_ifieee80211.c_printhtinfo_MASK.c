
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_ie_htinfo {int hi_ctrlchannel; int hi_byte1; int hi_byte2; int hi_byte3; int hi_basicmcsset; int hi_byte45; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_4(const char *VAR_2, const u_int8_t *VAR_3, size_t VAR_4, int VAR_5)
{
 FUNC_3("%s", VAR_2);
 if (VAR_1) {
  const struct ieee80211_ie_htinfo *VAR_6 =
      (const struct ieee80211_ie_htinfo *) VAR_3;
  const char *VAR_7;
  int VAR_8, VAR_9;

  FUNC_3("<ctl %u, %x,%x,%x,%x", VAR_6->hi_ctrlchannel,
      VAR_6->hi_byte1, VAR_6->hi_byte2, VAR_6->hi_byte3,
      FUNC_0(&VAR_6->hi_byte45));
  FUNC_3(" basicmcs[");
  VAR_7 = "";
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (FUNC_2(VAR_6->hi_basicmcsset, VAR_8)) {
    for (VAR_9 = VAR_8+1; VAR_9 < VAR_0; VAR_9++)
     if (FUNC_1(VAR_6->hi_basicmcsset, VAR_9))
      break;
    VAR_9--;
    if (VAR_8 == VAR_9)
     FUNC_3("%s%u", VAR_7, VAR_8);
    else
     FUNC_3("%s%u-%u", VAR_7, VAR_8, VAR_9);
    VAR_8 += VAR_9-VAR_8;
    VAR_7 = ",";
   }
  FUNC_3("]>");
 }
}
