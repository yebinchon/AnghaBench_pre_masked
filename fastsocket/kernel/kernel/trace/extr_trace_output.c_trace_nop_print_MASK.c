
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {TYPE_1__* ent; int seq; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;

enum print_line_t FUNC_1(struct trace_iterator *VAR_2, int VAR_3)
{
 if (!FUNC_0(&VAR_2->seq, "type: %d\n", VAR_2->ent->type))
  return VAR_1;

 return VAR_0;
}
