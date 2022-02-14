
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int getKey; int isKeyAvailable; int process; int deinit; int init; } ;


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

int FUNC_2(void)
{
 struct eap_method *VAR_8;

 VAR_8 = FUNC_0(VAR_0,
        VAR_1, VAR_2,
        "VENDOR-TEST");
 if (VAR_8 == ((void*)0))
  return -1;

 VAR_8->init = VAR_5;
 VAR_8->deinit = VAR_3;
 VAR_8->process = VAR_7;
 VAR_8->isKeyAvailable = VAR_6;
 VAR_8->getKey = VAR_4;

 return FUNC_1(VAR_8);
}
