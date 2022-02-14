
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct fm801_info {int sh; int st; } ;


 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct fm801_info *VAR_0, int VAR_1, u_int32_t VAR_2, int VAR_3)
{

 switch(VAR_3) {
 case 1:
  FUNC_0(VAR_0->st, VAR_0->sh, VAR_1, VAR_2);
  break;
 case 2:
  FUNC_1(VAR_0->st, VAR_0->sh, VAR_1, VAR_2);
  break;
 case 4:
  FUNC_2(VAR_0->st, VAR_0->sh, VAR_1, VAR_2);
  break;
 }
}
