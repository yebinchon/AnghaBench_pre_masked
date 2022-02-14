
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {int * ifp; } ;
struct if_clone {int dummy; } ;


 struct usb_bus* FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1(struct if_clone *VAR_0, const char *VAR_1)
{
 struct usb_bus *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (0);
 if (VAR_2->ifp != ((void*)0))
  return (0);

 return (1);
}
