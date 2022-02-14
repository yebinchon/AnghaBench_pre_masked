
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
typedef int uint8_t ;
struct vt_device {struct fb_info* vd_softc; } ;
struct fb_info {int fb_flags; scalar_t__ fb_size; scalar_t__ fb_pbase; int fb_memattr; scalar_t__ fb_vbase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;

int
FUNC_1(struct vt_device *VAR_5, vm_ooffset_t VAR_6, vm_paddr_t *VAR_7,
    int VAR_8, vm_memattr_t *VAR_9)
{
 struct fb_info *VAR_10;

 VAR_10 = VAR_5->vd_softc;

 if (VAR_10->fb_flags & VAR_3)
  return (VAR_1);

 if (VAR_6 >= 0 && VAR_6 < VAR_10->fb_size) {
  if (VAR_10->fb_pbase == 0) {
   *VAR_7 = FUNC_0((uint8_t *)VAR_10->fb_vbase + VAR_6);
  } else {
   *VAR_7 = VAR_10->fb_pbase + VAR_6;
   if (VAR_10->fb_flags & VAR_2)
    *VAR_9 = VAR_10->fb_memattr;




  }
  return (0);
 }

 return (VAR_0);
}
