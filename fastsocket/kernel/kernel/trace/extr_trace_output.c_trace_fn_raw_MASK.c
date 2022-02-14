
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct ftrace_entry {int parent_ip; int ip; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ftrace_entry*,int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;

__attribute__((used)) static enum print_line_t FUNC_2(struct trace_iterator *VAR_2, int VAR_3)
{
 struct ftrace_entry *VAR_4;

 FUNC_0(VAR_4, VAR_2->ent);

 if (!FUNC_1(&VAR_2->seq, "%lx %lx\n",
         VAR_4->ip,
         VAR_4->parent_ip))
  return VAR_1;

 return VAR_0;
}
