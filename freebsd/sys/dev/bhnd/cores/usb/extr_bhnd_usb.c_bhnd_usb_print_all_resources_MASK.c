
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct bhnd_usb_devinfo {struct resource_list sdi_rl; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (struct resource_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct bhnd_usb_devinfo* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct bhnd_usb_devinfo *VAR_3;
 struct resource_list *VAR_4;
 int VAR_5;

 VAR_5 = 0;
 VAR_3 = FUNC_1(VAR_2);
 VAR_4 = &VAR_3->sdi_rl;

 if (FUNC_0(VAR_4))
  VAR_5 += FUNC_2(" at");

 VAR_5 += FUNC_3(VAR_4, "mem", VAR_1, "%jx");
 VAR_5 += FUNC_3(VAR_4, "irq", VAR_0, "%ld");

 return (VAR_5);
}
