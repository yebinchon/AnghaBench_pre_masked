
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int buffer_size; int buffer; scalar_t__ readpos; scalar_t__ len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

void FUNC_1(struct trace_seq *VAR_1)
{
 VAR_1->len = 0;
 VAR_1->readpos = 0;
 VAR_1->buffer_size = VAR_0;
 VAR_1->buffer = FUNC_0(VAR_1->buffer_size);
}
