
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct XXX_hookinfo {int * hook; } ;
typedef int hook_p ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_0)
{
 if (FUNC_1(VAR_0))
  ((struct XXX_hookinfo *) (FUNC_1(VAR_0)))->hook = ((void*)0);
 if ((FUNC_3(FUNC_0(VAR_0)) == 0)
 && (FUNC_2(FUNC_0(VAR_0))))
  FUNC_4(FUNC_0(VAR_0));
 return (0);
}
