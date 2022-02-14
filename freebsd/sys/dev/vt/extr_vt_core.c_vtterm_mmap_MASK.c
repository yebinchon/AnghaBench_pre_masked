
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct vt_window {struct vt_device* vw_device; } ;
struct vt_device {TYPE_1__* vd_driver; } ;
struct terminal {struct vt_window* tm_softc; } ;
struct TYPE_2__ {int (* vd_fb_mmap ) (struct vt_device*,int ,int *,int,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct vt_device*,int ,int *,int,int *) ;

__attribute__((used)) static int
FUNC_1(struct terminal *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t * VAR_3,
    int VAR_4, vm_memattr_t *VAR_5)
{
 struct vt_window *VAR_6 = VAR_1->tm_softc;
 struct vt_device *VAR_7 = VAR_6->vw_device;

 if (VAR_7->vd_driver->vd_fb_mmap)
  return (VAR_7->vd_driver->vd_fb_mmap(VAR_7, VAR_2, VAR_3, VAR_4,
      VAR_5));

 return (VAR_0);
}
