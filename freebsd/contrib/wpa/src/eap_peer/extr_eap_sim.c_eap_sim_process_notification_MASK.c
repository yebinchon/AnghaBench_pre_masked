
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int msg_ctx; } ;
struct eap_sim_data {scalar_t__ num_notification; int error_code; scalar_t__ state; } ;
struct eap_sim_attrs {int notification; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct wpabuf* FUNC_0 (struct eap_sim_data*,int ,int ) ;
 scalar_t__ FUNC_1 (struct eap_sim_data*,struct wpabuf const*,struct eap_sim_attrs*) ;
 int FUNC_2 (int ,int,int ) ;
 struct wpabuf* FUNC_3 (struct eap_sim_data*,int ,int) ;
 int FUNC_4 (struct eap_sim_data*,int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static struct wpabuf * FUNC_6(
 struct eap_sm *VAR_7, struct eap_sim_data *VAR_8, u8 VAR_9,
 const struct wpabuf *VAR_10, struct eap_sim_attrs *VAR_11)
{
 FUNC_5(VAR_3, "EAP-SIM: subtype Notification");
 if (VAR_8->num_notification > 0) {
  FUNC_5(VAR_4, "EAP-SIM: too many notification "
      "rounds (only one allowed)");
  return FUNC_0(VAR_8, VAR_9,
         VAR_1);
 }
 VAR_8->num_notification++;
 if (VAR_11->notification == -1) {
  FUNC_5(VAR_4, "EAP-SIM: no AT_NOTIFICATION in "
      "Notification message");
  return FUNC_0(VAR_8, VAR_9,
         VAR_1);
 }

 if ((VAR_11->notification & 0x4000) == 0 &&
     FUNC_1(VAR_8, VAR_10, VAR_11)) {
  return FUNC_0(VAR_8, VAR_9,
         VAR_1);
 }

 FUNC_2(VAR_7->msg_ctx, VAR_11->notification, 0);
 if (VAR_11->notification >= 0 && VAR_11->notification < 32768) {
  VAR_8->error_code = VAR_11->notification;
  FUNC_4(VAR_8, VAR_2);
 } else if (VAR_11->notification == VAR_0 &&
     VAR_8->state == VAR_5)
  FUNC_4(VAR_8, VAR_6);
 return FUNC_3(VAR_8, VAR_9, VAR_11->notification);
}
