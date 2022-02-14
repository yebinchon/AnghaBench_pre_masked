
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {struct trace_entry* ent; } ;
struct trace_entry {int type; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int val; } ;




 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct trace_iterator*) ;

__attribute__((used)) static enum print_line_t FUNC_2(struct trace_iterator *VAR_3)
{
 struct trace_entry *VAR_4 = VAR_3->ent;

 if (!(VAR_2.val & VAR_0))
  return VAR_1;

 switch (VAR_4->type) {
 case 129:
  return FUNC_0(VAR_3);
 case 128:
  return FUNC_1(VAR_3);
 default:
  return VAR_1;
 }
}
