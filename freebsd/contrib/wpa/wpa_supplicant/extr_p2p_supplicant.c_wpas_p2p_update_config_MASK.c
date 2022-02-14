
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int drv_flags; TYPE_3__* conf; TYPE_2__* wps; TYPE_1__* global; } ;
struct p2p_data {int dummy; } ;
typedef int r ;
struct TYPE_6__ {int changed_parameters; char* country; int p2p_listen_reg_class; int p2p_listen_channel; int p2p_oper_reg_class; int p2p_oper_channel; int p2p_passphrase_len; int p2p_no_go_freq; int p2p_pref_chan; int num_p2p_pref_chan; int p2p_intra_bss; scalar_t__ p2p_ssid_postfix; int ** wps_vendor_ext; int num_sec_device_types; scalar_t__ sec_device_type; int serial_number; int model_number; int model_name; int manufacturer; int device_type; int device_name; } ;
struct TYPE_5__ {int uuid; int config_methods; } ;
struct TYPE_4__ {struct p2p_data* p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct p2p_data*,int *) ;
 int FUNC_3 (struct p2p_data*) ;
 int FUNC_4 (struct p2p_data*,int ) ;
 int FUNC_5 (struct p2p_data*,char*) ;
 int FUNC_6 (struct p2p_data*,int ) ;
 int FUNC_7 (struct p2p_data*,int ) ;
 int FUNC_8 (struct p2p_data*,int,int,int) ;
 int FUNC_9 (struct p2p_data*,int ) ;
 int FUNC_10 (struct p2p_data*,int ) ;
 int FUNC_11 (struct p2p_data*,int ) ;
 scalar_t__ FUNC_12 (struct p2p_data*,int *) ;
 int FUNC_13 (struct p2p_data*,int,int,int) ;
 int FUNC_14 (struct p2p_data*,int ) ;
 scalar_t__ FUNC_15 (struct p2p_data*,int ,int ) ;
 int FUNC_16 (struct p2p_data*,int ) ;
 int FUNC_17 (struct p2p_data*,void*,int ) ;
 int FUNC_18 (struct p2p_data*,int ) ;
 int FUNC_19 (struct p2p_data*,int*,int ) ;
 int FUNC_20 (struct p2p_data*,int ) ;
 int FUNC_21 (int ,char*,...) ;

void FUNC_22(struct wpa_supplicant *VAR_17)
{
 struct p2p_data *VAR_18 = VAR_17->global->p2p;

 if (VAR_18 == ((void*)0))
  return;

 if (!(VAR_17->drv_flags & VAR_16))
  return;

 if (VAR_17->conf->changed_parameters & VAR_2)
  FUNC_6(VAR_18, VAR_17->conf->device_name);

 if (VAR_17->conf->changed_parameters & VAR_3)
  FUNC_16(VAR_18, VAR_17->conf->device_type);

 if (VAR_17->wps &&
     (VAR_17->conf->changed_parameters & VAR_0))
  FUNC_4(VAR_18, VAR_17->wps->config_methods);

 if (VAR_17->wps && (VAR_17->conf->changed_parameters & VAR_11))
  FUNC_20(VAR_18, VAR_17->wps->uuid);

 if (VAR_17->conf->changed_parameters & VAR_13) {
  FUNC_9(VAR_18, VAR_17->conf->manufacturer);
  FUNC_10(VAR_18, VAR_17->conf->model_name);
  FUNC_11(VAR_18, VAR_17->conf->model_number);
  FUNC_18(VAR_18, VAR_17->conf->serial_number);
 }

 if (VAR_17->conf->changed_parameters & VAR_10)
  FUNC_17(VAR_18,
          (void *) VAR_17->conf->sec_device_type,
          VAR_17->conf->num_sec_device_types);

 if (VAR_17->conf->changed_parameters & VAR_12) {
  int VAR_19;
  FUNC_3(VAR_18);
  for (VAR_19 = 0; VAR_19 < VAR_14; VAR_19++) {
   if (VAR_17->conf->wps_vendor_ext[VAR_19] == ((void*)0))
    continue;
   FUNC_2(
    VAR_18, VAR_17->conf->wps_vendor_ext[VAR_19]);
  }
 }

 if ((VAR_17->conf->changed_parameters & VAR_1) &&
     VAR_17->conf->country[0] && VAR_17->conf->country[1]) {
  char VAR_20[3];
  VAR_20[0] = VAR_17->conf->country[0];
  VAR_20[1] = VAR_17->conf->country[1];
  VAR_20[2] = 0x04;
  FUNC_5(VAR_18, VAR_20);
 }

 if (VAR_17->conf->changed_parameters & VAR_9) {
  FUNC_19(VAR_18, (u8 *) VAR_17->conf->p2p_ssid_postfix,
         VAR_17->conf->p2p_ssid_postfix ?
         FUNC_1(VAR_17->conf->p2p_ssid_postfix) :
         0);
 }

 if (VAR_17->conf->changed_parameters & VAR_4)
  FUNC_7(VAR_18, VAR_17->conf->p2p_intra_bss);

 if (VAR_17->conf->changed_parameters & VAR_5) {
  u8 VAR_21, VAR_22;
  int VAR_23;
  unsigned int VAR_24;
  u8 VAR_25;

  if (VAR_17->conf->p2p_listen_reg_class &&
      VAR_17->conf->p2p_listen_channel) {
   VAR_21 = VAR_17->conf->p2p_listen_reg_class;
   VAR_22 = VAR_17->conf->p2p_listen_channel;
   VAR_25 = 1;
  } else {
   VAR_21 = 81;




   if (FUNC_0((u8 *) &VAR_24, sizeof(VAR_24)) < 0)
    VAR_22 = 1;
   else
    VAR_22 = 1 + (VAR_24 % 3) * 5;
   VAR_25 = 0;
  }
  VAR_23 = FUNC_8(VAR_18, VAR_21, VAR_22,
          VAR_25);
  if (VAR_23)
   FUNC_21(VAR_15, "P2P: Own listen channel update "
       "failed: %d", VAR_23);
 }
 if (VAR_17->conf->changed_parameters & VAR_6) {
  u8 VAR_26, VAR_27, VAR_28;
  int VAR_29 = 0;
  unsigned int VAR_30;
  if (VAR_17->conf->p2p_oper_reg_class &&
      VAR_17->conf->p2p_oper_channel) {
   VAR_26 = VAR_17->conf->p2p_oper_reg_class;
   VAR_27 = VAR_17->conf->p2p_oper_channel;
   VAR_28 = 1;
  } else {
   VAR_26 = 81;




   if (FUNC_0((u8 *) &VAR_30, sizeof(VAR_30)) < 0)
    VAR_27 = 1;
   else
    VAR_27 = 1 + (VAR_30 % 3) * 5;
   VAR_28 = 0;
  }
  VAR_29 = FUNC_13(VAR_18, VAR_26, VAR_27,
        VAR_28);
  if (VAR_29)
   FUNC_21(VAR_15, "P2P: Own oper channel update "
       "failed: %d", VAR_29);
 }

 if (VAR_17->conf->changed_parameters & VAR_8) {
  if (FUNC_15(VAR_18, VAR_17->conf->num_p2p_pref_chan,
          VAR_17->conf->p2p_pref_chan) < 0) {
   FUNC_21(VAR_15, "P2P: Preferred channel list "
       "update failed");
  }

  if (FUNC_12(VAR_18, &VAR_17->conf->p2p_no_go_freq) < 0) {
   FUNC_21(VAR_15, "P2P: No GO channel list "
       "update failed");
  }
 }

 if (VAR_17->conf->changed_parameters & VAR_7)
  FUNC_14(VAR_18, VAR_17->conf->p2p_passphrase_len);
}
