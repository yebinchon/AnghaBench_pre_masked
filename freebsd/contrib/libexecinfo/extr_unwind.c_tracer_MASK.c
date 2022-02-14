
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_context {size_t n; size_t len; void** arr; } ;
struct _Unwind_Context {int dummy; } ;
typedef int _Unwind_Reason_Code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct _Unwind_Context*) ;

__attribute__((used)) static _Unwind_Reason_Code
FUNC_1(struct _Unwind_Context *VAR_2, void *VAR_3)
{
 struct tracer_context *VAR_4 = VAR_3;
 if (VAR_4->n == (size_t)~0) {

  VAR_4->n = 0;
  return 0;
 }
 if (VAR_4->n < VAR_4->len)
  VAR_4->arr[VAR_4->n++] = (void *)FUNC_0(VAR_2);
 else
  return VAR_0;
 return VAR_1;
}
