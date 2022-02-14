
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct p2ps_provision {int conncap; int status; int adv_mac; int session_mac; int session_id; int adv_id; } ;
struct p2p_group {int dummy; } ;
struct TYPE_3__ {int p2p_device_addr; } ;
struct p2p_device {TYPE_1__ info; } ;
struct p2p_data {size_t num_groups; int dev_capab; struct wpabuf** vendor_elem; struct p2ps_provision* p2ps_prov; int client_timeout; int go_timeout; int channels; TYPE_2__* cfg; int op_channel; int op_reg_class; scalar_t__ cross_connect; struct p2p_group** groups; struct wpabuf* wfd_ie_prov_disc_resp; } ;
typedef enum p2p_status_code { ____Placeholder_p2p_status_code } p2p_status_code ;
struct TYPE_4__ {int (* get_persistent_group ) (int ,int ,int const*,size_t,int*,int*,size_t*,int*) ;int country; int op_channel; int op_reg_class; int cb_ctx; scalar_t__ p2p_intra_bss; } ;


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
 size_t VAR_12 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (struct wpabuf*,int ,int ) ;
 int FUNC_2 (struct wpabuf*,int,int) ;
 int FUNC_3 (struct wpabuf*,int ,int *) ;
 int FUNC_4 (struct wpabuf*,int ,int ) ;
 int FUNC_5 (struct wpabuf*,int) ;
 int FUNC_6 (struct wpabuf*,struct p2p_data*,int *) ;
 int FUNC_7 (struct wpabuf*,int ,int const*) ;
 int* FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*,int*) ;
 int FUNC_10 (struct wpabuf*,int ,int ,int ) ;
 int FUNC_11 (struct wpabuf*,int*,int*,size_t) ;
 int FUNC_12 (struct wpabuf*,int ,int) ;
 int FUNC_13 (struct wpabuf*,int ,int ) ;
 int FUNC_14 (struct wpabuf*,int) ;
 int FUNC_15 (struct wpabuf*,int*) ;
 int FUNC_16 (struct wpabuf*,int ) ;
 struct wpabuf* FUNC_17 (struct p2p_group*) ;
 int FUNC_18 (struct p2p_group*,int const*,size_t) ;
 int FUNC_19 (struct p2p_data*,struct p2p_device*,struct wpabuf*) ;
 int FUNC_20 (int ,int ,int const*,size_t,int*,int*,size_t*,int*) ;
 struct wpabuf* FUNC_21 (int) ;
 size_t FUNC_22 (struct wpabuf*) ;
 int FUNC_23 (struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_24(struct p2p_data *VAR_13,
      struct p2p_device *VAR_14,
      u8 VAR_15,
      enum p2p_status_code VAR_16,
      u16 VAR_17,
      u32 VAR_18,
      const u8 *VAR_19,
      size_t VAR_20,
      const u8 *VAR_21,
      size_t VAR_22,
      const u8 *VAR_23,
      u16 VAR_24)
{
 struct wpabuf *VAR_25;
 size_t VAR_26 = 0;
 int VAR_27 = 0;
 if (VAR_13->vendor_elem && VAR_13->vendor_elem[VAR_12])
  VAR_26 += FUNC_22(VAR_13->vendor_elem[VAR_12]);

 VAR_25 = FUNC_21(1000 + VAR_26);
 if (VAR_25 == ((void*)0))
  return ((void*)0);

 FUNC_12(VAR_25, VAR_8, VAR_15);


 if (VAR_13->p2ps_prov && VAR_13->p2ps_prov->adv_id == VAR_18) {
  u8 *VAR_28 = FUNC_8(VAR_25);
  struct p2ps_provision *VAR_29 = VAR_13->p2ps_prov;
  u8 VAR_30;
  u8 VAR_31 = 0;

  if (VAR_16 == VAR_9 ||
      VAR_16 == VAR_10)
   VAR_31 = VAR_29->conncap;

  if (!VAR_16 && VAR_29->status != -1)
   VAR_16 = VAR_29->status;

  FUNC_14(VAR_25, VAR_16);
  VAR_30 = VAR_6 |
   VAR_7;
  if (VAR_13->cross_connect)
   VAR_30 |= VAR_4;
  if (VAR_13->cfg->p2p_intra_bss)
   VAR_30 |= VAR_5;
  FUNC_2(VAR_25, VAR_13->dev_capab &
           ~VAR_3,
           VAR_30);
  FUNC_6(VAR_25, VAR_13, ((void*)0));

  if (VAR_21 && VAR_13->cfg->get_persistent_group && VAR_14 &&
      (VAR_16 == VAR_9 ||
       VAR_16 == VAR_10)) {
   u8 VAR_32[VAR_11];
   size_t VAR_33;
   u8 VAR_34[VAR_0];
   u8 VAR_35[VAR_0];

   VAR_27 = VAR_13->cfg->get_persistent_group(
    VAR_13->cfg->cb_ctx,
    VAR_14->info.p2p_device_addr,
    VAR_21, VAR_22, VAR_34,
    VAR_32, &VAR_33, VAR_35);
   if (VAR_27) {
    FUNC_11(
     VAR_25, VAR_34, VAR_32, VAR_33);
    if (!FUNC_0(VAR_35))
     FUNC_9(
      VAR_25, VAR_35);
   }
  }

  if (!VAR_27 && (VAR_31 & VAR_2))
   FUNC_19(VAR_13, VAR_14, VAR_25);


  if (VAR_27 || (VAR_31 & VAR_2)) {
   if (VAR_13->op_reg_class && VAR_13->op_channel)
    FUNC_10(
     VAR_25, VAR_13->cfg->country,
     VAR_13->op_reg_class,
     VAR_13->op_channel);
   else
    FUNC_10(
     VAR_25, VAR_13->cfg->country,
     VAR_13->cfg->op_reg_class,
     VAR_13->cfg->op_channel);
  }

  if (VAR_27 ||
      (VAR_31 & (VAR_1 | VAR_2)))
   FUNC_3(VAR_25, VAR_13->cfg->country,
       &VAR_13->channels);

  if (!VAR_27 && VAR_31)
   FUNC_5(VAR_25, VAR_31);

  FUNC_1(VAR_25, VAR_18, VAR_29->adv_mac);

  if (VAR_27 ||
      (VAR_31 & (VAR_1 | VAR_2)))
   FUNC_4(VAR_25, VAR_13->go_timeout,
         VAR_13->client_timeout);

  FUNC_13(VAR_25, VAR_29->session_id,
           VAR_29->session_mac);

  FUNC_7(VAR_25, VAR_24, VAR_23);
  FUNC_15(VAR_25, VAR_28);
 } else if (VAR_16 != VAR_9 || VAR_18) {
  u8 *VAR_36 = FUNC_8(VAR_25);

  FUNC_14(VAR_25, VAR_16);

  if (VAR_13->p2ps_prov)
   FUNC_1(VAR_25, VAR_18,
           VAR_13->p2ps_prov->adv_mac);

  FUNC_15(VAR_25, VAR_36);
 }


 FUNC_16(VAR_25, VAR_17);






 if (VAR_13->vendor_elem && VAR_13->vendor_elem[VAR_12])
  FUNC_23(VAR_25, VAR_13->vendor_elem[VAR_12]);

 return VAR_25;
}
