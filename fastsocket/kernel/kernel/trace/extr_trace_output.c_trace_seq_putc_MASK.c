
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int len; unsigned char* buffer; } ;


 int VAR_0 ;

int FUNC_0(struct trace_seq *VAR_1, unsigned char VAR_2)
{
 if (VAR_1->len >= (VAR_0 - 1))
  return 0;

 VAR_1->buffer[VAR_1->len++] = VAR_2;

 return 1;
}
