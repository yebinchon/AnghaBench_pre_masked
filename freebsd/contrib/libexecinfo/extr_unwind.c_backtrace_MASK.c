
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracer_context {void** arr; size_t len; size_t n; } ;


 int FUNC_0 (int ,struct tracer_context*) ;
 int VAR_0 ;

size_t
FUNC_1(void **VAR_1, size_t VAR_2)
{
 struct tracer_context VAR_3;

 VAR_3.arr = VAR_1;
 VAR_3.len = VAR_2;
 VAR_3.n = (size_t)~0;

 FUNC_0(VAR_0, &VAR_3);
 if (VAR_3.n != (size_t)~0 && VAR_3.n > 0)
  VAR_3.arr[--VAR_3.n] = ((void*)0);

 return VAR_3.n;
}
