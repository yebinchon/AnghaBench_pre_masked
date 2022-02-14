
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int len; void* buffer; } ;


 int VAR_0 ;

void *FUNC_0(struct trace_seq *VAR_1, size_t VAR_2)
{
 void *VAR_3;

 if (VAR_2 > ((VAR_0 - 1) - VAR_1->len))
  return ((void*)0);

 VAR_3 = VAR_1->buffer + VAR_1->len;
 VAR_1->len += VAR_2;

 return VAR_3;
}
