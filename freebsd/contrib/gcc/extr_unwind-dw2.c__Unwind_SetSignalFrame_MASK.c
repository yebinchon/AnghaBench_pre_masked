
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_0 (struct _Unwind_Context *VAR_1, int VAR_2)
{
  if (VAR_2)
    VAR_1->flags |= VAR_0;
  else
    VAR_1->flags &= ~VAR_0;
}
