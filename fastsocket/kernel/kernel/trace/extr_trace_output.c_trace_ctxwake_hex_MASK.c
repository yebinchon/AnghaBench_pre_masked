
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int ent; struct trace_seq seq; } ;
struct ctx_switch_entry {int prev_pid; int prev_prio; int next_cpu; int next_pid; int next_prio; int next_state; int prev_state; } ;


 int FUNC_0 (struct trace_seq*,int) ;
 int VAR_0 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ctx_switch_entry*,int ) ;

__attribute__((used)) static int FUNC_3(struct trace_iterator *VAR_1, char VAR_2)
{
 struct ctx_switch_entry *VAR_3;
 struct trace_seq *VAR_4 = &VAR_1->seq;
 int VAR_5;

 FUNC_2(VAR_3, VAR_1->ent);

 if (!VAR_2)
  VAR_2 = FUNC_1(VAR_3->prev_state);
 VAR_5 = FUNC_1(VAR_3->next_state);

 FUNC_0(VAR_4, VAR_3->prev_pid);
 FUNC_0(VAR_4, VAR_3->prev_prio);
 FUNC_0(VAR_4, VAR_2);
 FUNC_0(VAR_4, VAR_3->next_cpu);
 FUNC_0(VAR_4, VAR_3->next_pid);
 FUNC_0(VAR_4, VAR_3->next_prio);
 FUNC_0(VAR_4, VAR_5);

 return VAR_0;
}
