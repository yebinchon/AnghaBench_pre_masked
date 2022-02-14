
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* usb_size_t ;
typedef void* usb_frlength_t ;
struct usb_page_search {void* physaddr; void* length; void* buffer; } ;
struct usb_page_cache {void* page_offset_buf; scalar_t__ buffer; scalar_t__ ismultiseg; struct usb_page* page_start; } ;
struct usb_page {void* physaddr; scalar_t__ buffer; } ;


 void* FUNC_0 (scalar_t__,void*) ;
 void* VAR_0 ;

void
FUNC_1(struct usb_page_cache *VAR_1, usb_frlength_t VAR_2,
    struct usb_page_search *VAR_3)
{
 VAR_3->buffer = FUNC_0(VAR_1->buffer, VAR_2);
 VAR_3->length = (usb_size_t)-1;



}
