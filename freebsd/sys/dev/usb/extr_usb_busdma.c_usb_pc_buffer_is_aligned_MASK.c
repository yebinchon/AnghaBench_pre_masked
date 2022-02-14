
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_frlength_t ;
typedef int uint8_t ;
struct usb_page_search {scalar_t__ length; int buffer; } ;
struct usb_page_cache {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct usb_page_cache*,scalar_t__,struct usb_page_search*) ;

uint8_t
FUNC_2(struct usb_page_cache *VAR_0, usb_frlength_t VAR_1,
    usb_frlength_t VAR_2, usb_frlength_t VAR_3)
{
 struct usb_page_search VAR_4;

 while (VAR_2 != 0) {

  FUNC_1(VAR_0, VAR_1, &VAR_4);

  if (VAR_4.length > VAR_2)
   VAR_4.length = VAR_2;
  if (FUNC_0(VAR_4.buffer) & VAR_3)
   return (0);
  if (VAR_4.length & VAR_3)
   return (0);

  VAR_1 += VAR_4.length;
  VAR_2 -= VAR_4.length;
 }
 return (1);
}
