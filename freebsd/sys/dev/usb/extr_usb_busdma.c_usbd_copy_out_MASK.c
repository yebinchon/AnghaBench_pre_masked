
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usb_frlength_t ;
struct usb_page_search {scalar_t__ length; int buffer; } ;
struct usb_page_cache {int dummy; } ;


 void* FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 int FUNC_2 (struct usb_page_cache*,scalar_t__,struct usb_page_search*) ;

void
FUNC_3(struct usb_page_cache *VAR_0, usb_frlength_t VAR_1,
    void *VAR_2, usb_frlength_t VAR_3)
{
 struct usb_page_search VAR_4;

 while (VAR_3 != 0) {

  FUNC_2(VAR_0, VAR_1, &VAR_4);

  if (VAR_4.length > VAR_3) {
   VAR_4.length = VAR_3;
  }
  FUNC_1(VAR_2, VAR_4.buffer, VAR_4.length);

  VAR_1 += VAR_4.length;
  VAR_3 -= VAR_4.length;
  VAR_2 = FUNC_0(VAR_2, VAR_4.length);
 }
}
