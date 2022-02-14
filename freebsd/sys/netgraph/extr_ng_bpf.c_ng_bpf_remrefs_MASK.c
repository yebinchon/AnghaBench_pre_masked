
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * hook_p ;
typedef TYPE_1__* hinfo_p ;
struct TYPE_3__ {int * nomatch; int * match; } ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(hook_p VAR_0, void* VAR_1)
{
 hinfo_p VAR_2 = FUNC_0(VAR_0);
 hook_p VAR_3 = (hook_p)VAR_1;

 if (VAR_2->match == VAR_3)
     VAR_2->match = ((void*)0);
 if (VAR_2->nomatch == VAR_3)
     VAR_2->nomatch = ((void*)0);
 return (1);
}
