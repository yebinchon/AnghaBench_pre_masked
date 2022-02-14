
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct p2p_device {int dummy; } ;
struct p2p_data {int ssid_set; size_t ssid_len; TYPE_2__* cfg; int * intended_addr; int * ssid; TYPE_1__* p2ps_prov; } ;
struct TYPE_4__ {int (* get_go_info ) (int ,int *,int *,size_t*,int*,unsigned int*) ;int * dev_addr; int cb_ctx; } ;
struct TYPE_3__ {unsigned int force_freq; scalar_t__ pref_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpabuf*,int *,int *,size_t) ;
 int FUNC_1 (struct wpabuf*,int *) ;
 int FUNC_2 (struct p2p_data*,int *,size_t*) ;
 int FUNC_3 (struct p2p_data*,struct p2p_device*,unsigned int,int ,int ) ;
 int FUNC_4 (int ,int *,int *,size_t*,int*,unsigned int*) ;

__attribute__((used)) static void FUNC_5(struct p2p_data *VAR_2,
        struct p2p_device *VAR_3,
        struct wpabuf *VAR_4)
{
 int VAR_5;
 u8 VAR_6[VAR_0];
 u8 VAR_7[VAR_1];
 size_t VAR_8;
 int VAR_9;
 unsigned int VAR_10;

 if (!VAR_2->cfg->get_go_info)
  return;

 VAR_5 = VAR_2->cfg->get_go_info(
  VAR_2->cfg->cb_ctx, VAR_6, VAR_7,
  &VAR_8, &VAR_9, &VAR_10);
 if (VAR_5) {
  if (VAR_10 > 0) {
   VAR_2->p2ps_prov->force_freq = VAR_10;
   VAR_2->p2ps_prov->pref_freq = 0;

   if (VAR_3)
    FUNC_3(VAR_2, VAR_3, VAR_10, 0, 0);
  }
  FUNC_0(VAR_4, VAR_2->cfg->dev_addr,
         VAR_7, VAR_8);

  if (VAR_9)
   FUNC_1(VAR_4, VAR_2->intended_addr);
  else
   FUNC_1(VAR_4, VAR_6);
 } else {
  if (!VAR_2->ssid_set) {
   FUNC_2(VAR_2, VAR_2->ssid, &VAR_2->ssid_len);
   VAR_2->ssid_set = 1;
  }


  FUNC_0(VAR_4, VAR_2->cfg->dev_addr,
         VAR_2->ssid, VAR_2->ssid_len);

  if (VAR_9)
   FUNC_1(
    VAR_4, VAR_2->intended_addr);
  else
   FUNC_1(
    VAR_4, VAR_2->cfg->dev_addr);
 }
}
