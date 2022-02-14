
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct ctx_switch_entry {int next_state; int next_prio; int next_pid; int prev_state; int prev_prio; int prev_pid; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int FUNC_0 (struct trace_seq*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ctx_switch_entry*,int ) ;

__attribute__((used)) static enum print_line_t FUNC_2(struct trace_iterator *VAR_1,
        int VAR_2)
{
 struct ctx_switch_entry *VAR_3;
 struct trace_seq *VAR_4 = &VAR_1->seq;

 FUNC_1(VAR_3, VAR_1->ent);

 FUNC_0(VAR_4, VAR_3->prev_pid);
 FUNC_0(VAR_4, VAR_3->prev_prio);
 FUNC_0(VAR_4, VAR_3->prev_state);
 FUNC_0(VAR_4, VAR_3->next_pid);
 FUNC_0(VAR_4, VAR_3->next_prio);
 FUNC_0(VAR_4, VAR_3->next_state);

 return VAR_0;
}
