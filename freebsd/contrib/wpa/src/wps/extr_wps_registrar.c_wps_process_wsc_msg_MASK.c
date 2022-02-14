
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_parse_attr {int* msg_type; int mac_addr; int * registrar_nonce; } ;
struct wps_data {int last_msg; int mac_addr_e; int error_indication; int config_error; TYPE_1__* wps; int state; int nonce_r; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_2__ {int wps_upnp; int * upnp_msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ,int ,struct wpabuf const*) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpabuf const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int const,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_8 (struct wps_data*,struct wps_parse_attr*) ;
 int FUNC_9 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_10 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_11 (struct wps_data*,struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_12 (struct wpabuf const*) ;
 int FUNC_13 (struct wpabuf const*) ;
 int FUNC_14 (struct wpabuf const*) ;
 int FUNC_15 (struct wpabuf const*) ;

__attribute__((used)) static enum wps_process_res FUNC_16(struct wps_data *VAR_6,
      const struct wpabuf *VAR_7)
{
 struct wps_parse_attr VAR_8;
 enum wps_process_res VAR_9 = VAR_3;

 FUNC_2(VAR_0, "WPS: Received WSC_MSG");

 if (FUNC_7(VAR_7, &VAR_8) < 0)
  return VAR_4;

 if (VAR_8.msg_type == ((void*)0)) {
  FUNC_2(VAR_0, "WPS: No Message Type attribute");
  VAR_6->state = VAR_1;
  return VAR_3;
 }

 if (*VAR_8.msg_type != 131 &&
     (VAR_8.registrar_nonce == ((void*)0) ||
      FUNC_0(VAR_6->nonce_r, VAR_8.registrar_nonce,
         VAR_5) != 0)) {
  FUNC_2(VAR_0, "WPS: Mismatch in registrar nonce");
  return VAR_4;
 }

 switch (*VAR_8.msg_type) {
 case 131:
  if (FUNC_12(VAR_7) < 0)
   return VAR_4;
  VAR_9 = FUNC_8(VAR_6, &VAR_8);
  break;
 case 130:
  if (FUNC_13(VAR_7) < 0)
   return VAR_4;
  VAR_9 = FUNC_9(VAR_6, VAR_7, &VAR_8);
  if (VAR_9 == VAR_4 || VAR_6->state == VAR_1)
   FUNC_5(VAR_6->wps, 130, VAR_6->config_error,
           VAR_6->error_indication, VAR_6->mac_addr_e);
  break;
 case 129:
  if (FUNC_14(VAR_7) < 0)
   return VAR_4;
  VAR_9 = FUNC_10(VAR_6, VAR_7, &VAR_8);
  if (VAR_9 == VAR_4 || VAR_6->state == VAR_1)
   FUNC_5(VAR_6->wps, 129, VAR_6->config_error,
           VAR_6->error_indication, VAR_6->mac_addr_e);
  break;
 case 128:
  if (FUNC_15(VAR_7) < 0)
   return VAR_4;
  VAR_9 = FUNC_11(VAR_6, VAR_7, &VAR_8);
  if (VAR_9 == VAR_4 || VAR_6->state == VAR_1)
   FUNC_5(VAR_6->wps, 128, VAR_6->config_error,
           VAR_6->error_indication, VAR_6->mac_addr_e);
  break;
 default:
  FUNC_2(VAR_0, "WPS: Unsupported Message Type %d",
      *VAR_8.msg_type);
  return VAR_4;
 }

 if (VAR_9 == VAR_3) {


  FUNC_4(VAR_6->last_msg);
  VAR_6->last_msg = FUNC_3(VAR_7);
 }

 return VAR_9;
}
