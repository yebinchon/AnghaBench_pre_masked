
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int len; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int,void const*,size_t) ;

int FUNC_1(struct trace_seq *VAR_1, const void *VAR_2, size_t VAR_3)
{
 if (VAR_3 > ((VAR_0 - 1) - VAR_1->len))
  return 0;

 FUNC_0(VAR_1->buffer + VAR_1->len, VAR_2, VAR_3);
 VAR_1->len += VAR_3;

 return VAR_3;
}
