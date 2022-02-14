
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef struct wpabuf const wpabuf ;
struct p2p_data {TYPE_1__* cfg; int pending_action_state; int srv_update_indic; scalar_t__ sd_frag_id; scalar_t__ sd_resp_pos; int sd_resp_dialog_token; int sd_resp_addr; struct wpabuf const* sd_resp; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 struct wpabuf const* FUNC_1 (int ,int ,int,int ,struct wpabuf const*) ;
 int FUNC_2 (struct p2p_data*,char*) ;
 int FUNC_3 (struct p2p_data*,char*) ;
 scalar_t__ FUNC_4 (struct p2p_data*,int,int const*,int ,int ,int ,size_t,unsigned int) ;
 struct wpabuf const* FUNC_5 (struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*) ;
 size_t FUNC_8 (struct wpabuf const*) ;

void FUNC_9(struct p2p_data *VAR_3, int VAR_4, const u8 *VAR_5,
       u8 VAR_6, const struct wpabuf *VAR_7)
{
 struct wpabuf *VAR_8;
 size_t VAR_9;
 unsigned int VAR_10 = 200;





 VAR_9 = (VAR_4 > 56160) ? 928 : 1400;


 if (FUNC_8(VAR_7) > VAR_9) {
  FUNC_2(VAR_3, "SD response long enough to require fragmentation");
  if (VAR_3->sd_resp) {







   FUNC_2(VAR_3, "Drop previous SD response");
   FUNC_6(VAR_3->sd_resp);
  }
  VAR_3->sd_resp = FUNC_5(VAR_7);
  if (VAR_3->sd_resp == ((void*)0)) {
   FUNC_3(VAR_3, "Failed to allocate SD response fragmentation area");
   return;
  }
  FUNC_0(VAR_3->sd_resp_addr, VAR_5, VAR_0);
  VAR_3->sd_resp_dialog_token = VAR_6;
  VAR_3->sd_resp_pos = 0;
  VAR_3->sd_frag_id = 0;
  VAR_8 = FUNC_1(VAR_6, VAR_2,
          1, VAR_3->srv_update_indic, ((void*)0));
 } else {
  FUNC_2(VAR_3, "SD response fits in initial response");
  VAR_10 = 0;
  VAR_8 = FUNC_1(VAR_6,
          VAR_2, 0,
          VAR_3->srv_update_indic, VAR_7);
 }
 if (VAR_8 == ((void*)0))
  return;

 VAR_3->pending_action_state = VAR_1;
 if (FUNC_4(VAR_3, VAR_4, VAR_5, VAR_3->cfg->dev_addr,
       VAR_3->cfg->dev_addr,
       FUNC_7(VAR_8), FUNC_8(VAR_8), VAR_10) < 0)
  FUNC_2(VAR_3, "Failed to send Action frame");

 FUNC_6(VAR_8);
}
