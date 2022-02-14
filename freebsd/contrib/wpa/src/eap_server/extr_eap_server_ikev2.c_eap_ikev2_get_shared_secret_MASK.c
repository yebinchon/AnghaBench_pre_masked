
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct eap_sm {size_t identity_len; TYPE_1__* user; int * identity; } ;
struct TYPE_2__ {size_t password_len; int const* password; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct eap_sm*,int const*,size_t,int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_2(void *VAR_1, const u8 *VAR_2,
           size_t VAR_3,
           size_t *VAR_4)
{
 struct eap_sm *VAR_5 = VAR_1;

 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_0, "EAP-IKEV2: No IDr received - default "
      "to user identity from EAP-Identity");
  VAR_2 = VAR_5->identity;
  VAR_3 = VAR_5->identity_len;
 }

 if (FUNC_0(VAR_5, VAR_2, VAR_3, 0) < 0 || VAR_5->user == ((void*)0) ||
     VAR_5->user->password == ((void*)0)) {
  FUNC_1(VAR_0, "EAP-IKEV2: No user entry found");
  return ((void*)0);
 }

 *VAR_4 = VAR_5->user->password_len;
 return VAR_5->user->password;
}
