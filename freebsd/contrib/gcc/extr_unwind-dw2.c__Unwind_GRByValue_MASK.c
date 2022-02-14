
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int* by_value; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline int
FUNC_1 (struct _Unwind_Context *VAR_0, int VAR_1)
{
  VAR_1 = FUNC_0 (VAR_1);
  return VAR_0->by_value[VAR_1];
}
