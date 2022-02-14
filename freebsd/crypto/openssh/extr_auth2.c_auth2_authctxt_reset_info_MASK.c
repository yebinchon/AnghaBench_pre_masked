
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * auth_method_info; int * auth_method_key; } ;
typedef TYPE_1__ Authctxt ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(Authctxt *VAR_0)
{
 FUNC_1(VAR_0->auth_method_key);
 FUNC_0(VAR_0->auth_method_info);
 VAR_0->auth_method_key = ((void*)0);
 VAR_0->auth_method_info = ((void*)0);
}
