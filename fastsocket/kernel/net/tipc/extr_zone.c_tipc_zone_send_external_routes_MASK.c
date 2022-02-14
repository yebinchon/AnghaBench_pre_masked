
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct _zone {scalar_t__* clusters; int addr; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,size_t) ;
 size_t VAR_0 ;

void FUNC_2(struct _zone *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  if (VAR_1->clusters[VAR_3]) {
   if (FUNC_0(VAR_1->addr))
    continue;
   FUNC_1(VAR_1->clusters[VAR_3], VAR_2);
  }
 }
}
