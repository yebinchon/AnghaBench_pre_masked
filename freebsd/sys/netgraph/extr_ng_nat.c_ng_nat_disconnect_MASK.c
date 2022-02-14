
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int * hook_p ;
struct TYPE_3__ {int * in; int * out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(hook_p VAR_1)
{
 const priv_p VAR_2 = FUNC_1(FUNC_0(VAR_1));

 VAR_2->flags &= ~VAR_0;

 if (VAR_1 == VAR_2->out)
  VAR_2->out = ((void*)0);
 if (VAR_1 == VAR_2->in)
  VAR_2->in = ((void*)0);

 if (VAR_2->out == ((void*)0) && VAR_2->in == ((void*)0))
  FUNC_2(FUNC_0(VAR_1));

 return (0);
}
