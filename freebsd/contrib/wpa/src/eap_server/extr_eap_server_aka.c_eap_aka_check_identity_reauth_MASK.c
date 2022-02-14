
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eap_sm {int eap_sim_db_priv; } ;
struct eap_aka_data {scalar_t__ eap_method; TYPE_1__* reauth; int mk; int k_re; int k_aut; int k_encr; int counter; int permanent; } ;
struct TYPE_2__ {int mk; int k_re; int k_aut; int k_encr; int counter; int permanent; } ;


 int VAR_0 ;
 int VAR_1 ;
 char const VAR_2 ;
 char const VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct eap_aka_data*,int ) ;
 TYPE_1__* FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct eap_sm *VAR_10,
      struct eap_aka_data *VAR_11,
      const char *VAR_12)
{
 if (VAR_11->eap_method == VAR_7 &&
     VAR_12[0] != VAR_2)
  return 0;
 if (VAR_11->eap_method == VAR_6 &&
     VAR_12[0] != VAR_3)
  return 0;

 FUNC_4(VAR_8, "EAP-AKA: Reauth username '%s'", VAR_12);
 VAR_11->reauth = FUNC_1(VAR_10->eap_sim_db_priv,
         VAR_12);
 if (VAR_11->reauth == ((void*)0)) {
  FUNC_4(VAR_8, "EAP-AKA: Unknown reauth identity - "
      "request full auth identity");

  return 0;
 }

 FUNC_4(VAR_8, "EAP-AKA: Using fast re-authentication");
 FUNC_3(VAR_11->permanent, VAR_11->reauth->permanent,
     sizeof(VAR_11->permanent));
 VAR_11->counter = VAR_11->reauth->counter;
 if (VAR_11->eap_method == VAR_7) {
  FUNC_2(VAR_11->k_encr, VAR_11->reauth->k_encr,
     VAR_4);
  FUNC_2(VAR_11->k_aut, VAR_11->reauth->k_aut,
     VAR_0);
  FUNC_2(VAR_11->k_re, VAR_11->reauth->k_re,
     VAR_1);
 } else {
  FUNC_2(VAR_11->mk, VAR_11->reauth->mk, VAR_5);
 }

 FUNC_0(VAR_11, VAR_9);
 return 1;
}
