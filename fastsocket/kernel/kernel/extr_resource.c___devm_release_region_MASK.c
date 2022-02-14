
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct region_devres {int member_2; int member_1; struct resource* member_0; } ;
struct device {int dummy; } ;
typedef int resource_size_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct resource*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,int ,int ,struct region_devres*) ;

void FUNC_3(struct device *VAR_2, struct resource *VAR_3,
      resource_size_t VAR_4, resource_size_t VAR_5)
{
 struct region_devres VAR_6 = { VAR_3, VAR_4, VAR_5 };

 FUNC_1(VAR_3, VAR_4, VAR_5);
 FUNC_0(FUNC_2(VAR_2, VAR_1, VAR_0,
          &VAR_6));
}
