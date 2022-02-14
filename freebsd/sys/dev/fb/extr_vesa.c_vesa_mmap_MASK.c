
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
struct TYPE_7__ {scalar_t__ vi_buffer; int vi_flags; int vi_window; } ;
struct TYPE_8__ {scalar_t__ va_window_size; TYPE_1__ va_info; } ;
typedef TYPE_2__ video_adapter_t ;
struct TYPE_9__ {int (* mmap ) (TYPE_2__*,scalar_t__,scalar_t__*,int,int *) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_6__* VAR_3 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__,scalar_t__*,int,int *) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int
FUNC_2(video_adapter_t *VAR_5, vm_ooffset_t VAR_6, vm_paddr_t *VAR_7,
   int VAR_8, vm_memattr_t *VAR_9)
{






 if ((VAR_5 == VAR_4) &&
     (VAR_5->va_info.vi_flags & VAR_2) != 0) {


  if (VAR_6 > VAR_5->va_window_size - VAR_0)
   return (-1);
  *VAR_7 = VAR_5->va_info.vi_buffer + VAR_6;



  return (0);
 }
 return ((*VAR_3->mmap)(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9));
}
