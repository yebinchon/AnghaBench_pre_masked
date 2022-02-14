
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_chal; int * rand; int * sres; int * kc; } ;
struct TYPE_4__ {TYPE_1__ sim; } ;
struct eap_sim_db_pending {int cb_session_ctx; int state; TYPE_2__ u; } ;
struct eap_sim_db_data {int ctx; int (* get_complete_cb ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 int FUNC_1 (struct eap_sim_db_data*,struct eap_sim_db_pending*) ;
 struct eap_sim_db_pending* FUNC_2 (struct eap_sim_db_data*,char const*,int ) ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;
 char* FUNC_4 (char*,char) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,char*) ;

__attribute__((used)) static void FUNC_9(struct eap_sim_db_data *VAR_7,
         const char *VAR_8, char *VAR_9)
{
 char *VAR_10, *VAR_11, *VAR_12;
 struct eap_sim_db_pending *VAR_13;
 int VAR_14;







 VAR_13 = FUNC_2(VAR_7, VAR_8, 0);
 if (VAR_13 == ((void*)0)) {
  FUNC_8(VAR_5, "EAP-SIM DB: No pending entry for the "
      "received message found");
  return;
 }

 VAR_10 = VAR_9;
 if (FUNC_5(VAR_10, "FAILURE", 7) == 0) {
  FUNC_8(VAR_5, "EAP-SIM DB: External server reported "
      "failure");
  VAR_13->state = VAR_3;
  FUNC_0(VAR_7, VAR_13);
  VAR_7->get_complete_cb(VAR_7->ctx, VAR_13->cb_session_ctx);
  return;
 }

 VAR_14 = 0;
 while (VAR_14 < VAR_1) {
  VAR_11 = FUNC_4(VAR_10, ' ');
  if (VAR_11)
   *VAR_11 = '\0';

  VAR_12 = FUNC_4(VAR_10, ':');
  if (VAR_12 == ((void*)0))
   goto parse_fail;
  *VAR_12 = '\0';
  if (FUNC_3(VAR_10, VAR_13->u.sim.kc[VAR_14],
          VAR_0))
   goto parse_fail;

  VAR_10 = VAR_12 + 1;
  VAR_12 = FUNC_4(VAR_10, ':');
  if (VAR_12 == ((void*)0))
   goto parse_fail;
  *VAR_12 = '\0';
  if (FUNC_3(VAR_10, VAR_13->u.sim.sres[VAR_14],
          VAR_2))
   goto parse_fail;

  VAR_10 = VAR_12 + 1;
  if (FUNC_3(VAR_10, VAR_13->u.sim.rand[VAR_14],
          VAR_4))
   goto parse_fail;

  VAR_14++;
  if (VAR_11 == ((void*)0))
   break;
  else
   VAR_10 = VAR_11 + 1;
 }
 VAR_13->u.sim.num_chal = VAR_14;

 VAR_13->state = VAR_6;
 FUNC_8(VAR_5, "EAP-SIM DB: Authentication data parsed "
     "successfully - callback");
 FUNC_0(VAR_7, VAR_13);
 VAR_7->get_complete_cb(VAR_7->ctx, VAR_13->cb_session_ctx);
 return;

parse_fail:
 FUNC_8(VAR_5, "EAP-SIM DB: Failed to parse response string");
 FUNC_1(VAR_7, VAR_13);
}
