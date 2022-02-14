
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_page_search {int physaddr; struct ohci_ed* buffer; } ;
struct usb_page_cache {int dummy; } ;
struct ohci_ed {struct usb_page_cache* page_cache; void* ed_flags; void* ed_self; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_page_cache*,int ,struct usb_page_search*) ;

__attribute__((used)) static struct ohci_ed *
FUNC_2(struct usb_page_cache *VAR_1)
{
 struct usb_page_search VAR_2;
 struct ohci_ed *VAR_3;

 FUNC_1(VAR_1, 0, &VAR_2);

 VAR_3 = VAR_2.buffer;

 VAR_3->ed_self = FUNC_0(VAR_2.physaddr);
 VAR_3->ed_flags = FUNC_0(VAR_0);
 VAR_3->page_cache = VAR_1;

 return (VAR_3);
}
