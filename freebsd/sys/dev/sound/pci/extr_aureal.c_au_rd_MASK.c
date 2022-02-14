
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct au_info {int * sh; int * st; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static u_int32_t
FUNC_3(struct au_info *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 switch(VAR_3) {
 case 1:
  return FUNC_0(VAR_0->st[VAR_1], VAR_0->sh[VAR_1], VAR_2);
 case 2:
  return FUNC_1(VAR_0->st[VAR_1], VAR_0->sh[VAR_1], VAR_2);
 case 4:
  return FUNC_2(VAR_0->st[VAR_1], VAR_0->sh[VAR_1], VAR_2);
 default:
  return 0xffffffff;
 }
}
