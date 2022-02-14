
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {size_t len; scalar_t__* buffer; } ;


 int FUNC_0 (struct trace_seq*) ;

void FUNC_1(struct trace_seq *VAR_0)
{
 FUNC_0(VAR_0);


 VAR_0->buffer[VAR_0->len] = 0;
}
