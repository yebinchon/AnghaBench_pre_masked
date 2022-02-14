
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int last_router; int* routers; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_0 ;

u32 FUNC_4(struct tipc_node *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 if (!VAR_1)
  return 0;

 if (VAR_1->last_router < 0)
  return 0;
 VAR_3 = ((VAR_1->last_router + 1) * 32) - 1;


 VAR_4 = VAR_0;
 while (VAR_4 > VAR_3)
  VAR_4 >>= 1;
 VAR_5 = VAR_2 & VAR_4;
 VAR_6 = VAR_5;


 do {
  if (((VAR_1->routers[VAR_6 / 32]) >> (VAR_6 % 32)) & 1)
   break;
 } while (++VAR_6 <= VAR_3);
 if (VAR_6 > VAR_3) {
  VAR_6 = 1;
  do {
   if (((VAR_1->routers[VAR_6 / 32]) >> (VAR_6 % 32)) & 1)
    break;
  } while (++VAR_6 < VAR_5);
  FUNC_0(VAR_6 != VAR_5);
 }
 FUNC_0(VAR_6 && (VAR_6 <= VAR_3));
 return FUNC_3(FUNC_2(), FUNC_1(), VAR_6);
}
