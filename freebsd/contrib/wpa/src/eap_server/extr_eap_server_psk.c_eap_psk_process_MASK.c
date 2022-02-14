
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_1__* user; } ;
struct eap_psk_data {int state; } ;
struct TYPE_2__ {int * password; } ;


 int FUNC_0 (int const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int ,int ,struct wpabuf*,size_t*) ;
 int FUNC_2 (struct eap_sm*,struct eap_psk_data*,struct wpabuf*) ;
 int FUNC_3 (struct eap_sm*,struct eap_psk_data*,struct wpabuf*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void FUNC_5(struct eap_sm *VAR_4, void *VAR_5,
       struct wpabuf *VAR_6)
{
 struct eap_psk_data *VAR_7 = VAR_5;
 const u8 *VAR_8;
 size_t VAR_9;

 if (VAR_4->user == ((void*)0) || VAR_4->user->password == ((void*)0)) {
  FUNC_4(VAR_3, "EAP-PSK: Plaintext password not "
      "configured");
  VAR_7->state = VAR_2;
  return;
 }

 VAR_8 = FUNC_1(VAR_1, VAR_0, VAR_6, &VAR_9);
 if (VAR_8 == ((void*)0) || VAR_9 < 1)
  return;

 switch (FUNC_0(*VAR_8)) {
 case 1:
  FUNC_2(VAR_4, VAR_7, VAR_6);
  break;
 case 3:
  FUNC_3(VAR_4, VAR_7, VAR_6);
  break;
 }
}
