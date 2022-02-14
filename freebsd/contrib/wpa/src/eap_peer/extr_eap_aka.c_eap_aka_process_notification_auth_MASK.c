
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sim_attrs {int * mac; } ;
struct eap_aka_data {scalar_t__ reauth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct eap_aka_data*,struct eap_sim_attrs*) ;
 scalar_t__ FUNC_1 (struct eap_aka_data*,struct wpabuf const*,int *,int *,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct eap_aka_data *VAR_2,
          const struct wpabuf *VAR_3,
          struct eap_sim_attrs *VAR_4)
{
 if (VAR_4->mac == ((void*)0)) {
  FUNC_2(VAR_0, "EAP-AKA: no AT_MAC in after_auth "
      "Notification message");
  return -1;
 }

 if (FUNC_1(VAR_2, VAR_3, VAR_4->mac, (u8 *) "", 0)) {
  FUNC_2(VAR_1, "EAP-AKA: Notification message "
      "used invalid AT_MAC");
  return -1;
 }

 if (VAR_2->reauth &&
     FUNC_0(VAR_2, VAR_4)) {
  FUNC_2(VAR_1, "EAP-AKA: Invalid notification "
      "message after reauth");
  return -1;
 }

 return 0;
}
