
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {char* len; int buffer; } ;


 int FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (char*,char*,int ) ;

int FUNC_2(struct trace_seq *VAR_0)
{
 FUNC_0(VAR_0);
 return FUNC_1("%.*s", VAR_0->len, VAR_0->buffer);
}
