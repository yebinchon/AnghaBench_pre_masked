
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_group {int dummy; } ;
struct TYPE_3__ {int * p2p_device_addr; } ;
struct p2p_device {int dialog_token; int flags; TYPE_1__ info; } ;
struct p2p_data {scalar_t__ inv_role; size_t num_groups; struct wpabuf** vendor_elem; int num_pref_freq; int pref_freq_list; int inv_ssid_len; int inv_ssid; TYPE_2__* cfg; int channels; int inv_bssid; scalar_t__ inv_bssid_set; int op_channel; int op_reg_class; scalar_t__ inv_persistent; int client_timeout; int go_timeout; struct p2p_group** groups; struct wpabuf* wfd_ie_invitation; } ;
struct TYPE_4__ {int * dev_addr; int country; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct wpabuf*,int ,int *) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;
 int FUNC_3 (struct wpabuf*,struct p2p_data*,struct p2p_device*) ;
 int FUNC_4 (struct wpabuf*,int ) ;
 int FUNC_5 (struct wpabuf*,int const*,int ,int ) ;
 int * FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,int ,int ,int ) ;
 int FUNC_9 (struct wpabuf*,int ,int ) ;
 int FUNC_10 (struct wpabuf*,int ,int) ;
 int FUNC_11 (struct wpabuf*,int *) ;
 int FUNC_12 (struct p2p_data*,struct wpabuf*,int,int ) ;
 int FUNC_13 (struct p2p_group*) ;
 struct wpabuf* FUNC_14 (struct p2p_group*) ;
 struct wpabuf* FUNC_15 (int) ;
 size_t FUNC_16 (struct wpabuf*) ;
 int FUNC_17 (struct wpabuf*,struct wpabuf*) ;

__attribute__((used)) static struct wpabuf * FUNC_18(struct p2p_data *VAR_7,
      struct p2p_device *VAR_8,
      const u8 *VAR_9,
      int VAR_10)
{
 struct wpabuf *VAR_11;
 u8 *VAR_12;
 const u8 *VAR_13;
 size_t VAR_14 = 0;
 if (VAR_7->vendor_elem && VAR_7->vendor_elem[VAR_6])
  VAR_14 += FUNC_16(VAR_7->vendor_elem[VAR_6]);

 VAR_11 = FUNC_15(1000 + VAR_14);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 VAR_8->dialog_token++;
 if (VAR_8->dialog_token == 0)
  VAR_8->dialog_token = 1;
 FUNC_10(VAR_11, VAR_3,
          VAR_8->dialog_token);

 VAR_12 = FUNC_6(VAR_11);
 if (VAR_7->inv_role == VAR_4 || !VAR_7->inv_persistent)
  FUNC_2(VAR_11, 0, 0);
 else
  FUNC_2(VAR_11, VAR_7->go_timeout,
        VAR_7->client_timeout);
 FUNC_7(VAR_11, VAR_7->inv_persistent ?
         VAR_2 : 0);
 if (VAR_7->inv_role != VAR_5 ||
     !(VAR_8->flags & VAR_1))
  FUNC_8(VAR_11, VAR_7->cfg->country,
           VAR_7->op_reg_class,
           VAR_7->op_channel);
 if (VAR_7->inv_bssid_set)
  FUNC_4(VAR_11, VAR_7->inv_bssid);
 FUNC_1(VAR_11, VAR_7->cfg->country, &VAR_7->channels);
 if (VAR_9)
  VAR_13 = VAR_9;
 else if (VAR_7->inv_role == VAR_5)
  VAR_13 = VAR_8->info.p2p_device_addr;
 else
  VAR_13 = VAR_7->cfg->dev_addr;
 FUNC_5(VAR_11, VAR_13, VAR_7->inv_ssid, VAR_7->inv_ssid_len);
 FUNC_3(VAR_11, VAR_7, VAR_8);
 FUNC_11(VAR_11, VAR_12);

 FUNC_9(VAR_11, VAR_7->pref_freq_list,
          VAR_7->num_pref_freq);






 if (VAR_7->vendor_elem && VAR_7->vendor_elem[VAR_6])
  FUNC_17(VAR_11, VAR_7->vendor_elem[VAR_6]);

 if (VAR_10 >= 0) {

  FUNC_12(VAR_7, VAR_11, VAR_10, 0);
 }

 return VAR_11;
}
