
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct efi_fb {int fb_stride; int fb_width; int fb_height; int fb_size; int fb_addr; } ;
struct TYPE_6__ {int PixelInformation; int PixelFormat; int PixelsPerScanLine; int HorizontalResolution; int VerticalResolution; } ;
struct TYPE_5__ {int FrameBufferSize; int FrameBufferBase; } ;
typedef TYPE_1__ EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE ;
typedef TYPE_2__ EFI_GRAPHICS_OUTPUT_MODE_INFORMATION ;


 int FUNC_0 (struct efi_fb*,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct efi_fb *VAR_0, EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE *VAR_1,
    EFI_GRAPHICS_OUTPUT_MODE_INFORMATION *VAR_2)
{
 int VAR_3;

 VAR_0->fb_addr = VAR_1->FrameBufferBase;
 VAR_0->fb_size = VAR_1->FrameBufferSize;
 VAR_0->fb_height = VAR_2->VerticalResolution;
 VAR_0->fb_width = VAR_2->HorizontalResolution;
 VAR_0->fb_stride = VAR_2->PixelsPerScanLine;
 VAR_3 = FUNC_0(VAR_0, VAR_2->PixelFormat,
     &VAR_2->PixelInformation);
 return (VAR_3);
}
