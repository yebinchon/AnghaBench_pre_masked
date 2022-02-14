
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_data {int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct eap_sim_db_data*) ;
 scalar_t__ FUNC_1 (struct eap_sim_db_data*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ,char const*,size_t,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct eap_sim_db_data *VAR_7, const char *VAR_8,
      size_t VAR_9)
{
 int VAR_10 = 0;

 if (FUNC_2(VAR_7->sock, VAR_8, VAR_9, 0) < 0) {
  VAR_10 = VAR_6;
  FUNC_4(VAR_5, "send[EAP-SIM DB UNIX]: %s",
      FUNC_3(VAR_6));
 }

 if (VAR_10 == VAR_3 || VAR_10 == VAR_1 || VAR_10 == VAR_2 ||
     VAR_10 == VAR_0) {

  FUNC_0(VAR_7);
  if (FUNC_1(VAR_7) < 0)
   return -1;
  FUNC_4(VAR_4, "EAP-SIM DB: Reconnected to the "
      "external server");
  if (FUNC_2(VAR_7->sock, VAR_8, VAR_9, 0) < 0) {
   FUNC_4(VAR_5, "send[EAP-SIM DB UNIX]: %s",
       FUNC_3(VAR_6));
   return -1;
  }
 }

 return 0;
}
