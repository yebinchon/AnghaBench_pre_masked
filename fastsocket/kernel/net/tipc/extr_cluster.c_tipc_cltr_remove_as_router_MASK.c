
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cluster {size_t highest_slave; size_t highest_node; scalar_t__* nodes; int addr; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (scalar_t__,size_t) ;

void FUNC_3(struct cluster *VAR_1, u32 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4;
 u32 VAR_5;

 if (FUNC_1(VAR_2))
  return;

 if (FUNC_0(VAR_1->addr)) {
  VAR_3 = VAR_0;
  VAR_4 = VAR_1->highest_slave;
 } else {
  VAR_3 = 1;
  VAR_4 = VAR_1->highest_node;
 }

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++) {
  if (VAR_1->nodes[VAR_5]) {
   FUNC_2(VAR_1->nodes[VAR_5], VAR_2);
  }
 }
}
