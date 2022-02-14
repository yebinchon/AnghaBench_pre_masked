
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {scalar_t__ port_index; TYPE_1__ ddesc; } ;
typedef int ssize_t ;
typedef int port ;
typedef scalar_t__ phandle_t ;
typedef int compat ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (char*,int,char*,int,int) ;

__attribute__((used)) static phandle_t
FUNC_6(phandle_t VAR_0, struct usb_device *VAR_1)
{
 phandle_t VAR_2;
 ssize_t VAR_3;
 uint32_t VAR_4;
 char VAR_5[16];
 FUNC_5(VAR_5, sizeof(VAR_5), "usb%x,%x",
     FUNC_3(VAR_1->ddesc.idVendor), FUNC_3(VAR_1->ddesc.idProduct));
 for (VAR_2 = FUNC_0(VAR_0); VAR_2 != 0; VAR_2 = FUNC_2(VAR_2)) {
  if (!FUNC_4(VAR_2, VAR_5))
   continue;
  VAR_3 = FUNC_1(VAR_2, "reg", &VAR_4, sizeof(VAR_4));
  if (VAR_3 != sizeof(VAR_4))
   continue;
  if (VAR_4 == (VAR_1->port_index + 1))
   return (VAR_2);
 }
 return (-1);
}
