
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct wps_parse_attr {scalar_t__* msg_type; int * config_error; int * enrollee_nonce; int * registrar_nonce; } ;
struct TYPE_2__ {int mac_addr; } ;
struct wps_data {int state; TYPE_1__ peer_dev; int error_indication; int wps; int * nonce_e; int * nonce_r; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;



 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int ,char*,int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (struct wpabuf const*,struct wps_parse_attr*) ;

__attribute__((used)) static enum wps_process_res FUNC_6(struct wps_data *VAR_8,
       const struct wpabuf *VAR_9)
{
 struct wps_parse_attr VAR_10;
 u16 VAR_11;

 FUNC_3(VAR_0, "WPS: Received WSC_NACK");

 if (FUNC_5(VAR_9, &VAR_10) < 0)
  return VAR_2;

 if (VAR_10.msg_type == ((void*)0)) {
  FUNC_3(VAR_0, "WPS: No Message Type attribute");
  return VAR_2;
 }

 if (*VAR_10.msg_type != VAR_7) {
  FUNC_3(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_10.msg_type);
  return VAR_2;
 }

 if (VAR_10.registrar_nonce == ((void*)0) ||
     FUNC_1(VAR_8->nonce_r, VAR_10.registrar_nonce, VAR_6) != 0)
 {
  FUNC_3(VAR_0, "WPS: Mismatch in registrar nonce");
  FUNC_2(VAR_0, "WPS: Received Registrar Nonce",
       VAR_10.registrar_nonce, VAR_6);
  FUNC_2(VAR_0, "WPS: Expected Registrar Nonce",
       VAR_8->nonce_r, VAR_6);
  return VAR_2;
 }

 if (VAR_10.enrollee_nonce == ((void*)0) ||
     FUNC_1(VAR_8->nonce_e, VAR_10.enrollee_nonce, VAR_6) != 0) {
  FUNC_3(VAR_0, "WPS: Mismatch in enrollee nonce");
  FUNC_2(VAR_0, "WPS: Received Enrollee Nonce",
       VAR_10.enrollee_nonce, VAR_6);
  FUNC_2(VAR_0, "WPS: Expected Enrollee Nonce",
       VAR_8->nonce_e, VAR_6);
  return VAR_2;
 }

 if (VAR_10.config_error == ((void*)0)) {
  FUNC_3(VAR_0, "WPS: No Configuration Error attribute "
      "in WSC_NACK");
  return VAR_2;
 }

 VAR_11 = FUNC_0(VAR_10.config_error);
 FUNC_3(VAR_0, "WPS: Registrar terminated negotiation with "
     "Configuration Error %d", VAR_11);

 switch (VAR_8->state) {
 case 130:
  FUNC_4(VAR_8->wps, VAR_3, VAR_11,
          VAR_8->error_indication, VAR_8->peer_dev.mac_addr);
  break;
 case 129:
  FUNC_4(VAR_8->wps, VAR_4, VAR_11,
          VAR_8->error_indication, VAR_8->peer_dev.mac_addr);
  break;
 case 128:
  FUNC_4(VAR_8->wps, VAR_5, VAR_11,
          VAR_8->error_indication, VAR_8->peer_dev.mac_addr);
  break;
 default:
  break;
 }



 VAR_8->state = VAR_1;

 return VAR_2;
}
