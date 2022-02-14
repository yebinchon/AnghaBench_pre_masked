
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int * hook_p ;
struct TYPE_3__ {int * out; int * in; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_0)
{
 priv_p VAR_1;

 VAR_1 = FUNC_3(FUNC_0(VAR_0));

 if (VAR_0 == VAR_1->in) {
  VAR_1->in = ((void*)0);
 }

 if (VAR_0 == VAR_1->out) {
  VAR_1->out = ((void*)0);
 }

 if (FUNC_2(FUNC_0(VAR_0)) == 0 &&
     FUNC_1(FUNC_0(VAR_0)))
  FUNC_4(FUNC_0(VAR_0));

 return (0);
}
