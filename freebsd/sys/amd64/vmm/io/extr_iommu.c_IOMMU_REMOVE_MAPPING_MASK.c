
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int uint64_t ;
struct TYPE_2__ {int (* remove_mapping ) (void*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static __inline uint64_t
FUNC_1(void *VAR_2, vm_paddr_t VAR_3, uint64_t VAR_4)
{

 if (VAR_1 != ((void*)0) && VAR_0)
  return ((*VAR_1->remove_mapping)(VAR_2, VAR_3, VAR_4));
 else
  return (VAR_4);
}
