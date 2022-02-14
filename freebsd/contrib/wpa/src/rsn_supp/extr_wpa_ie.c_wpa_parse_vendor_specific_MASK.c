
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_eapol_ie_parse {int const* wmm; int wmm_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (int ,char*,int const*,int) ;
 int FUNC_2 (int ,char*,int const) ;

__attribute__((used)) static int FUNC_3(const u8 *VAR_6, const u8 *VAR_7,
         struct wpa_eapol_ie_parse *VAR_8)
{
 unsigned int VAR_9;

 if (VAR_6[1] < 4) {
  FUNC_2(VAR_1, "Too short vendor specific IE ignored (len=%u)",
      VAR_6[1]);
  return 1;
 }

 VAR_9 = FUNC_0(&VAR_6[2]);
 if (VAR_9 == VAR_2 && VAR_6[5] == VAR_5 && VAR_6[1] > 4) {
  if (VAR_6[6] == VAR_3) {
   VAR_8->wmm = &VAR_6[2];
   VAR_8->wmm_len = VAR_6[1];
   FUNC_1(VAR_0, "WPA: WMM IE",
        VAR_8->wmm, VAR_8->wmm_len);
  } else if (VAR_6[6] == VAR_4) {
   VAR_8->wmm = &VAR_6[2];
   VAR_8->wmm_len = VAR_6[1];
   FUNC_1(VAR_0, "WPA: WMM Parameter Element",
        VAR_8->wmm, VAR_8->wmm_len);
  }
 }
 return 0;
}
