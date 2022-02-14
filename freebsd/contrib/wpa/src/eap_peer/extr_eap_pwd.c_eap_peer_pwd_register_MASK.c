
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int get_emsk; int getSessionId; int getKey; int isKeyAvailable; int process; int deinit; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct eap_method* FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct eap_method*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

int FUNC_2(void)
{
 struct eap_method *VAR_10;

 VAR_10 = FUNC_0(VAR_0,
        VAR_2, VAR_1, "PWD");
 if (VAR_10 == ((void*)0))
  return -1;

 VAR_10->init = VAR_7;
 VAR_10->deinit = VAR_3;
 VAR_10->process = VAR_9;
 VAR_10->isKeyAvailable = VAR_8;
 VAR_10->getKey = VAR_6;
 VAR_10->getSessionId = VAR_5;
 VAR_10->get_emsk = VAR_4;

 return FUNC_1(VAR_10);
}
