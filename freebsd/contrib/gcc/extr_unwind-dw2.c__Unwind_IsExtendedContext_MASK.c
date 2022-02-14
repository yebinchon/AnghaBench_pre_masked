
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Unwind_Context {int flags; } ;
typedef int _Unwind_Word ;


 int VAR_0 ;

__attribute__((used)) static inline _Unwind_Word
FUNC_0 (struct _Unwind_Context *VAR_1)
{
  return VAR_1->flags & VAR_0;
}
