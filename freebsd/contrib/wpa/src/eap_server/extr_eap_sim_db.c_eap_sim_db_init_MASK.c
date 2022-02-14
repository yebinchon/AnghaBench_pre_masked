
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sim_db_data {int sock; void (* get_complete_cb ) (void*,void*) ;unsigned int eap_sim_db_timeout; struct eap_sim_db_data* fname; int * sqlite_db; void* ctx; } ;


 int VAR_0 ;
 int * FUNC_0 (char*) ;
 int FUNC_1 (struct eap_sim_db_data*) ;
 scalar_t__ FUNC_2 (struct eap_sim_db_data*) ;
 int FUNC_3 (struct eap_sim_db_data*) ;
 struct eap_sim_db_data* FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (struct eap_sim_db_data*,char*,int) ;
 char* FUNC_6 (struct eap_sim_db_data*,char*) ;
 struct eap_sim_db_data* FUNC_7 (int) ;
 int FUNC_8 (int ,char*) ;

struct eap_sim_db_data *
FUNC_9(const char *VAR_1, unsigned int VAR_2,
  void (*VAR_3)(void *VAR_4, void *VAR_5),
  void *VAR_6)
{
 struct eap_sim_db_data *VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_7(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->sock = -1;
 VAR_7->get_complete_cb = VAR_3;
 VAR_7->ctx = VAR_6;
 VAR_7->eap_sim_db_timeout = VAR_2;
 VAR_7->fname = FUNC_4(VAR_1);
 if (VAR_7->fname == ((void*)0))
  goto fail;
 VAR_8 = FUNC_6(VAR_7->fname, " db=");
 if (VAR_8) {
  *VAR_8 = '\0';






 }

 if (FUNC_5(VAR_7->fname, "unix:", 5) == 0) {
  if (FUNC_2(VAR_7)) {
   FUNC_8(VAR_0, "EAP-SIM DB: External database "
       "connection not available - will retry "
       "later");
  }
 }

 return VAR_7;

fail:
 FUNC_1(VAR_7);
 FUNC_3(VAR_7->fname);
 FUNC_3(VAR_7);
 return ((void*)0);
}
