
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {void** reg; scalar_t__* by_value; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct _Unwind_Context*) ;

__attribute__((used)) static inline void
FUNC_2 (struct _Unwind_Context *VAR_0, int VAR_1, void *VAR_2)
{
  VAR_1 = FUNC_0 (VAR_1);
  if (FUNC_1 (VAR_0))
    VAR_0->by_value[VAR_1] = 0;
  VAR_0->reg[VAR_1] = VAR_2;
}
