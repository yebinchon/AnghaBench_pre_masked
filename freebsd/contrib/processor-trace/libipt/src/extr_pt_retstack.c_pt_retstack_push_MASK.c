
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint64_t ;
struct pt_retstack {size_t top; size_t bottom; int * stack; } ;


 size_t VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct pt_retstack *VAR_2, uint64_t VAR_3)
{
 uint8_t VAR_4, VAR_5;

 if (!VAR_2)
  return -VAR_1;

 VAR_4 = VAR_2->top;
 VAR_5 = VAR_2->bottom;

 VAR_2->stack[VAR_4] = VAR_3;

 VAR_4 = (VAR_4 == VAR_0 ? 0 : VAR_4 + 1);

 if (VAR_5 == VAR_4)
  VAR_5 = (VAR_5 == VAR_0 ? 0 : VAR_5 + 1);

 VAR_2->top = VAR_4;
 VAR_2->bottom = VAR_5;

 return 0;
}
