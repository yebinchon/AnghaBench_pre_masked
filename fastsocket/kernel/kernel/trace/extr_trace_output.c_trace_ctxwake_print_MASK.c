
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int seq; int ent; } ;
struct ctx_switch_entry {int next_prio; int next_pid; int next_cpu; int prev_prio; int prev_pid; int prev_state; int next_state; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ctx_switch_entry*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,char*,int ,int ,int,char*,int ,int ,int ,int,char*) ;

__attribute__((used)) static enum print_line_t FUNC_4(struct trace_iterator *VAR_3,
          char *VAR_4)
{
 struct ctx_switch_entry *VAR_5;
 char VAR_6[VAR_0];
 int VAR_7, VAR_8;


 FUNC_1(VAR_5, VAR_3->ent);

 VAR_8 = FUNC_0(VAR_5->next_state);
 VAR_7 = FUNC_0(VAR_5->prev_state);
 FUNC_2(VAR_5->next_pid, VAR_6);
 if (!FUNC_3(&VAR_3->seq,
         " %5d:%3d:%c %s [%03d] %5d:%3d:%c %s\n",
         VAR_5->prev_pid,
         VAR_5->prev_prio,
         VAR_7, VAR_4,
         VAR_5->next_cpu,
         VAR_5->next_pid,
         VAR_5->next_prio,
         VAR_8, VAR_6))
  return VAR_2;

 return VAR_1;
}
