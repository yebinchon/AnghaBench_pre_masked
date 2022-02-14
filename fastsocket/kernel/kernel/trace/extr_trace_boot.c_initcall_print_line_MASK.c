
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {struct trace_entry* ent; } ;
struct trace_entry {int type; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;




 int VAR_0 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;

__attribute__((used)) static enum print_line_t FUNC_2(struct trace_iterator *VAR_1)
{
 struct trace_entry *VAR_2 = VAR_1->ent;

 switch (VAR_2->type) {
 case 129:
  return FUNC_0(VAR_1);
 case 128:
  return FUNC_1(VAR_1);
 default:
  return VAR_0;
 }
}
