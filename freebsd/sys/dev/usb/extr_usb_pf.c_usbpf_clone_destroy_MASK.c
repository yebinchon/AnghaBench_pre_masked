
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * ifp; } ;
struct ifnet {int if_dunit; struct usb_bus* if_softc; } ;
struct if_clone {int dummy; } ;


 int FUNC_0 (struct usb_bus*) ;
 int FUNC_1 (struct usb_bus*) ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct if_clone*,int) ;

__attribute__((used)) static int
FUNC_6(struct if_clone *VAR_0, struct ifnet *VAR_1)
{
 struct usb_bus *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->if_softc;
 VAR_3 = VAR_1->if_dunit;





 FUNC_0(VAR_2);
 VAR_2->ifp = ((void*)0);
 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);
 FUNC_4(VAR_1);
 FUNC_5(VAR_0, VAR_3);

 return (0);
}
