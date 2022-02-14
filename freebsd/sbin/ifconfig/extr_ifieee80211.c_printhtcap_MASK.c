
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct ieee80211_ie_htcap {int hc_param; int hc_antenna; int hc_txbf; int hc_extcap; int hc_mcsset; int hc_cap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(const char *VAR_2, const u_int8_t *VAR_3, size_t VAR_4, int VAR_5)
{
 FUNC_4("%s", VAR_2);
 if (VAR_1) {
  const struct ieee80211_ie_htcap *VAR_6 =
      (const struct ieee80211_ie_htcap *) VAR_3;
  const char *VAR_7;
  int VAR_8, VAR_9;

  FUNC_4("<cap 0x%x param 0x%x",
      FUNC_0(&VAR_6->hc_cap), VAR_6->hc_param);
  FUNC_4(" mcsset[");
  VAR_7 = "";
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (FUNC_3(VAR_6->hc_mcsset, VAR_8)) {
    for (VAR_9 = VAR_8+1; VAR_9 < VAR_0; VAR_9++)
     if (FUNC_2(VAR_6->hc_mcsset, VAR_9))
      break;
    VAR_9--;
    if (VAR_8 == VAR_9)
     FUNC_4("%s%u", VAR_7, VAR_8);
    else
     FUNC_4("%s%u-%u", VAR_7, VAR_8, VAR_9);
    VAR_8 += VAR_9-VAR_8;
    VAR_7 = ",";
   }
  FUNC_4("] extcap 0x%x txbf 0x%x antenna 0x%x>",
      FUNC_0(&VAR_6->hc_extcap),
      FUNC_1(&VAR_6->hc_txbf),
      VAR_6->hc_antenna);
 }
}
