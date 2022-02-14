
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_parse_attr {scalar_t__* msg_type; int * enrollee_nonce; int * registrar_nonce; } ;
struct TYPE_3__ {int mac_addr; } ;
struct wps_data {scalar_t__ state; TYPE_1__ peer_dev; TYPE_2__* wps; int nonce_e; int nonce_r; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_4__ {scalar_t__ ap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static enum wps_process_res FUNC_4(struct wps_data *VAR_7,
      const struct wpabuf *VAR_8)
{
 struct wps_parse_attr VAR_9;

 FUNC_1(VAR_0, "WPS: Received WSC_ACK");

 if (FUNC_2(VAR_8, &VAR_9) < 0)
  return VAR_3;

 if (VAR_9.msg_type == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Message Type attribute");
  return VAR_3;
 }

 if (*VAR_9.msg_type != VAR_6) {
  FUNC_1(VAR_0, "WPS: Invalid Message Type %d",
      *VAR_9.msg_type);
  return VAR_3;
 }

 if (VAR_9.registrar_nonce == ((void*)0) ||
     FUNC_0(VAR_7->nonce_r, VAR_9.registrar_nonce, VAR_5) != 0)
 {
  FUNC_1(VAR_0, "WPS: Mismatch in registrar nonce");
  return VAR_3;
 }

 if (VAR_9.enrollee_nonce == ((void*)0) ||
     FUNC_0(VAR_7->nonce_e, VAR_9.enrollee_nonce, VAR_5) != 0) {
  FUNC_1(VAR_0, "WPS: Mismatch in enrollee nonce");
  return VAR_3;
 }

 if (VAR_7->state == VAR_1 && VAR_7->wps->ap) {
  FUNC_1(VAR_0, "WPS: External Registrar registration "
      "completed successfully");
  FUNC_3(VAR_7->wps, VAR_7->peer_dev.mac_addr);
  VAR_7->state = VAR_4;
  return VAR_2;
 }

 return VAR_3;
}
