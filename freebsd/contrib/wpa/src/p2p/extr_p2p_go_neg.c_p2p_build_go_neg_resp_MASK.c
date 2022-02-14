
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct p2p_device {scalar_t__ go_state; int flags; scalar_t__ oob_pw_id; int wps_method; int channels; } ;
struct p2p_channels {int dummy; } ;
struct p2p_data {int dev_capab; int go_intent; scalar_t__* vendor_elem; scalar_t__ wfd_ie_go_neg; int ssid_len; int ssid; TYPE_1__* cfg; struct p2p_channels channels; int intended_addr; int op_channel; int op_reg_class; int num_pref_freq; int override_pref_channel; int override_pref_op_class; int client_timeout; int go_timeout; scalar_t__ cross_connect; } ;
struct TYPE_2__ {int dev_addr; int country; scalar_t__ p2p_intra_bss; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct wpabuf*,int,int) ;
 int FUNC_1 (struct wpabuf*,int ,struct p2p_channels*) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;
 int FUNC_3 (struct wpabuf*,struct p2p_data*,struct p2p_device*) ;
 int FUNC_4 (struct wpabuf*,int) ;
 int FUNC_5 (struct wpabuf*,int ,int ,int ) ;
 int* FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,int ,int ,int ) ;
 int FUNC_9 (struct wpabuf*,int ,int) ;
 int FUNC_10 (struct wpabuf*,int) ;
 int FUNC_11 (struct wpabuf*,int*) ;
 scalar_t__ FUNC_12 (struct p2p_data*,struct wpabuf*,scalar_t__,int ) ;
 int FUNC_13 (struct p2p_channels*,int *,struct p2p_channels*) ;
 int FUNC_14 (struct p2p_data*,char*) ;
 scalar_t__ FUNC_15 (int ) ;
 struct wpabuf* FUNC_16 (int) ;
 int FUNC_17 (struct wpabuf*) ;
 size_t FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_20(struct p2p_data *VAR_12,
          struct p2p_device *VAR_13,
          u8 VAR_14, u8 VAR_15,
          u8 VAR_16)
{
 struct wpabuf *VAR_17;
 u8 *VAR_18;
 u8 VAR_19;
 size_t VAR_20 = 0;
 u16 VAR_21;

 FUNC_14(VAR_12, "Building GO Negotiation Response");






 if (VAR_12->vendor_elem && VAR_12->vendor_elem[VAR_10])
  VAR_20 += FUNC_18(VAR_12->vendor_elem[VAR_10]);

 VAR_17 = FUNC_16(1000 + VAR_20);
 if (VAR_17 == ((void*)0))
  return ((void*)0);

 FUNC_9(VAR_17, VAR_4, VAR_14);

 VAR_18 = FUNC_6(VAR_17);
 FUNC_10(VAR_17, VAR_15);
 VAR_19 = 0;
 if (VAR_13 && VAR_13->go_state == VAR_0) {
  if (VAR_13->flags & VAR_2) {
   VAR_19 |= VAR_7;
   if (VAR_13->flags & VAR_3)
    VAR_19 |=
     VAR_8;
  }
  if (VAR_12->cross_connect)
   VAR_19 |= VAR_5;
  if (VAR_12->cfg->p2p_intra_bss)
   VAR_19 |= VAR_6;
 }
 FUNC_0(VAR_17, VAR_12->dev_capab &
          ~VAR_1,
          VAR_19);
 FUNC_4(VAR_17, (VAR_12->go_intent << 1) | VAR_16);
 FUNC_2(VAR_17, VAR_12->go_timeout, VAR_12->client_timeout);
 if (VAR_12->override_pref_op_class) {
  FUNC_14(VAR_12, "Override operating channel preference");
  FUNC_8(VAR_17, VAR_12->cfg->country,
           VAR_12->override_pref_op_class,
           VAR_12->override_pref_channel);
 } else if (VAR_13 && VAR_13->go_state == VAR_9 && !VAR_12->num_pref_freq) {
  FUNC_14(VAR_12, "Omit Operating Channel attribute");
 } else {
  FUNC_8(VAR_17, VAR_12->cfg->country,
           VAR_12->op_reg_class,
           VAR_12->op_channel);
 }
 FUNC_7(VAR_17, VAR_12->intended_addr);
 if (VAR_15 || VAR_13 == ((void*)0)) {
  FUNC_1(VAR_17, VAR_12->cfg->country,
      &VAR_12->channels);
 } else if (VAR_13->go_state == VAR_9) {
  FUNC_1(VAR_17, VAR_12->cfg->country,
      &VAR_12->channels);
 } else {
  struct p2p_channels VAR_22;
  FUNC_13(&VAR_12->channels, &VAR_13->channels,
           &VAR_22);
  FUNC_1(VAR_17, VAR_12->cfg->country, &VAR_22);
 }
 FUNC_3(VAR_17, VAR_12, VAR_13);
 if (VAR_13 && VAR_13->go_state == VAR_0) {
  FUNC_5(VAR_17, VAR_12->cfg->dev_addr, VAR_12->ssid,
         VAR_12->ssid_len);
 }
 FUNC_11(VAR_17, VAR_18);


 VAR_21 = FUNC_15(VAR_13 ? VAR_13->wps_method : VAR_11);
 if (VAR_13 && VAR_13->oob_pw_id)
  VAR_21 = VAR_13->oob_pw_id;
 if (FUNC_12(VAR_12, VAR_17, VAR_21, 0) < 0) {
  FUNC_14(VAR_12, "Failed to build WPS IE for GO Negotiation Response");
  FUNC_17(VAR_17);
  return ((void*)0);
 }






 if (VAR_12->vendor_elem && VAR_12->vendor_elem[VAR_10])
  FUNC_19(VAR_17, VAR_12->vendor_elem[VAR_10]);

 return VAR_17;
}
