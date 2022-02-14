
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct resource*) ;
 int FUNC_4 (struct resource*) ;

__attribute__((used)) static int
FUNC_5(struct resource *VAR_0, int VAR_1, int VAR_2)
{
 bus_space_tag_t VAR_3 = FUNC_4(VAR_0);
 bus_space_handle_t VAR_4 = FUNC_3(VAR_0);

 switch (VAR_2) {
 case 1:
  return FUNC_0(VAR_3, VAR_4, VAR_1);
 case 2:
  return FUNC_1(VAR_3, VAR_4, VAR_1);
 case 4:
  return FUNC_2(VAR_3, VAR_4, VAR_1);
 default:
  return 0xffffffff;
 }
}
