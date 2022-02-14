
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_page_search {int physaddr; struct uhci_td* buffer; } ;
struct usb_page_cache {int dummy; } ;
struct uhci_td {int td_self; struct usb_page_cache* page_cache; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct usb_page_cache*,int ,struct usb_page_search*) ;

__attribute__((used)) static struct uhci_td *
FUNC_2(struct usb_page_cache *VAR_1)
{
 struct usb_page_search VAR_2;
 struct uhci_td *VAR_3;

 FUNC_1(VAR_1, 0, &VAR_2);

 VAR_3 = VAR_2.buffer;

 VAR_3->td_self =
     FUNC_0(VAR_2.physaddr) |
     FUNC_0(VAR_0);

 VAR_3->page_cache = VAR_1;

 return (VAR_3);
}
