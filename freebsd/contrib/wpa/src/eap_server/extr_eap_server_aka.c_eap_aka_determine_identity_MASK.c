
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_sm {int eap_sim_db_priv; int identity_len; int identity; } ;
struct eap_aka_data {scalar_t__ eap_method; int identity_round; void* notification; int permanent; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct eap_sm*,struct eap_aka_data*,char*) ;
 int FUNC_1 (struct eap_sm*,struct eap_aka_data*) ;
 int FUNC_2 (struct eap_aka_data*,int ) ;
 char* FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char const*,int) ;
 char* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ,char*,...) ;

__attribute__((used)) static void FUNC_9(struct eap_sm *VAR_11,
           struct eap_aka_data *VAR_12)
{
 char *VAR_13;

 FUNC_7(VAR_9, "EAP-AKA: Identity",
     VAR_11->identity, VAR_11->identity_len);

 VAR_13 = FUNC_6(VAR_11->identity, VAR_11->identity_len);
 if (VAR_13 == ((void*)0)) {
  VAR_12->notification = VAR_6;
  FUNC_2(VAR_12, VAR_10);
  return;
 }

 if (FUNC_0(VAR_11, VAR_12, VAR_13) > 0) {
  FUNC_4(VAR_13);
  return;
 }

 if (((VAR_12->eap_method == VAR_8 &&
       VAR_13[0] == VAR_3) ||
      (VAR_12->eap_method == VAR_7 &&
       VAR_13[0] == VAR_5)) &&
     VAR_12->identity_round == 1) {


  FUNC_4(VAR_13);
  return;
 }

 if ((VAR_12->eap_method == VAR_8 &&
      VAR_13[0] == VAR_2) ||
     (VAR_12->eap_method == VAR_7 &&
      VAR_13[0] == VAR_4)) {
  const char *VAR_14;
  FUNC_8(VAR_9, "EAP-AKA: Pseudonym username '%s'",
      VAR_13);
  VAR_14 = FUNC_3(
   VAR_11->eap_sim_db_priv, VAR_13);
  FUNC_4(VAR_13);
  if (VAR_14 == ((void*)0)) {
   FUNC_8(VAR_9, "EAP-AKA: Unknown pseudonym "
       "identity - request permanent identity");

   return;
  }
  FUNC_5(VAR_12->permanent, VAR_14,
      sizeof(VAR_12->permanent));
 } else if ((VAR_12->eap_method == VAR_8 &&
      VAR_13[0] == VAR_1) ||
     (VAR_12->eap_method == VAR_7 &&
      VAR_13[0] == VAR_0)) {
  FUNC_8(VAR_9, "EAP-AKA: Permanent username '%s'",
      VAR_13);
  FUNC_5(VAR_12->permanent, VAR_13, sizeof(VAR_12->permanent));
  FUNC_4(VAR_13);
 } else {
  FUNC_8(VAR_9, "EAP-AKA: Unrecognized username '%s'",
      VAR_13);
  FUNC_4(VAR_13);
  VAR_12->notification = VAR_6;
  FUNC_2(VAR_12, VAR_10);
  return;
 }

 FUNC_1(VAR_11, VAR_12);
}
