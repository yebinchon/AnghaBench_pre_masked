
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct TYPE_2__ {void* (* create_domain ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static __inline void *
FUNC_1(vm_paddr_t VAR_2)
{

 if (VAR_1 != ((void*)0) && VAR_0)
  return ((*VAR_1->create_domain)(VAR_2));
 else
  return (((void*)0));
}
