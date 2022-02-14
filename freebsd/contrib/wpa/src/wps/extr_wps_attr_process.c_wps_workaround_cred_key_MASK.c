
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {int auth_type; int key_len; scalar_t__* key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (int ,char*,scalar_t__*,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct wps_credential *VAR_4)
{
 if (VAR_4->auth_type & (VAR_3 | VAR_2) &&
     VAR_4->key_len > 8 && VAR_4->key_len < 64 &&
     VAR_4->key[VAR_4->key_len - 1] == 0) {
  FUNC_2(VAR_0, "WPS: Workaround - remove NULL "
      "termination from ASCII passphrase");
  VAR_4->key_len--;

 }


 if (VAR_4->auth_type & (VAR_3 | VAR_2) &&
     (VAR_4->key_len < 8 || FUNC_0(VAR_4->key, VAR_4->key_len))) {
  FUNC_2(VAR_1, "WPS: Reject credential with invalid WPA/WPA2-Personal passphrase");
  FUNC_1(VAR_1, "WPS: Network Key",
          VAR_4->key, VAR_4->key_len);
  return -1;
 }

 return 0;
}
