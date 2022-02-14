
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ContextFlags; } ;
typedef int HANDLE ;
typedef TYPE_1__ CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,TYPE_1__*,int *) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_3 (HANDLE VAR_2, CONTEXT * VAR_3)
{
  if (VAR_1 < 0)
    return 1;
  FUNC_2 ("GetThreadContext handle", VAR_0, VAR_2);
  FUNC_1 ("GetThreadContext flags", VAR_0, VAR_3->ContextFlags);
  return FUNC_0 ("GetThreadContext context", VAR_0, VAR_3, ((void*)0));
}
