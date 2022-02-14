
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct ssh {TYPE_2__* authctxt; } ;
struct TYPE_5__ {int success; int * methoddata; TYPE_1__* method; int * authlist; } ;
struct TYPE_4__ {int (* cleanup ) (TYPE_2__*) ;} ;
typedef TYPE_2__ Authctxt ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

int
FUNC_3(int VAR_0, u_int32_t VAR_1, struct ssh *VAR_2)
{
 Authctxt *VAR_3 = VAR_2->authctxt;

 if (VAR_3 == ((void*)0))
  FUNC_0("input_userauth_success: no authentication context");
 FUNC_1(VAR_3->authlist);
 VAR_3->authlist = ((void*)0);
 if (VAR_3->method != ((void*)0) && VAR_3->method->cleanup != ((void*)0))
  VAR_3->method->cleanup(VAR_3);
 FUNC_1(VAR_3->methoddata);
 VAR_3->methoddata = ((void*)0);
 VAR_3->success = 1;
 return 0;
}
