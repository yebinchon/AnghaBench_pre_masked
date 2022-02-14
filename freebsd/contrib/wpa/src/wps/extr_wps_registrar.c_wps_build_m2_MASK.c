
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wps_data {int int_reg; int state; TYPE_2__* nfc_pw_token; TYPE_1__* wps; int dev_pw_id; int uuid_r; int nonce_r; } ;
struct wpabuf {int dummy; } ;
struct TYPE_4__ {scalar_t__ pw_id; scalar_t__ pk_hash_provided_oob; } ;
struct TYPE_3__ {int dev; int cb_ctx; int (* rf_band_cb ) (int ) ;int registrar; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 struct wpabuf* FUNC_4 (int) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 scalar_t__ FUNC_7 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_10 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_11 (int ,struct wpabuf*) ;
 scalar_t__ FUNC_12 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_13 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_14 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_15 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_16 (struct wps_data*,struct wpabuf*,struct wpabuf*) ;
 scalar_t__ FUNC_17 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_18 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_19 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_20 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_21 (int *,struct wpabuf*) ;
 scalar_t__ FUNC_22 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_23 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_24 (int *,struct wpabuf*,int ) ;
 scalar_t__ FUNC_25 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_26 (struct wpabuf*) ;
 scalar_t__ FUNC_27 (struct wpabuf*,int ,int *,int ,int ) ;
 scalar_t__ FUNC_28 (struct wps_data*) ;

__attribute__((used)) static struct wpabuf * FUNC_29(struct wps_data *VAR_8)
{
 struct wpabuf *VAR_9;
 int VAR_10 = 0;

 if (FUNC_0(VAR_8->nonce_r, VAR_6) < 0)
  return ((void*)0);
 FUNC_2(VAR_1, "WPS: Registrar Nonce",
      VAR_8->nonce_r, VAR_6);
 FUNC_2(VAR_1, "WPS: UUID-R", VAR_8->uuid_r, VAR_7);

 FUNC_3(VAR_1, "WPS: Building Message M2");
 VAR_9 = FUNC_4(1000);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 if (FUNC_26(VAR_9) ||
     FUNC_20(VAR_9, VAR_5) ||
     FUNC_18(VAR_8, VAR_9) ||
     FUNC_23(VAR_8, VAR_9) ||
     FUNC_25(VAR_8, VAR_9) ||
     FUNC_22(VAR_8, VAR_9) ||
     FUNC_28(VAR_8) ||
     FUNC_8(VAR_8, VAR_9) ||
     FUNC_17(VAR_8, VAR_9) ||
     FUNC_12(VAR_8, VAR_9) ||
     FUNC_11(VAR_8->wps->registrar, VAR_9) ||
     FUNC_15(&VAR_8->wps->dev, VAR_9) ||
     FUNC_24(&VAR_8->wps->dev, VAR_9,
          VAR_8->wps->rf_band_cb(VAR_8->wps->cb_ctx)) ||
     FUNC_7(VAR_8, VAR_9) ||
     FUNC_10(VAR_9, VAR_4) ||
     FUNC_14(VAR_9, VAR_8->dev_pw_id) ||
     FUNC_21(&VAR_8->wps->dev, VAR_9) ||
     FUNC_27(VAR_9, 0, ((void*)0), 0, 0)) {
  FUNC_6(VAR_9);
  return ((void*)0);
 }
 if (FUNC_9(VAR_8, VAR_9)) {
  FUNC_6(VAR_9);
  return ((void*)0);
 }

 VAR_8->int_reg = 1;
 VAR_8->state = VAR_10 ? VAR_2 : VAR_3;
 return VAR_9;
}
