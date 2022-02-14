
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct nexus_device {struct resource_list nx_resources; } ;
typedef int device_t ;


 struct nexus_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct resource_list*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct nexus_device *VAR_3 = FUNC_0(VAR_2);
 struct resource_list *VAR_4 = &VAR_3->nx_resources;
 int VAR_5 = 0;

 if (FUNC_1(VAR_4))
  VAR_5 += FUNC_2(" at");

 VAR_5 += FUNC_3(VAR_4, "mem", VAR_1, "%#jx");
 VAR_5 += FUNC_3(VAR_4, "irq", VAR_0, "%jd");

 return (VAR_5);
}
