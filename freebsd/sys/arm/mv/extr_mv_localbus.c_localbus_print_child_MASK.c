
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct localbus_devinfo {struct resource_list di_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct localbus_devinfo* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, device_t VAR_3)
{
 struct localbus_devinfo *VAR_4;
 struct resource_list *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = &VAR_4->di_res;

 VAR_6 = 0;
 VAR_6 += FUNC_1(VAR_2, VAR_3);
 VAR_6 += FUNC_3(VAR_5, "mem", VAR_1, "%#jx");
 VAR_6 += FUNC_3(VAR_5, "irq", VAR_0, "%jd");
 VAR_6 += FUNC_0(VAR_2, VAR_3);

 return (VAR_6);
}
