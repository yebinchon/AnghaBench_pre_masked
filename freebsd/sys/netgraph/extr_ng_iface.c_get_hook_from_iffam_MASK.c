
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef size_t iffam_p ;
typedef int hook_p ;
struct TYPE_3__ {int * hooks; } ;


 size_t VAR_0 ;

__attribute__((used)) static __inline hook_p *
FUNC_0(priv_p VAR_1, iffam_p VAR_2)
{
 return (&VAR_1->hooks[VAR_2 - VAR_0]);
}
