
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_tdls_peer {int ext_capab_len; int * ext_capab; } ;
struct wpa_eapol_ie_parse {int ext_capab_len; scalar_t__ ext_capab; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(const struct wpa_eapol_ie_parse *VAR_1,
          struct wpa_tdls_peer *VAR_2)
{
 if (!VAR_1->ext_capab) {
  FUNC_3(VAR_0, "TDLS: No extended capabilities "
      "received");
  return 0;
 }

 if (!VAR_2->ext_capab || VAR_2->ext_capab_len < VAR_1->ext_capab_len - 2) {

  FUNC_0(VAR_2->ext_capab);
  VAR_2->ext_capab = FUNC_2(VAR_1->ext_capab_len - 2);
  if (VAR_2->ext_capab == ((void*)0))
   return -1;
 }

 VAR_2->ext_capab_len = VAR_1->ext_capab_len - 2;
 FUNC_1(VAR_2->ext_capab, VAR_1->ext_capab + 2, VAR_2->ext_capab_len);

 return 0;
}
