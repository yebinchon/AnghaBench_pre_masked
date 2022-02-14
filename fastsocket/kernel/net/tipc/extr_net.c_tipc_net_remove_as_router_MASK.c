
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int * zones; } ;


 size_t VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ,size_t) ;

void FUNC_1(u32 VAR_2)
{
 u32 VAR_3;

 for (VAR_3 = 1; VAR_3 <= VAR_0; VAR_3++) {
  if (!VAR_1.zones[VAR_3])
   continue;
  FUNC_0(VAR_1.zones[VAR_3], VAR_2);
 }
}
