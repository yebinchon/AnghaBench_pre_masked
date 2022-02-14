
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int eap_sim_db_priv; int identity_len; int identity; } ;
struct eap_aka_data {scalar_t__ eap_method; int permanent; } ;


 char VAR_0 ;
 char VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_aka_data*,char*) ;
 int FUNC_1 (struct eap_sm*,struct eap_aka_data*) ;
 char* FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char const*,int) ;
 char* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_5,
       struct eap_aka_data *VAR_6)
{
 char *VAR_7;



 VAR_7 = FUNC_5(VAR_5->identity, VAR_5->identity_len);
 if (VAR_7 == ((void*)0))
  return;

 if (FUNC_0(VAR_5, VAR_6, VAR_7) > 0) {
  FUNC_3(VAR_7);




  return;
 }

 if ((VAR_6->eap_method == VAR_3 &&
      VAR_7[0] == VAR_0) ||
     (VAR_6->eap_method == VAR_2 &&
      VAR_7[0] == VAR_1)) {
  const char *VAR_8;
  FUNC_6(VAR_4, "EAP-AKA: Pseudonym username '%s'",
      VAR_7);
  VAR_8 = FUNC_2(
   VAR_5->eap_sim_db_priv, VAR_7);
  if (VAR_8 == ((void*)0)) {
   FUNC_3(VAR_7);
   FUNC_6(VAR_4, "EAP-AKA: Unknown pseudonym "
       "identity - request permanent identity");

   return;
  }
  FUNC_4(VAR_6->permanent, VAR_8,
      sizeof(VAR_6->permanent));




  FUNC_1(VAR_5, VAR_6);
 }

 FUNC_3(VAR_7);
}
