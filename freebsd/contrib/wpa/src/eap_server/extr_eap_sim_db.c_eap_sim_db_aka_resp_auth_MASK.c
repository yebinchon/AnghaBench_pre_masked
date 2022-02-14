
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int res_len; int res; int ck; int ik; int autn; int rand; } ;
struct TYPE_4__ {TYPE_1__ aka; } ;
struct eap_sim_db_pending {int cb_session_ctx; int state; TYPE_2__ u; } ;
struct eap_sim_db_data {int ctx; int (* get_complete_cb ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 int FUNC_1 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 struct eap_sim_db_pending* FUNC_2 (struct eap_sim_db_data*,char const*,int) ;
 scalar_t__ FUNC_3 (char*,int ,int) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct eap_sim_db_data *VAR_8,
         const char *VAR_9, char *VAR_10)
{
 char *VAR_11, *VAR_12;
 struct eap_sim_db_pending *VAR_13;







 VAR_13 = FUNC_2(VAR_8, VAR_9, 1);
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_6, "EAP-SIM DB: No pending entry for the "
      "received message found");
  return;
 }

 VAR_11 = VAR_10;
 if (FUNC_5(VAR_11, "FAILURE", 7) == 0) {
  FUNC_8(VAR_6, "EAP-SIM DB: External server reported "
      "failure");
  VAR_13->state = VAR_5;
  FUNC_0(VAR_8, VAR_13);
  VAR_8->get_complete_cb(VAR_8->ctx, VAR_13->cb_session_ctx);
  return;
 }

 VAR_12 = FUNC_4(VAR_11, ' ');
 if (VAR_12 == ((void*)0))
  goto parse_fail;
 *VAR_12 = '\0';
 if (FUNC_3(VAR_11, VAR_13->u.aka.rand, VAR_3))
  goto parse_fail;

 VAR_11 = VAR_12 + 1;
 VAR_12 = FUNC_4(VAR_11, ' ');
 if (VAR_12 == ((void*)0))
  goto parse_fail;
 *VAR_12 = '\0';
 if (FUNC_3(VAR_11, VAR_13->u.aka.autn, VAR_0))
  goto parse_fail;

 VAR_11 = VAR_12 + 1;
 VAR_12 = FUNC_4(VAR_11, ' ');
 if (VAR_12 == ((void*)0))
  goto parse_fail;
 *VAR_12 = '\0';
 if (FUNC_3(VAR_11, VAR_13->u.aka.ik, VAR_2))
  goto parse_fail;

 VAR_11 = VAR_12 + 1;
 VAR_12 = FUNC_4(VAR_11, ' ');
 if (VAR_12 == ((void*)0))
  goto parse_fail;
 *VAR_12 = '\0';
 if (FUNC_3(VAR_11, VAR_13->u.aka.ck, VAR_1))
  goto parse_fail;

 VAR_11 = VAR_12 + 1;
 VAR_12 = FUNC_4(VAR_11, ' ');
 if (VAR_12)
  *VAR_12 = '\0';
 else {
  VAR_12 = VAR_11;
  while (*VAR_12)
   VAR_12++;
 }
 VAR_13->u.aka.res_len = (VAR_12 - VAR_11) / 2;
 if (VAR_13->u.aka.res_len > VAR_4) {
  FUNC_8(VAR_6, "EAP-SIM DB: Too long RES");
  VAR_13->u.aka.res_len = 0;
  goto parse_fail;
 }
 if (FUNC_3(VAR_11, VAR_13->u.aka.res, VAR_13->u.aka.res_len))
  goto parse_fail;

 VAR_13->state = VAR_7;
 FUNC_8(VAR_6, "EAP-SIM DB: Authentication data parsed "
     "successfully - callback");
 FUNC_0(VAR_8, VAR_13);
 VAR_8->get_complete_cb(VAR_8->ctx, VAR_13->cb_session_ctx);
 return;

parse_fail:
 FUNC_8(VAR_6, "EAP-SIM DB: Failed to parse response string");
 FUNC_1(VAR_8, VAR_13);
}
