
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int match_flags; int idVendor; int idProduct; int bcdDevice_lo; int bcdDevice_hi; int bDeviceClass; int bInterfaceClass; } ;
struct module {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct usb_device_id*,unsigned int,int,unsigned char,unsigned char,struct module*) ;

__attribute__((used)) static void FUNC_2(struct usb_device_id *VAR_2, struct module *VAR_3)
{
 unsigned int VAR_4, VAR_5;
 unsigned char VAR_6, VAR_7;
 int VAR_8;

 VAR_2->match_flags = FUNC_0(VAR_2->match_flags);
 VAR_2->idVendor = FUNC_0(VAR_2->idVendor);
 VAR_2->idProduct = FUNC_0(VAR_2->idProduct);

 VAR_4 = VAR_2->match_flags & VAR_1 ?
  FUNC_0(VAR_2->bcdDevice_lo) : 0x0U;
 VAR_5 = VAR_2->match_flags & VAR_0 ?
  FUNC_0(VAR_2->bcdDevice_hi) : ~0x0U;





 if (!(VAR_2->idVendor | VAR_2->idProduct | VAR_2->bDeviceClass | VAR_2->bInterfaceClass))
  return;


 for (VAR_8 = sizeof(VAR_2->bcdDevice_lo) * 2 - 1; VAR_4 <= VAR_5; VAR_8--) {
  VAR_7 = VAR_4 & 0xf;
  VAR_6 = VAR_5 & 0xf;
  if (VAR_6 > 9)
   VAR_6 = 9;
  VAR_4 >>= 4;
  VAR_5 >>= 4;

  if (VAR_4 == VAR_5 || !VAR_8) {
   FUNC_1(VAR_2, VAR_4, VAR_8, VAR_7, VAR_6, VAR_3);
   break;
  }

  if (VAR_7 > 0)
   FUNC_1(VAR_2, VAR_4++, VAR_8, VAR_7, 9, VAR_3);

  if (VAR_6 < 9)
   FUNC_1(VAR_2, VAR_5--, VAR_8, 0, VAR_6, VAR_3);
 }
}
