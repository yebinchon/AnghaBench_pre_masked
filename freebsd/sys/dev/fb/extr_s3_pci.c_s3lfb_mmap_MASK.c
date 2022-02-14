
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
typedef int video_adapter_t ;
struct TYPE_2__ {int (* mmap ) (int *,int ,int *,int,int *) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int *,int ,int *,int,int *) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t *VAR_3,
   int VAR_4, vm_memattr_t *VAR_5)
{
 return (*VAR_0->mmap)(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
