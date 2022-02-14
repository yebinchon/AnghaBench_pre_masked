
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int len; int buffer_size; unsigned char* buffer; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*) ;

int FUNC_2(struct trace_seq *VAR_0, unsigned char VAR_1)
{
 FUNC_0(VAR_0);

 while (VAR_0->len >= (VAR_0->buffer_size - 1))
  FUNC_1(VAR_0);

 VAR_0->buffer[VAR_0->len++] = VAR_1;

 return 1;
}
