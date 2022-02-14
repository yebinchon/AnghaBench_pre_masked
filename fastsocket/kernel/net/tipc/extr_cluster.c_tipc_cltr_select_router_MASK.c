
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cluster {int highest_node; int * nodes; int addr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;

u32 FUNC_4(struct cluster *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_1->highest_node;
 u32 VAR_5;
 u32 VAR_6;

 FUNC_0(!FUNC_1(VAR_1->addr));
 if (!VAR_4)
  return 0;


 VAR_5 = VAR_0;
 while (VAR_5 > VAR_4)
  VAR_5 >>= 1;
 VAR_6 = VAR_2 & VAR_5;
 VAR_3 = VAR_6;


 do {
  if (FUNC_2(VAR_1->nodes[VAR_3]))
   break;
 } while (++VAR_3 <= VAR_4);
 if (VAR_3 > VAR_4) {
  VAR_3 = 1;
  do {
   if (FUNC_2(VAR_1->nodes[VAR_3]))
    break;
  } while (++VAR_3 < VAR_6);
  if (VAR_3 == VAR_6)
   return 0;
 }
 FUNC_0(VAR_3 <= VAR_4);
 return FUNC_3(VAR_1->nodes[VAR_3], VAR_2);
}
