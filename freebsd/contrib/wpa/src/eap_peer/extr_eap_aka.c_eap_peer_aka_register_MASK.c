
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int get_error_code; int get_emsk; int get_identity; int init_for_reauth; int deinit_for_reauth; int has_reauth_data; int getSessionId; int getKey; int isKeyAvailable; int process; int deinit; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct eap_method* FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct eap_method*) ;

int FUNC_2(void)
{
 struct eap_method *VAR_15;

 VAR_15 = FUNC_0(VAR_0,
        VAR_2, VAR_1, "AKA");
 if (VAR_15 == ((void*)0))
  return -1;

 VAR_15->init = VAR_11;
 VAR_15->deinit = VAR_3;
 VAR_15->process = VAR_14;
 VAR_15->isKeyAvailable = VAR_13;
 VAR_15->getKey = VAR_5;
 VAR_15->getSessionId = VAR_9;
 VAR_15->has_reauth_data = VAR_10;
 VAR_15->deinit_for_reauth = VAR_4;
 VAR_15->init_for_reauth = VAR_12;
 VAR_15->get_identity = VAR_8;
 VAR_15->get_emsk = VAR_6;
 VAR_15->get_error_code = VAR_7;

 return FUNC_1(VAR_15);
}
