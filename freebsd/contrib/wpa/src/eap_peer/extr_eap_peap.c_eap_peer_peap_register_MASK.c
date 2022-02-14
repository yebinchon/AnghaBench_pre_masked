
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int getSessionId; int init_for_reauth; int deinit_for_reauth; int has_reauth_data; int get_status; int get_emsk; int getKey; int isKeyAvailable; int process; int deinit; int init; } ;


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
 struct eap_method* FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct eap_method*) ;

int FUNC_2(void)
{
 struct eap_method *VAR_14;

 VAR_14 = FUNC_0(VAR_0,
        VAR_2, VAR_1, "PEAP");
 if (VAR_14 == ((void*)0))
  return -1;

 VAR_14->init = VAR_10;
 VAR_14->deinit = VAR_3;
 VAR_14->process = VAR_13;
 VAR_14->isKeyAvailable = VAR_12;
 VAR_14->getKey = VAR_5;
 VAR_14->get_emsk = VAR_6;
 VAR_14->get_status = VAR_8;
 VAR_14->has_reauth_data = VAR_9;
 VAR_14->deinit_for_reauth = VAR_4;
 VAR_14->init_for_reauth = VAR_11;
 VAR_14->getSessionId = VAR_7;

 return FUNC_1(VAR_14);
}
