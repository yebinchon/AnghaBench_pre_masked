
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef scalar_t__ vm_paddr_t ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(vm_paddr_t VAR_2)
{
 vm_page_t VAR_3;
 int VAR_4;

 if ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0))
  return ((VAR_3->flags & VAR_0) == 0);
 for (VAR_4 = 0; VAR_1[VAR_4] != 0 || VAR_1[VAR_4 + 1] != 0; VAR_4 += 2) {
  if (VAR_2 >= VAR_1[VAR_4] && VAR_2 < VAR_1[VAR_4 + 1])
   return (1);
 }
 return (0);
}
