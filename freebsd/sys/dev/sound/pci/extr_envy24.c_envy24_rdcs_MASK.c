
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {int csh; int cst; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_3(struct sc_info *VAR_0, int VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 1:
  return FUNC_0(VAR_0->cst, VAR_0->csh, VAR_1);
 case 2:
  return FUNC_1(VAR_0->cst, VAR_0->csh, VAR_1);
 case 4:
  return FUNC_2(VAR_0->cst, VAR_0->csh, VAR_1);
 default:
  return 0xffffffff;
 }
}
