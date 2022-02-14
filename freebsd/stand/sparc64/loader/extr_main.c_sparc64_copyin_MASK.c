
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* mmu_mapin ) (scalar_t__,size_t) ;} ;


 int FUNC_0 (void*,void const*,size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (scalar_t__,size_t) ;

__attribute__((used)) static ssize_t
FUNC_2(const void *VAR_1, vm_offset_t VAR_2, size_t VAR_3)
{

 VAR_0->mmu_mapin(VAR_2, VAR_3);
 FUNC_0((void *)VAR_2, VAR_1, VAR_3);
 return (VAR_3);
}
