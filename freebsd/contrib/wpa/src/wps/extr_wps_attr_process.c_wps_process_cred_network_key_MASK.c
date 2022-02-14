
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_credential {scalar_t__ auth_type; scalar_t__ encr_type; size_t key_len; int key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int const*,size_t) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct wps_credential *VAR_3,
     const u8 *VAR_4, size_t VAR_5)
{
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: Credential did not include "
      "Network Key");
  if (VAR_3->auth_type == VAR_1 &&
      VAR_3->encr_type == VAR_2) {
   FUNC_2(VAR_0, "WPS: Workaround - Allow "
       "missing mandatory Network Key attribute "
       "for open network");
   return 0;
  }
  return -1;
 }

 FUNC_1(VAR_0, "WPS: Network Key", VAR_4, VAR_5);
 if (VAR_5 <= sizeof(VAR_3->key)) {
  FUNC_0(VAR_3->key, VAR_4, VAR_5);
  VAR_3->key_len = VAR_5;
 }

 return 0;
}
