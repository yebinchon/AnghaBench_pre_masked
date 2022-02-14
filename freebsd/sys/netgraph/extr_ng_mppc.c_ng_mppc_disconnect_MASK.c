
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_3__* priv_p ;
typedef int node_p ;
typedef int * hook_p ;
struct TYPE_6__ {int * hook; } ;
struct TYPE_5__ {int * hook; } ;
struct TYPE_7__ {TYPE_2__ recv; TYPE_1__ xmit; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int const) ;
 scalar_t__ FUNC_2 (int const) ;
 TYPE_3__* FUNC_3 (int const) ;
 int FUNC_4 (int const) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_0)
{
 const node_p VAR_1 = FUNC_0(VAR_0);
 const priv_p VAR_2 = FUNC_3(VAR_1);


 if (VAR_0 == VAR_2->xmit.hook)
  VAR_2->xmit.hook = ((void*)0);
 if (VAR_0 == VAR_2->recv.hook)
  VAR_2->recv.hook = ((void*)0);


 if ((FUNC_2(VAR_1) == 0)
 && FUNC_1(VAR_1))
  FUNC_4(VAR_1);
 return (0);
}
