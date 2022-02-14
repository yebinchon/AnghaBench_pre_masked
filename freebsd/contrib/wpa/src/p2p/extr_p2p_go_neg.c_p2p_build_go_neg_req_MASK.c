
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wpabuf {int dummy; } ;
struct p2p_device {int flags; int tie_breaker; scalar_t__ oob_pw_id; int wps_method; int dialog_token; } ;
struct p2p_data {int dev_capab; int go_intent; scalar_t__* vendor_elem; scalar_t__ wfd_ie_go_neg; int num_pref_freq; int pref_freq_list; int op_channel; int op_reg_class; TYPE_1__* cfg; int channels; int intended_addr; int ext_listen_interval; int ext_listen_period; int client_timeout; int go_timeout; scalar_t__ cross_connect; } ;
struct TYPE_2__ {int country; int channel; int reg_class; scalar_t__ p2p_intra_bss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct wpabuf*,int,int ) ;
 int FUNC_1 (struct wpabuf*,int ,int *) ;
 int FUNC_2 (struct wpabuf*,int ,int ) ;
 int FUNC_3 (struct wpabuf*,struct p2p_data*,struct p2p_device*) ;
 int FUNC_4 (struct wpabuf*,int ,int ) ;
 int FUNC_5 (struct wpabuf*,int) ;
 int * FUNC_6 (struct wpabuf*) ;
 int FUNC_7 (struct wpabuf*,int ) ;
 int FUNC_8 (struct wpabuf*,int ,int ,int ) ;
 int FUNC_9 (struct wpabuf*,int ,int ,int ) ;
 int FUNC_10 (struct wpabuf*,int ,int ) ;
 int FUNC_11 (struct wpabuf*,int ,int ) ;
 int FUNC_12 (struct wpabuf*,int *) ;
 scalar_t__ FUNC_13 (struct p2p_data*,struct wpabuf*,scalar_t__,int ) ;
 int FUNC_14 (struct p2p_data*,char*) ;
 scalar_t__ FUNC_15 (int ) ;
 struct wpabuf* FUNC_16 (int) ;
 int FUNC_17 (struct wpabuf*) ;
 size_t FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct wpabuf*,scalar_t__) ;

__attribute__((used)) static struct wpabuf * FUNC_20(struct p2p_data *VAR_9,
         struct p2p_device *VAR_10)
{
 struct wpabuf *VAR_11;
 u8 *VAR_12;
 u8 VAR_13;
 size_t VAR_14 = 0;
 u16 VAR_15;






 if (VAR_9->vendor_elem && VAR_9->vendor_elem[VAR_8])
  VAR_14 += FUNC_18(VAR_9->vendor_elem[VAR_8]);

 VAR_11 = FUNC_16(1000 + VAR_14);
 if (VAR_11 == ((void*)0))
  return ((void*)0);

 FUNC_11(VAR_11, VAR_3, VAR_10->dialog_token);

 VAR_12 = FUNC_6(VAR_11);
 VAR_13 = 0;
 if (VAR_10->flags & VAR_1) {
  VAR_13 |= VAR_6;
  if (VAR_10->flags & VAR_2)
   VAR_13 |= VAR_7;
 }
 if (VAR_9->cross_connect)
  VAR_13 |= VAR_4;
 if (VAR_9->cfg->p2p_intra_bss)
  VAR_13 |= VAR_5;
 FUNC_0(VAR_11, VAR_9->dev_capab &
          ~VAR_0,
          VAR_13);
 FUNC_5(VAR_11, (VAR_9->go_intent << 1) | VAR_10->tie_breaker);
 FUNC_2(VAR_11, VAR_9->go_timeout, VAR_9->client_timeout);
 FUNC_8(VAR_11, VAR_9->cfg->country, VAR_9->cfg->reg_class,
       VAR_9->cfg->channel);
 if (VAR_9->ext_listen_interval)
  FUNC_4(VAR_11, VAR_9->ext_listen_period,
           VAR_9->ext_listen_interval);
 FUNC_7(VAR_11, VAR_9->intended_addr);
 FUNC_1(VAR_11, VAR_9->cfg->country, &VAR_9->channels);
 FUNC_3(VAR_11, VAR_9, VAR_10);
 FUNC_9(VAR_11, VAR_9->cfg->country,
          VAR_9->op_reg_class, VAR_9->op_channel);
 FUNC_12(VAR_11, VAR_12);

 FUNC_10(VAR_11, VAR_9->pref_freq_list,
          VAR_9->num_pref_freq);


 VAR_15 = FUNC_15(VAR_10->wps_method);
 if (VAR_10->oob_pw_id)
  VAR_15 = VAR_10->oob_pw_id;
 if (FUNC_13(VAR_9, VAR_11, VAR_15, 0) < 0) {
  FUNC_14(VAR_9, "Failed to build WPS IE for GO Negotiation Request");
  FUNC_17(VAR_11);
  return ((void*)0);
 }






 if (VAR_9->vendor_elem && VAR_9->vendor_elem[VAR_8])
  FUNC_19(VAR_11, VAR_9->vendor_elem[VAR_8]);

 return VAR_11;
}
