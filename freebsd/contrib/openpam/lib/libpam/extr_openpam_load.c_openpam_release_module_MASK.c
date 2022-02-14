
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* path; int * dlh; } ;
typedef TYPE_1__ pam_module_t ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(pam_module_t *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->dlh == ((void*)0))

  return;
 FUNC_1(VAR_1->dlh);
 FUNC_2(VAR_0, "releasing %s", VAR_1->path);
 FUNC_0(VAR_1->path);
 FUNC_0(VAR_1);
}
