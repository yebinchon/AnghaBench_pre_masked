
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef int vm_memattr_t ;
typedef int uint8_t ;
struct fb_info {int fb_flags; scalar_t__ fb_size; scalar_t__ fb_pbase; int fb_memattr; scalar_t__ fb_vbase; } ;
struct cdev {struct fb_info* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(struct cdev *VAR_4, vm_ooffset_t VAR_5, vm_paddr_t *VAR_6, int VAR_7,
    vm_memattr_t *VAR_8)
{
 struct fb_info *VAR_9;

 VAR_9 = VAR_4->si_drv1;

 if (VAR_9->fb_flags & VAR_3)
  return (VAR_1);

 if (VAR_5 >= 0 && VAR_5 < VAR_9->fb_size) {
  if (VAR_9->fb_pbase == 0)
   *VAR_6 = FUNC_0((uint8_t *)VAR_9->fb_vbase + VAR_5);
  else
   *VAR_6 = VAR_9->fb_pbase + VAR_5;
  if (VAR_9->fb_flags & VAR_2)
   *VAR_8 = VAR_9->fb_memattr;
  return (0);
 }
 return (VAR_0);
}
