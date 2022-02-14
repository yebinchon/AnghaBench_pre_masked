
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_parser {int size; int buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct trace_parser*,int ,int) ;

int FUNC_2(struct trace_parser *VAR_1, int VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->buffer = FUNC_0(VAR_2, VAR_0);
 if (!VAR_1->buffer)
  return 1;

 VAR_1->size = VAR_2;
 return 0;
}
