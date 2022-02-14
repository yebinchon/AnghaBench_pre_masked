
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_list {int dummy; } ;
struct gic_v3_ofw_devinfo {struct resource_list di_rl; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct gic_v3_ofw_devinfo* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct resource_list*,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2)
{
 struct gic_v3_ofw_devinfo *VAR_3 = FUNC_2(VAR_2);
 struct resource_list *VAR_4 = &VAR_3->di_rl;
 int VAR_5 = 0;

 VAR_5 += FUNC_1(VAR_1, VAR_2);
 VAR_5 += FUNC_3(VAR_4, "mem", VAR_0, "%#jx");
 VAR_5 += FUNC_0(VAR_1, VAR_2);

 return (VAR_5);
}
