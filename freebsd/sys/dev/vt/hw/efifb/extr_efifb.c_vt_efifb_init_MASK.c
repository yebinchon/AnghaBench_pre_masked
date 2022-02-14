
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_device {struct fb_info* vd_softc; } ;
struct fb_info {int fb_height; int fb_bpp; int fb_stride; int fb_size; intptr_t fb_vbase; int fb_pbase; int fb_cmap; int fb_depth; int fb_width; } ;
struct efi_fb {int fb_height; int fb_mask_red; int fb_mask_green; int fb_mask_blue; int fb_mask_reserved; int fb_stride; int fb_addr; int fb_width; } ;
typedef int * caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int * FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct vt_device*) ;
 int FUNC_7 (int ,int ,int,scalar_t__,int,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct vt_device *VAR_8)
{
 struct fb_info *VAR_9;
 struct efi_fb *VAR_10;
 caddr_t VAR_11;

 VAR_9 = VAR_8->vd_softc;
 if (VAR_9 == ((void*)0))
  VAR_9 = VAR_8->vd_softc = (void *)&VAR_7;

 VAR_11 = FUNC_3("elf kernel");
 if (VAR_11 == ((void*)0))
  VAR_11 = FUNC_3("elf64 kernel");
 VAR_10 = (struct efi_fb *)FUNC_4(VAR_11,
     VAR_4 | VAR_3);
 if (VAR_10 == ((void*)0))
  return (VAR_0);

 VAR_9->fb_height = VAR_10->fb_height;
 VAR_9->fb_width = VAR_10->fb_width;

 VAR_9->fb_depth = FUNC_1(VAR_10->fb_mask_red | VAR_10->fb_mask_green |
     VAR_10->fb_mask_blue | VAR_10->fb_mask_reserved);

 VAR_9->fb_bpp = FUNC_5(VAR_9->fb_depth, VAR_5);


 VAR_9->fb_stride = VAR_10->fb_stride * (VAR_9->fb_bpp / VAR_5);

 FUNC_7(VAR_9->fb_cmap, VAR_2,
     VAR_10->fb_mask_red, FUNC_0(VAR_10->fb_mask_red) - 1,
     VAR_10->fb_mask_green, FUNC_0(VAR_10->fb_mask_green) - 1,
     VAR_10->fb_mask_blue, FUNC_0(VAR_10->fb_mask_blue) - 1);

 VAR_9->fb_size = VAR_9->fb_height * VAR_9->fb_stride;
 VAR_9->fb_pbase = VAR_10->fb_addr;
 VAR_9->fb_vbase = (intptr_t)FUNC_2(VAR_9->fb_pbase,
     VAR_9->fb_size, VAR_6);

 FUNC_6(VAR_8);

 return (VAR_1);
}
