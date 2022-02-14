
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int node_p ;
typedef int hookpriv_p ;
typedef int * hook_p ;
struct TYPE_3__ {int * lower; int * ctrl; } ;


 int FUNC_0 (int const,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int const) ;
 scalar_t__ FUNC_5 (int const) ;
 TYPE_1__* FUNC_6 (int const) ;
 int FUNC_7 (int const,int ) ;
 int FUNC_8 (int const) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_9(hook_p VAR_2)
{
 const node_p VAR_3 = FUNC_1(VAR_2);
 const priv_p VAR_4 = FUNC_6(VAR_3);


 if (VAR_2 == VAR_4->ctrl)
  VAR_4->ctrl = ((void*)0);
 else if (VAR_2 == VAR_4->lower)
  VAR_4->lower = ((void*)0);
 else {
  const hookpriv_p VAR_5 = FUNC_2(VAR_2);
  FUNC_0(VAR_5, VAR_1);
  FUNC_7(VAR_5, VAR_0);
  FUNC_3(VAR_2, ((void*)0));
 }


 if (FUNC_5(VAR_3) == 0 && FUNC_4(VAR_3))
  FUNC_8(VAR_3);
 return (0);
}
