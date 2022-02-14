
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_frlength_t ;
struct usb_page_search {scalar_t__ length; int buffer; } ;
struct usb_page_cache {int dummy; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct usb_page_cache*,scalar_t__,struct usb_page_search*) ;

void
FUNC_2(struct usb_page_cache *VAR_0, usb_frlength_t VAR_1,
    usb_frlength_t VAR_2)
{
 struct usb_page_search VAR_3;

 while (VAR_2 != 0) {

  FUNC_1(VAR_0, VAR_1, &VAR_3);

  if (VAR_3.length > VAR_2) {
   VAR_3.length = VAR_2;
  }
  FUNC_0(VAR_3.buffer, 0, VAR_3.length);

  VAR_1 += VAR_3.length;
  VAR_2 -= VAR_3.length;
 }
}
