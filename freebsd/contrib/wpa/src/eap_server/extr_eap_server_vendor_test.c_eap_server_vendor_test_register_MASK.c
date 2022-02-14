
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int isSuccess; int getKey; int isDone; int process; int check; int buildReq; int reset; int init; } ;


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
 int VAR_10 ;

int FUNC_2(void)
{
 struct eap_method *VAR_11;

 VAR_11 = FUNC_0(VAR_0,
          VAR_1, VAR_2,
          "VENDOR-TEST");
 if (VAR_11 == ((void*)0))
  return -1;

 VAR_11->init = VAR_6;
 VAR_11->reset = VAR_10;
 VAR_11->buildReq = VAR_3;
 VAR_11->check = VAR_4;
 VAR_11->process = VAR_9;
 VAR_11->isDone = VAR_7;
 VAR_11->getKey = VAR_5;
 VAR_11->isSuccess = VAR_8;

 return FUNC_1(VAR_11);
}
