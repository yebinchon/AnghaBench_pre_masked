
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int ssize_t ;
struct TYPE_2__ {int (* mmu_mapin ) (scalar_t__,size_t const) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int const,void*,size_t const) ;
 int FUNC_1 (scalar_t__,size_t const) ;

__attribute__((used)) static ssize_t
FUNC_2(const int VAR_1, vm_offset_t VAR_2, const size_t VAR_3)
{

 VAR_0->mmu_mapin(VAR_2, VAR_3);
 return (FUNC_0(VAR_1, (void *)VAR_2, VAR_3));
}
