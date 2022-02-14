
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct protoent {int af; int * hook; } ;
typedef TYPE_1__* sc_p ;
typedef int hook_p ;
struct TYPE_3__ {int handle; } ;


 int FUNC_0 (int ) ;
 struct protoent* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(hook_p VAR_0)
{
 const sc_p VAR_1 = FUNC_4(FUNC_0(VAR_0));
 struct protoent *VAR_2;


 if ((VAR_2 = FUNC_1(VAR_0))) {
  VAR_2->hook = ((void*)0);
  if (VAR_2->af == 0xffff)

   FUNC_6(&VAR_1->handle, FUNC_0(VAR_0));
 }


 if ((FUNC_3(FUNC_0(VAR_0)) == 0)
 && (FUNC_2(FUNC_0(VAR_0))))
  FUNC_5(FUNC_0(VAR_0));
 return (0);
}
