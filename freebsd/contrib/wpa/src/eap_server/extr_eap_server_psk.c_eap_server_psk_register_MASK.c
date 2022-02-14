
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int getSessionId; int get_emsk; int isSuccess; int getKey; int isDone; int process; int check; int buildReq; int reset; int init; } ;


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
 struct eap_method* FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct eap_method*) ;

int FUNC_2(void)
{
 struct eap_method *VAR_13;

 VAR_13 = FUNC_0(VAR_0,
          VAR_2, VAR_1, "PSK");
 if (VAR_13 == ((void*)0))
  return -1;

 VAR_13->init = VAR_8;
 VAR_13->reset = VAR_12;
 VAR_13->buildReq = VAR_3;
 VAR_13->check = VAR_4;
 VAR_13->process = VAR_11;
 VAR_13->isDone = VAR_9;
 VAR_13->getKey = VAR_5;
 VAR_13->isSuccess = VAR_10;
 VAR_13->get_emsk = VAR_6;
 VAR_13->getSessionId = VAR_7;

 return FUNC_1(VAR_13);
}
