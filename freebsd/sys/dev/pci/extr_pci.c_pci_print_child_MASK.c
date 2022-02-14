
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct pci_devinfo {struct resource_list resources; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 struct pci_devinfo* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char*,int,...) ;
 scalar_t__ FUNC_8 (struct resource_list*,char*,int ,char*) ;

int
FUNC_9(device_t VAR_3, device_t VAR_4)
{
 struct pci_devinfo *VAR_5;
 struct resource_list *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_4(VAR_4);
 VAR_6 = &VAR_5->resources;

 VAR_7 += FUNC_2(VAR_3, VAR_4);

 VAR_7 += FUNC_8(VAR_6, "port", VAR_0, "%#jx");
 VAR_7 += FUNC_8(VAR_6, "mem", VAR_2, "%#jx");
 VAR_7 += FUNC_8(VAR_6, "irq", VAR_1, "%jd");
 if (FUNC_3(VAR_3))
  VAR_7 += FUNC_7(" flags %#x", FUNC_3(VAR_3));

 VAR_7 += FUNC_7(" at device %d.%d", FUNC_6(VAR_4),
     FUNC_5(VAR_4));

 VAR_7 += FUNC_0(VAR_3, VAR_4);
 VAR_7 += FUNC_1(VAR_3, VAR_4);

 return (VAR_7);
}
