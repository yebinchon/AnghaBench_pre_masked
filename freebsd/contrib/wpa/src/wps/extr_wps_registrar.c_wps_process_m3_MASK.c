
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_parse_attr {int e_hash2; int e_hash1; int authenticator; int registrar_nonce; } ;
struct wps_data {scalar_t__ state; int config_error; TYPE_2__* wps; scalar_t__ pbc; } ;
struct wpabuf {int dummy; } ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;
struct TYPE_4__ {TYPE_1__* registrar; } ;
struct TYPE_3__ {scalar_t__ force_pbc_overlap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct wps_data*,int ,struct wpabuf const*) ;
 scalar_t__ FUNC_2 (struct wps_data*,int ) ;
 scalar_t__ FUNC_3 (struct wps_data*,int ) ;
 scalar_t__ FUNC_4 (struct wps_data*,int ) ;
 int FUNC_5 (struct wps_data*) ;

__attribute__((used)) static enum wps_process_res FUNC_6(struct wps_data *VAR_6,
        const struct wpabuf *VAR_7,
        struct wps_parse_attr *VAR_8)
{
 FUNC_0(VAR_0, "WPS: Received M3");

 if (VAR_6->state != VAR_1) {
  FUNC_0(VAR_0, "WPS: Unexpected state (%d) for "
      "receiving M3", VAR_6->state);
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 if (VAR_6->pbc && VAR_6->wps->registrar->force_pbc_overlap &&
     !FUNC_5(VAR_6)) {
  FUNC_0(VAR_0, "WPS: Reject negotiation due to PBC "
      "session overlap");
  VAR_6->state = VAR_3;
  VAR_6->config_error = VAR_4;
  return VAR_5;
 }

 if (FUNC_4(VAR_6, VAR_8->registrar_nonce) ||
     FUNC_1(VAR_6, VAR_8->authenticator, VAR_7) ||
     FUNC_2(VAR_6, VAR_8->e_hash1) ||
     FUNC_3(VAR_6, VAR_8->e_hash2)) {
  VAR_6->state = VAR_3;
  return VAR_5;
 }

 VAR_6->state = VAR_2;
 return VAR_5;
}
