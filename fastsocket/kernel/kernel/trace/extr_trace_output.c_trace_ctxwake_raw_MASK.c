
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct ctx_switch_entry {int next_prio; int next_pid; int next_cpu; int prev_prio; int prev_pid; int next_state; int prev_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ctx_switch_entry*,int ) ;
 int FUNC_2 (int *,char*,int ,int ,char,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct trace_iterator *VAR_2, char VAR_3)
{
 struct ctx_switch_entry *VAR_4;
 int VAR_5;

 FUNC_1(VAR_4, VAR_2->ent);

 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_4->prev_state);
 VAR_5 = FUNC_0(VAR_4->next_state);
 if (!FUNC_2(&VAR_2->seq, "%d %d %c %d %d %d %c\n",
         VAR_4->prev_pid,
         VAR_4->prev_prio,
         VAR_3,
         VAR_4->next_cpu,
         VAR_4->next_pid,
         VAR_4->next_prio,
         VAR_5))
  return VAR_1;

 return VAR_0;
}
