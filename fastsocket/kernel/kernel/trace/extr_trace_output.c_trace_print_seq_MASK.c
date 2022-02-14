
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int len; int buffer; } ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,int ,int) ;
 int FUNC_1 (struct trace_seq*) ;

void FUNC_2(struct seq_file *VAR_1, struct trace_seq *VAR_2)
{
 int VAR_3 = VAR_2->len >= VAR_0 ? VAR_0 - 1 : VAR_2->len;

 FUNC_0(VAR_1, VAR_2->buffer, VAR_3);

 FUNC_1(VAR_2);
}
