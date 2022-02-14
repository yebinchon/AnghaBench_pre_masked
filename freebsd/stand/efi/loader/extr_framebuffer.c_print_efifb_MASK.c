
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int u_int ;
struct efi_fb {int fb_width; int fb_height; int fb_stride; int fb_mask_red; int fb_mask_green; int fb_mask_blue; scalar_t__ fb_size; scalar_t__ fb_addr; } ;


 int FUNC_0 (struct efi_fb*) ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static void
FUNC_2(int VAR_0, struct efi_fb *VAR_1, int VAR_2)
{
 u_int VAR_3;

 if (VAR_0 >= 0)
  FUNC_1("mode %d: ", VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 FUNC_1("%ux%ux%u, stride=%u", VAR_1->fb_width, VAR_1->fb_height,
     VAR_3, VAR_1->fb_stride);
 if (VAR_2) {
  FUNC_1("\n    frame buffer: address=%jx, size=%jx",
      (uintmax_t)VAR_1->fb_addr, (uintmax_t)VAR_1->fb_size);
  FUNC_1("\n    color mask: R=%08x, G=%08x, B=%08x\n",
      VAR_1->fb_mask_red, VAR_1->fb_mask_green,
      VAR_1->fb_mask_blue);
 }
}
