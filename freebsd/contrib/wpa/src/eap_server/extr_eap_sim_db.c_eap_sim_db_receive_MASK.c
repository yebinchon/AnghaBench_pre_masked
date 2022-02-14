
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct eap_sim_db_data {int * get_complete_cb; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct eap_sim_db_data*,char*,char*) ;
 int FUNC_1 (struct eap_sim_db_data*,char*,char*) ;
 char* FUNC_2 (char*,char) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,int,int ) ;
 int FUNC_5 (int ,char*,int *,int) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(int VAR_3, void *VAR_4, void *VAR_5)
{
 struct eap_sim_db_data *VAR_6 = VAR_4;
 char VAR_7[1000], *VAR_8, *VAR_9, *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_4(VAR_3, VAR_7, sizeof(VAR_7) - 1, 0);
 if (VAR_11 < 0)
  return;
 VAR_7[VAR_11] = '\0';
 FUNC_5(VAR_2, "EAP-SIM DB: Received from an "
         "external source", (u8 *) VAR_7, VAR_11);
 if (VAR_11 == 0)
  return;

 if (VAR_6->get_complete_cb == ((void*)0)) {
  FUNC_6(VAR_0, "EAP-SIM DB: No get_complete_cb "
      "registered");
  return;
 }



 VAR_9 = VAR_7;
 VAR_8 = FUNC_2(VAR_9, ' ');
 if (VAR_8 == ((void*)0))
  goto parse_fail;
 *VAR_8 = '\0';
 VAR_10 = VAR_8 + 1;
 VAR_8 = FUNC_2(VAR_10, ' ');
 if (VAR_8 == ((void*)0))
  goto parse_fail;
 *VAR_8 = '\0';
 FUNC_6(VAR_0, "EAP-SIM DB: External response=%s for IMSI %s",
     VAR_9, VAR_10);

 if (FUNC_3(VAR_9, "SIM-RESP-AUTH") == 0)
  FUNC_1(VAR_6, VAR_10, VAR_8 + 1);
 else if (FUNC_3(VAR_9, "AKA-RESP-AUTH") == 0)
  FUNC_0(VAR_6, VAR_10, VAR_8 + 1);
 else
  FUNC_6(VAR_1, "EAP-SIM DB: Unknown external response "
      "'%s'", VAR_9);
 return;

parse_fail:
 FUNC_6(VAR_0, "EAP-SIM DB: Failed to parse response string");
}
