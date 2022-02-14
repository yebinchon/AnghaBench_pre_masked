
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bnxt_link_info {int link_speed; } ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static uint64_t
FUNC_2(struct bnxt_link_info *VAR_0)
{
 switch (VAR_0->link_speed) {
 case 137:
  return FUNC_1(100);
 case 134:
  return FUNC_0(1);
 case 131:
  return FUNC_0(2);
 case 130:
  return FUNC_1(2500);
 case 136:
  return FUNC_0(10);
 case 133:
  return FUNC_0(20);
 case 132:
  return FUNC_0(25);
 case 129:
  return FUNC_0(40);
 case 128:
  return FUNC_0(50);
 case 138:
  return FUNC_0(100);
 case 135:
  return FUNC_1(10);
 }
 return FUNC_0(100);
}
