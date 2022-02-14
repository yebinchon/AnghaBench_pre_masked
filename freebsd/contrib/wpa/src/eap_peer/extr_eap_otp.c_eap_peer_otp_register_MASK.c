
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eap_method {int process; int deinit; int init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct eap_method* FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (struct eap_method*) ;

int FUNC_2(void)
{
 struct eap_method *VAR_6;

 VAR_6 = FUNC_0(VAR_0,
        VAR_2, VAR_1, "OTP");
 if (VAR_6 == ((void*)0))
  return -1;

 VAR_6->init = VAR_4;
 VAR_6->deinit = VAR_3;
 VAR_6->process = VAR_5;

 return FUNC_1(VAR_6);
}
