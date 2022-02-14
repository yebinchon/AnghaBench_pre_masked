
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int parent; int * ifp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

void
FUNC_2(struct usb_bus *VAR_2)
{

 if (VAR_2->ifp != ((void*)0))
  FUNC_1(VAR_1, VAR_2->ifp);
 if (VAR_0)
  FUNC_0(VAR_2->parent, "usbpf: Detached\n");
}
