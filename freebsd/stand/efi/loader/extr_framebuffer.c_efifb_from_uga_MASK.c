
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct efi_fb {int fb_height; int fb_width; int fb_addr; int fb_size; int fb_stride; } ;
typedef int ssize_t ;
struct TYPE_5__ {int (* GetMode ) (TYPE_1__*,int*,int*,int*,int*) ;} ;
typedef TYPE_1__ EFI_UGA_DRAW_PROTOCOL ;
typedef int EFI_STATUS ;
typedef int EFI_PCI_IO_PROTOCOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct efi_fb*,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int,int *,int,int) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,int*,int*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*) ;
 void* FUNC_8 (char*,char**,int ) ;
 int FUNC_9 (TYPE_1__*,int*,int*,int*,int*) ;

__attribute__((used)) static int
FUNC_10(struct efi_fb *VAR_1, EFI_UGA_DRAW_PROTOCOL *VAR_2)
{
 EFI_PCI_IO_PROTOCOL *VAR_3;
 char *VAR_4, *VAR_5;
 EFI_STATUS VAR_6;
 ssize_t VAR_7;
 uint64_t VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14;

 VAR_6 = VAR_2->GetMode(VAR_2, &VAR_9, &VAR_10, &VAR_13, &VAR_14);
 if (FUNC_0(VAR_6))
  return (1);
 VAR_1->fb_height = VAR_10;
 VAR_1->fb_width = VAR_9;

 if (VAR_1->fb_height == 0 || VAR_1->fb_width == 0)
  return (1);


 FUNC_1(VAR_1, VAR_0,
     ((void*)0));


 VAR_3 = FUNC_3();


 VAR_6 = FUNC_4(VAR_3, &VAR_1->fb_addr,
     &VAR_1->fb_size);
 if (FUNC_0(VAR_6)) {
  VAR_1->fb_addr = 0;
  VAR_1->fb_size = 0;
 }
 VAR_7 = -1;
 VAR_4 = FUNC_5("smbios.system.maker");
 if (VAR_4 != ((void*)0) && !FUNC_7(VAR_4, "Apple Inc.")) {
  VAR_4 = FUNC_5("smbios.system.product");
  if (VAR_4 != ((void*)0) && !FUNC_7(VAR_4, "iMac7,1")) {

   VAR_9 = 1680;
   VAR_10 = 1050;
   VAR_8 = 0xc0000000;

   VAR_7 = 0x10000;
   VAR_11 = 1728;
  } else if (VAR_4 != ((void*)0) && !FUNC_7(VAR_4, "MacBook3,1")) {

   VAR_9 = 1280;
   VAR_10 = 800;
   VAR_8 = 0xc0000000;

   VAR_7 = 0x0;
   VAR_11 = 2048;
  }
 }





 if (VAR_7 >= 0 && VAR_1->fb_width == VAR_9 &&
     VAR_1->fb_height == VAR_10 && VAR_1->fb_addr == VAR_8) {
  VAR_1->fb_addr += VAR_7;
  VAR_1->fb_size -= VAR_7;
  VAR_1->fb_stride = VAR_11;
  return (0);
 } else if (VAR_7 >= 0) {
  FUNC_6("Hardware make/model known, but graphics not "
      "as expected.\n");
  FUNC_6("Console may not work!\n");
 }





 VAR_1->fb_stride = VAR_1->fb_width;
 do {
  VAR_12 = VAR_1->fb_stride & (VAR_1->fb_stride - 1);
  if (VAR_12) {
   VAR_1->fb_stride |= (VAR_12 - 1);
   VAR_1->fb_stride++;
  }
 } while (VAR_12);

 VAR_4 = FUNC_5("hw.efifb.address");
 if (VAR_4 == ((void*)0)) {
  if (VAR_1->fb_addr == 0) {
   FUNC_6("Please set hw.efifb.address and "
       "hw.efifb.stride.\n");
   return (1);
  }
  VAR_7 = FUNC_2(VAR_2, 0, VAR_3, VAR_1->fb_addr,
      VAR_1->fb_size >> 8);
  if (VAR_7 == -1) {
   FUNC_6("Unable to reliably detect frame buffer.\n");
  } else if (VAR_7 > 0) {
   VAR_1->fb_addr += VAR_7;
   VAR_1->fb_size -= VAR_7;
  }
 } else {
  VAR_7 = 0;
  VAR_1->fb_size = VAR_1->fb_height * VAR_1->fb_stride * 4;
  VAR_1->fb_addr = FUNC_8(VAR_4, &VAR_5, 0);
  if (*VAR_5 != '\0')
   return (1);
 }

 VAR_4 = FUNC_5("hw.efifb.stride");
 if (VAR_4 == ((void*)0)) {
  if (VAR_3 != ((void*)0) && VAR_7 != -1) {

   VAR_7 = FUNC_2(VAR_2, 1, VAR_3,
       VAR_1->fb_addr, VAR_9 * 8);
   if (VAR_7 != -1)
    VAR_1->fb_stride = VAR_7 >> 2;
  } else {
   FUNC_6("Unable to reliably detect the stride.\n");
  }
 } else {
  VAR_1->fb_stride = FUNC_8(VAR_4, &VAR_5, 0);
  if (*VAR_5 != '\0')
   return (1);
 }





 VAR_1->fb_size = VAR_1->fb_height * VAR_1->fb_stride * 4;
 return (0);
}
