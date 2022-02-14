
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {int* msg_type; int * enrollee_nonce; } ;
struct TYPE_2__ {int mac_addr; } ;
struct wps_data {int last_msg; TYPE_1__ peer_dev; int error_indication; int config_error; int wps; int state; int nonce_e; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wpabuf const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int const,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_6 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_7 (struct wps_data*,struct wps_parse_attr*) ;
 int FUNC_8 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_9 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_10 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_11 (struct wpabuf const*) ;
 int FUNC_12 (struct wpabuf const*) ;
 int FUNC_13 (struct wpabuf const*) ;
 int FUNC_14 (struct wpabuf const*) ;
 int FUNC_15 (struct wpabuf const*) ;

__attribute__((used)) static enum wps_process_res FUNC_16(struct wps_data *VAR_5,
      const struct wpabuf *VAR_6)
{
 struct wps_parse_attr VAR_7;
 enum wps_process_res VAR_8 = VAR_2;

 FUNC_1(VAR_0, "WPS: Received WSC_MSG");

 if (FUNC_5(VAR_6, &VAR_7) < 0)
  return VAR_3;

 if (VAR_7.enrollee_nonce == ((void*)0) ||
     FUNC_0(VAR_5->nonce_e, VAR_7.enrollee_nonce, VAR_4) != 0) {
  FUNC_1(VAR_0, "WPS: Mismatch in enrollee nonce");
  return VAR_3;
 }

 if (VAR_7.msg_type == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Message Type attribute");
  VAR_5->state = VAR_1;
  return VAR_2;
 }

 switch (*VAR_7.msg_type) {
 case 132:
  if (FUNC_11(VAR_6) < 0)
   return VAR_3;
  VAR_8 = FUNC_6(VAR_5, VAR_6, &VAR_7);
  break;
 case 131:
  if (FUNC_12(VAR_6) < 0)
   return VAR_3;
  VAR_8 = FUNC_7(VAR_5, &VAR_7);
  break;
 case 130:
  if (FUNC_13(VAR_6) < 0)
   return VAR_3;
  VAR_8 = FUNC_8(VAR_5, VAR_6, &VAR_7);
  if (VAR_8 == VAR_3 || VAR_5->state == VAR_1)
   FUNC_4(VAR_5->wps, 130, VAR_5->config_error,
           VAR_5->error_indication,
           VAR_5->peer_dev.mac_addr);
  break;
 case 129:
  if (FUNC_14(VAR_6) < 0)
   return VAR_3;
  VAR_8 = FUNC_9(VAR_5, VAR_6, &VAR_7);
  if (VAR_8 == VAR_3 || VAR_5->state == VAR_1)
   FUNC_4(VAR_5->wps, 129, VAR_5->config_error,
           VAR_5->error_indication,
           VAR_5->peer_dev.mac_addr);
  break;
 case 128:
  if (FUNC_15(VAR_6) < 0)
   return VAR_3;
  VAR_8 = FUNC_10(VAR_5, VAR_6, &VAR_7);
  if (VAR_8 == VAR_3 || VAR_5->state == VAR_1)
   FUNC_4(VAR_5->wps, 128, VAR_5->config_error,
           VAR_5->error_indication,
           VAR_5->peer_dev.mac_addr);
  break;
 default:
  FUNC_1(VAR_0, "WPS: Unsupported Message Type %d",
      *VAR_7.msg_type);
  return VAR_3;
 }
 if (VAR_8 == VAR_2 && *VAR_7.msg_type != 131) {


  FUNC_3(VAR_5->last_msg);
  VAR_5->last_msg = FUNC_2(VAR_6);
 }

 return VAR_8;
}
