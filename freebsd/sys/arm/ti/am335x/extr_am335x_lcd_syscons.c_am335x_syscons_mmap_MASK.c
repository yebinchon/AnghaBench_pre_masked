
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
typedef int video_adapter_t ;
struct video_adapter_softc {int stride; int height; scalar_t__ fb_paddr; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_1, vm_ooffset_t VAR_2, vm_paddr_t *VAR_3,
    int VAR_4, vm_memattr_t *VAR_5)
{
 struct video_adapter_softc *VAR_6;

 VAR_6 = (struct video_adapter_softc *)VAR_1;





 if (VAR_2 < VAR_6->stride*VAR_6->height) {
  *VAR_3 = VAR_6->fb_paddr + VAR_2;
  return (0);
 }

 return (VAR_0);
}
