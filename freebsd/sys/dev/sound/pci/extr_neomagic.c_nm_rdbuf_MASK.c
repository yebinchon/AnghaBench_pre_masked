
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int buf; } ;
typedef int bus_space_tag_t ;
typedef int bus_space_handle_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct sc_info *VAR_0, int VAR_1, int VAR_2)
{
 bus_space_tag_t VAR_3 = FUNC_4(VAR_0->buf);
 bus_space_handle_t VAR_4 = FUNC_3(VAR_0->buf);

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
