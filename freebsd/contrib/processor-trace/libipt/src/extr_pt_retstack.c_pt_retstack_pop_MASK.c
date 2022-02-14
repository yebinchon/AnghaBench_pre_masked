
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct pt_retstack {int top; int bottom; int * stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_0(struct pt_retstack *VAR_3, uint64_t *VAR_4)
{
 uint8_t VAR_5;

 if (!VAR_3)
  return -VAR_1;

 VAR_5 = VAR_3->top;

 if (VAR_5 == VAR_3->bottom)
  return -VAR_2;

 VAR_5 = (!VAR_5 ? VAR_0 : VAR_5 - 1);

 VAR_3->top = VAR_5;

 if (VAR_4)
  *VAR_4 = VAR_3->stack[VAR_5];

 return 0;
}
