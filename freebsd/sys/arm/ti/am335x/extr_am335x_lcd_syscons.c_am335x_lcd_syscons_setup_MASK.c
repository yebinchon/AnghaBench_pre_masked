
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int vm_offset_t ;
struct video_adapter_softc {int depth; int stride; int width; int height; int fb_size; int va; int fb_paddr; int fb_addr; } ;
struct panel_info {int bpp; int panel_width; int panel_height; } ;


 int FUNC_0 (int *) ;
 struct video_adapter_softc VAR_0 ;

int FUNC_1(vm_offset_t VAR_1, vm_paddr_t VAR_2,
    struct panel_info *VAR_3)
{
 struct video_adapter_softc *VAR_4 = &VAR_0;

 VAR_4->fb_addr = VAR_1;
 VAR_4->fb_paddr = VAR_2;
 VAR_4->depth = VAR_3->bpp;
 VAR_4->stride = VAR_3->bpp*VAR_3->panel_width/8;

 VAR_4->width = VAR_3->panel_width;
 VAR_4->height = VAR_3->panel_height;
 VAR_4->fb_size = VAR_4->width * VAR_4->height
     * VAR_4->depth/8;
 FUNC_0(&VAR_4->va);

 return (0);
}
