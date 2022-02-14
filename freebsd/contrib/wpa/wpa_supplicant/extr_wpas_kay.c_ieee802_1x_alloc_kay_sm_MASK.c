
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {struct ieee802_1x_kay* kay; int own_addr; int ifname; } ;
struct wpa_ssid {int macsec_policy; int macsec_integ_only; int mka_priority; int macsec_port; int macsec_replay_window; int macsec_replay_protect; } ;
struct ieee802_1x_kay_ctx {int disable_transmit_sa; int enable_transmit_sa; int delete_transmit_sa; int create_transmit_sa; int delete_transmit_sc; int create_transmit_sc; int disable_receive_sa; int enable_receive_sa; int delete_receive_sa; int create_receive_sa; int delete_receive_sc; int create_receive_sc; int set_receive_lowest_pn; int set_transmit_next_pn; int get_transmit_next_pn; int get_receive_lowest_pn; int enable_controlled_port; int set_current_cipher_suite; int set_replay_protect; int enable_encrypt; int enable_protect_frames; int macsec_get_capability; int macsec_deinit; int macsec_init; struct wpa_supplicant* ctx; } ;
struct ieee802_1x_kay {int dummy; } ;
typedef enum macsec_policy { ____Placeholder_macsec_policy } macsec_policy ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct wpa_supplicant*) ;
 struct ieee802_1x_kay* FUNC_1 (struct ieee802_1x_kay_ctx*,int,int ,int ,int ,int ,int ,int ) ;
 struct ieee802_1x_kay_ctx* FUNC_2 (int) ;
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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

int FUNC_3(struct wpa_supplicant *VAR_27, struct wpa_ssid *VAR_28)
{
 struct ieee802_1x_kay_ctx *VAR_29;
 struct ieee802_1x_kay *VAR_30 = ((void*)0);
 enum macsec_policy VAR_31;

 FUNC_0(VAR_27);

 if (!VAR_28 || VAR_28->macsec_policy == 0)
  return 0;

 if (VAR_28->macsec_policy == 1) {
  if (VAR_28->macsec_integ_only == 1)
   VAR_31 = VAR_2;
  else
   VAR_31 = VAR_1;
 } else {
  VAR_31 = VAR_0;
 }

 VAR_29 = FUNC_2(sizeof(*VAR_29));
 if (!VAR_29)
  return -1;

 VAR_29->ctx = VAR_27;

 VAR_29->macsec_init = VAR_22;
 VAR_29->macsec_deinit = VAR_20;
 VAR_29->macsec_get_capability = VAR_21;
 VAR_29->enable_protect_frames = VAR_15;
 VAR_29->enable_encrypt = VAR_14;
 VAR_29->set_replay_protect = VAR_25;
 VAR_29->set_current_cipher_suite = VAR_23;
 VAR_29->enable_controlled_port = VAR_13;
 VAR_29->get_receive_lowest_pn = VAR_18;
 VAR_29->get_transmit_next_pn = VAR_19;
 VAR_29->set_transmit_next_pn = VAR_26;
 VAR_29->set_receive_lowest_pn = VAR_24;
 VAR_29->create_receive_sc = VAR_4;
 VAR_29->delete_receive_sc = VAR_8;
 VAR_29->create_receive_sa = VAR_3;
 VAR_29->delete_receive_sa = VAR_7;
 VAR_29->enable_receive_sa = VAR_16;
 VAR_29->disable_receive_sa = VAR_11;
 VAR_29->create_transmit_sc = VAR_6;
 VAR_29->delete_transmit_sc = VAR_10;
 VAR_29->create_transmit_sa = VAR_5;
 VAR_29->delete_transmit_sa = VAR_9;
 VAR_29->enable_transmit_sa = VAR_17;
 VAR_29->disable_transmit_sa = VAR_12;

 VAR_30 = FUNC_1(VAR_29, VAR_31, VAR_28->macsec_replay_protect,
      VAR_28->macsec_replay_window, VAR_28->macsec_port,
      VAR_28->mka_priority, VAR_27->ifname,
      VAR_27->own_addr);

 if (VAR_30 == ((void*)0))
  return -1;

 VAR_27->kay = VAR_30;

 return 0;
}
