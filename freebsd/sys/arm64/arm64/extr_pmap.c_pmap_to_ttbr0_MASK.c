
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_1__* pmap_t ;
struct TYPE_3__ {int pm_l0_paddr; int pm_cookie; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

uint64_t
FUNC_2(pmap_t VAR_0)
{

 return (FUNC_0(FUNC_1(VAR_0->pm_cookie)) |
     VAR_0->pm_l0_paddr);
}
