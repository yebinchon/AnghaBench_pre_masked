
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_page_t ;
typedef int vm_paddr_t ;
struct TYPE_3__ {int oflags; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline bool
FUNC_1(vm_paddr_t VAR_1)
{
 vm_page_t VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);
 return ((VAR_2->oflags & VAR_0) == 0);
}
