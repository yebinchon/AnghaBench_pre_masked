
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* hook_p ;
typedef TYPE_2__* hinfo_p ;
struct TYPE_5__ {void* nomatch; TYPE_1__* prog; void* match; } ;
struct TYPE_4__ {int ifNotMatch; int ifMatch; } ;


 int FUNC_0 (void*) ;
 TYPE_2__* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(hook_p VAR_0, void* VAR_1)
{
 hinfo_p VAR_2 = FUNC_1(VAR_0);
 hook_p VAR_3 = (hook_p)VAR_1;

 if (FUNC_2(VAR_2->prog->ifMatch, FUNC_0(VAR_3)) == 0)
     VAR_2->match = VAR_3;
 if (FUNC_2(VAR_2->prog->ifNotMatch, FUNC_0(VAR_3)) == 0)
     VAR_2->nomatch = VAR_3;
 return (1);
}
