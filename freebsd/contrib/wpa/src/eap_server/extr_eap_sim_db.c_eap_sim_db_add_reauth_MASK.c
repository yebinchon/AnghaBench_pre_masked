
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_sim_reauth {int mk; } ;
struct eap_sim_db_data {scalar_t__ sqlite_db; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eap_sim_db_data*,char const*,char*,int ,int const*,int *,int *,int *) ;
 struct eap_sim_reauth* FUNC_1 (struct eap_sim_db_data*,char const*,char*,int ) ;
 int FUNC_2 (int ,int const*,int ) ;
 int FUNC_3 (int ,char*,char*,char const*) ;

int FUNC_4(struct eap_sim_db_data *VAR_2, const char *VAR_3,
     char *VAR_4, u16 VAR_5, const u8 *VAR_6)
{
 struct eap_sim_reauth *VAR_7;

 FUNC_3(VAR_1, "EAP-SIM DB: Add reauth_id '%s' for permanent "
     "identity '%s'", VAR_4, VAR_3);






 VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
  return -1;

 FUNC_2(VAR_7->mk, VAR_6, VAR_0);

 return 0;
}
