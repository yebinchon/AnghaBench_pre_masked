
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct eap_sm {TYPE_1__* user; } ;
struct eap_mschapv2_data {int state; } ;
struct TYPE_2__ {int * password; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct eap_sm*,struct eap_mschapv2_data*,struct wpabuf*) ;
 int FUNC_1 (struct eap_sm*,struct eap_mschapv2_data*,struct wpabuf*) ;
 int FUNC_2 (struct eap_sm*,struct eap_mschapv2_data*,struct wpabuf*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void FUNC_4(struct eap_sm *VAR_3, void *VAR_4,
     struct wpabuf *VAR_5)
{
 struct eap_mschapv2_data *VAR_6 = VAR_4;

 if (VAR_3->user == ((void*)0) || VAR_3->user->password == ((void*)0)) {
  FUNC_3(VAR_2, "EAP-MSCHAPV2: Password not configured");
  VAR_6->state = VAR_0;
  return;
 }

 switch (VAR_6->state) {
 case 130:
  FUNC_1(VAR_3, VAR_6, VAR_5);
  break;
 case 128:
  FUNC_2(VAR_3, VAR_6, VAR_5);
  break;
 case 129:
  FUNC_0(VAR_3, VAR_6, VAR_5);
  break;
 default:
  FUNC_3(VAR_1, "EAP-MSCHAPV2: Unknown state %d in "
      "process", VAR_6->state);
  break;
 }
}
