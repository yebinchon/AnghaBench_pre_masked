
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_ttls_data {int dummy; } ;
struct eap_sm {TYPE_1__* user; } ;
struct TYPE_2__ {int ttls_auth; size_t password_len; int password; scalar_t__ password_hash; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct eap_ttls_data*,int ) ;
 int FUNC_1 (struct eap_sm*,struct eap_ttls_data*) ;
 scalar_t__ FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_4,
     struct eap_ttls_data *VAR_5,
     const u8 *VAR_6,
     size_t VAR_7)
{
 if (!VAR_4->user || !VAR_4->user->password || VAR_4->user->password_hash ||
     !(VAR_4->user->ttls_auth & VAR_0)) {
  FUNC_3(VAR_2, "EAP-TTLS/PAP: No plaintext user "
      "password configured");
  FUNC_0(VAR_5, VAR_1);
  return;
 }

 if (VAR_4->user->password_len != VAR_7 ||
     FUNC_2(VAR_4->user->password, VAR_6,
       VAR_7) != 0) {
  FUNC_3(VAR_2, "EAP-TTLS/PAP: Invalid user password");
  FUNC_0(VAR_5, VAR_1);
  return;
 }

 FUNC_3(VAR_2, "EAP-TTLS/PAP: Correct user password");
 FUNC_0(VAR_5, VAR_3);
 FUNC_1(VAR_4, VAR_5);
}
