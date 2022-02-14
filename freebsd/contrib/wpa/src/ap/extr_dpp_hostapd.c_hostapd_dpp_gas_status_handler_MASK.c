
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_data {struct dpp_authentication* dpp_auth; int msg_ctx; } ;
struct dpp_authentication {int peer_version; scalar_t__ conf_resp_status; int waiting_conf_result; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dpp_authentication*) ;
 int FUNC_1 (int ,struct hostapd_data*,int *) ;
 int FUNC_2 (int,int ,int ,struct hostapd_data*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct hostapd_data*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;

void FUNC_6(struct hostapd_data *VAR_8, int VAR_9)
{
 struct dpp_authentication *VAR_10 = VAR_8->dpp_auth;

 if (!VAR_10)
  return;

 FUNC_5(VAR_3, "DPP: Configuration exchange completed (ok=%d)",
     VAR_9);
 FUNC_1(VAR_7, VAR_8, ((void*)0));
 FUNC_1(VAR_5, VAR_8, ((void*)0));
 FUNC_3(VAR_8);

 if (VAR_9)
  FUNC_4(VAR_8->msg_ctx, VAR_4, VAR_1);
 else
  FUNC_4(VAR_8->msg_ctx, VAR_4, VAR_0);
 FUNC_0(VAR_8->dpp_auth);
 VAR_8->dpp_auth = ((void*)0);
}
