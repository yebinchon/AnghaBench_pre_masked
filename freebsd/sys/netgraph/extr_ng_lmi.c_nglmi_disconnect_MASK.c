
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sc_p ;
typedef int hook_p ;
struct TYPE_3__ {int flags; int node; int handle; } ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int
FUNC_6(hook_p VAR_1)
{
 const sc_p VAR_2 = FUNC_3(FUNC_0(VAR_1));


 if (FUNC_1(VAR_1) == ((void*)0))
  return (0);


 if (VAR_2->flags & VAR_0)
  FUNC_5(&VAR_2->handle, VAR_2->node);


 if (FUNC_2(FUNC_0(VAR_1)))
  FUNC_4(FUNC_0(VAR_1));
 return (0);
}
