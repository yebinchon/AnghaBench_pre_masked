
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct efi_fb {int fb_mask_red; int fb_mask_green; int fb_mask_blue; int fb_mask_reserved; } ;
struct TYPE_3__ {int RedMask; int GreenMask; int BlueMask; int ReservedMask; } ;
typedef TYPE_1__ EFI_PIXEL_BITMASK ;
typedef int EFI_GRAPHICS_PIXEL_FORMAT ;






__attribute__((used)) static int
FUNC_0(struct efi_fb *VAR_0, EFI_GRAPHICS_PIXEL_FORMAT VAR_1,
    EFI_PIXEL_BITMASK *VAR_2)
{
 int VAR_3;

 VAR_3 = 0;
 switch (VAR_1) {
 case 128:
  VAR_0->fb_mask_red = 0x000000ff;
  VAR_0->fb_mask_green = 0x0000ff00;
  VAR_0->fb_mask_blue = 0x00ff0000;
  VAR_0->fb_mask_reserved = 0xff000000;
  break;
 case 129:
  VAR_0->fb_mask_red = 0x00ff0000;
  VAR_0->fb_mask_green = 0x0000ff00;
  VAR_0->fb_mask_blue = 0x000000ff;
  VAR_0->fb_mask_reserved = 0xff000000;
  break;
 case 130:
  VAR_0->fb_mask_red = VAR_2->RedMask;
  VAR_0->fb_mask_green = VAR_2->GreenMask;
  VAR_0->fb_mask_blue = VAR_2->BlueMask;
  VAR_0->fb_mask_reserved = VAR_2->ReservedMask;
  break;
 default:
  VAR_3 = 1;
  break;
 }
 return (VAR_3);
}
