
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int hook_p ;
struct TYPE_5__ {int ** hooks; TYPE_1__* links; } ;
struct TYPE_4__ {int * hook; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 TYPE_2__* FUNC_4 (int const) ;
 int FUNC_5 (int const,int ) ;
 int FUNC_6 (int const) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_0)
{
 const node_p VAR_1 = FUNC_0(VAR_0);
 const priv_p VAR_2 = FUNC_4(VAR_1);
 const int VAR_3 = (intptr_t)FUNC_1(VAR_0);


 if (VAR_3 < 0)
  VAR_2->links[~VAR_3].hook = ((void*)0);
 else
  VAR_2->hooks[VAR_3] = ((void*)0);


 if (FUNC_3(VAR_1) > 0)
  FUNC_5(VAR_1, 0);
 else if (FUNC_2(VAR_1))
  FUNC_6(VAR_1);

 return (0);
}
