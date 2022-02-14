
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int nodename; struct pcifront_device* data; } ;
struct pcifront_device {int dummy; } ;
typedef int XenbusState ;


 int FUNC_0 (char*,int ) ;



 int FUNC_1 (struct pcifront_device*) ;
 int FUNC_2 (struct pcifront_device*) ;

__attribute__((used)) static void
FUNC_3(struct xenbus_device *VAR_0,
       XenbusState VAR_1)
{
 struct pcifront_device *VAR_2 = VAR_0->data;

 switch (VAR_1) {
 case 129:
  FUNC_0("backend closing (%s)\n", VAR_0->nodename);
  FUNC_2(VAR_2);
  break;

 case 130:
  FUNC_0("backend closed (%s)\n", VAR_0->nodename);
  FUNC_2(VAR_2);
  break;

 case 128:
  FUNC_0("backend connected (%s)\n", VAR_0->nodename);
  FUNC_1(VAR_2);
  break;

 default:
  break;
 }
}
