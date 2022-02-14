
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int sh; int st; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;

__attribute__((used)) static u_int32_t
FUNC_5(struct sc_info *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 1:
  return FUNC_1(VAR_0->st, VAR_0->sh, VAR_1);
 case 2:
  return FUNC_2(VAR_0->st, VAR_0->sh, VAR_1);
 case 4:
  return FUNC_3(VAR_0->st, VAR_0->sh, VAR_1);
 default:
  FUNC_0(FUNC_4("cmi_rd: failed 0x%04x %d\n", VAR_1, VAR_2));
  return 0xFFFFFFFF;
 }
}
