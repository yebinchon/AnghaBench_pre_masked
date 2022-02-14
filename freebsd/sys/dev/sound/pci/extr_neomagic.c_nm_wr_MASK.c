
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int reg; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct sc_info *VAR_0, int VAR_1, u_int32_t VAR_2, int VAR_3)
{
 bus_space_tag_t VAR_4 = FUNC_4(VAR_0->reg);
 bus_space_handle_t VAR_5 = FUNC_3(VAR_0->reg);

 switch (VAR_3) {
 case 1:
  FUNC_0(VAR_4, VAR_5, VAR_1, VAR_2);
  break;
 case 2:
  FUNC_1(VAR_4, VAR_5, VAR_1, VAR_2);
  break;
 case 4:
  FUNC_2(VAR_4, VAR_5, VAR_1, VAR_2);
  break;
 }
}
