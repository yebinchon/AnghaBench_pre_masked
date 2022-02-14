
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct TYPE_4__ {int vi_flags; scalar_t__ vi_window; } ;
struct TYPE_5__ {scalar_t__ va_window_size; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
typedef int uintmax_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_2, vm_ooffset_t VAR_3, vm_paddr_t *VAR_4,
         int VAR_5, vm_memattr_t *VAR_6)
{
    if (VAR_2->va_info.vi_flags & VAR_1)
 return -1;







    if (VAR_3 > VAR_2->va_window_size - VAR_0)
 return -1;

    *VAR_4 = VAR_2->va_info.vi_window + VAR_3;
    return 0;
}
