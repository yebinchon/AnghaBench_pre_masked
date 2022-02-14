
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct efi_fb {int fb_mask_red; int fb_mask_green; int fb_mask_blue; int fb_mask_reserved; } ;



__attribute__((used)) static u_int
FUNC_0(struct efi_fb *VAR_0)
{
 uint32_t VAR_1;
 u_int VAR_2;

 VAR_1 = VAR_0->fb_mask_red | VAR_0->fb_mask_green |
     VAR_0->fb_mask_blue | VAR_0->fb_mask_reserved;
 if (VAR_1 == 0)
  return (0);
 for (VAR_2 = 1; VAR_1 != 1; VAR_2++)
  VAR_1 >>= 1;
 return (VAR_2);
}
