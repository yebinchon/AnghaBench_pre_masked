
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int * iffam_p ;
typedef scalar_t__ hook_p ;
struct TYPE_3__ {scalar_t__* hooks; } ;


 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static __inline iffam_p
FUNC_0(priv_p VAR_2, hook_p VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if (VAR_2->hooks[VAR_4] == VAR_3)
   return (&VAR_1[VAR_4]);
 return (((void*)0));
}
