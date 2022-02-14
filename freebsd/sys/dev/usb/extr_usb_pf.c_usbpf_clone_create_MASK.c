
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int parent; struct ifnet* ifp; } ;
struct ifnet {int if_dunit; int if_flags; int if_ioctl; int if_dname; struct usb_bus* if_softc; int if_xname; } ;
struct if_clone {int dummy; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ifnet*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct ifnet* FUNC_2 (int ) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct if_clone*,int*) ;
 int FUNC_5 (struct if_clone*,int) ;
 int FUNC_6 (char*,int*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,char*,int) ;
 struct usb_bus* FUNC_9 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_10(struct if_clone *VAR_8, char *VAR_9, size_t VAR_10, caddr_t VAR_11)
{
 int VAR_12;
 int VAR_13;
 struct ifnet *VAR_14;
 struct usb_bus *VAR_15;

 VAR_12 = FUNC_6(VAR_9, &VAR_13);
 if (VAR_12)
  return (VAR_12);
  if (VAR_13 < 0)
  return (VAR_1);

 VAR_15 = FUNC_9(VAR_9);
 if (VAR_15 == ((void*)0))
  return (1);
 if (VAR_15->ifp != ((void*)0))
  return (1);

 VAR_12 = FUNC_4(VAR_8, &VAR_13);
 if (VAR_12) {
  FUNC_1(VAR_15->parent, "usbpf: Could not allocate "
      "instance\n");
  return (VAR_12);
 }
 VAR_14 = VAR_15->ifp = FUNC_2(VAR_4);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_8, VAR_13);
  FUNC_1(VAR_15->parent, "usbpf: Could not allocate "
      "instance\n");
  return (VAR_2);
 }
 FUNC_8(VAR_14->if_xname, VAR_9, sizeof(VAR_14->if_xname));
 VAR_14->if_softc = VAR_15;
 VAR_14->if_dname = VAR_7;
 VAR_14->if_dunit = VAR_13;
 VAR_14->if_ioctl = VAR_6;
 FUNC_3(VAR_14);
 VAR_14->if_flags |= VAR_3;
 FUNC_7(VAR_14);





 FUNC_0(VAR_14, VAR_0, VAR_5);

 return (0);
}
