
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_seq {int dummy; } ;
struct trace_iterator {int cpu; int ts; struct trace_entry* ent; struct fgraph_data* private; } ;
struct trace_entry {int pid; } ;
struct fgraph_data {int dummy; } ;
typedef enum print_line_t { ____Placeholder_print_line_t } print_line_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,int) ;
 int FUNC_2 (struct trace_iterator*,unsigned long,int,int,int ,int) ;
 int FUNC_3 (struct trace_seq*,struct trace_entry*) ;
 int FUNC_4 (struct trace_seq*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct trace_seq*,char*) ;
 int FUNC_6 (struct trace_seq*,int ,int,struct fgraph_data*) ;

__attribute__((used)) static enum print_line_t
FUNC_7(struct trace_iterator *VAR_6, struct trace_seq *VAR_7,
       int VAR_8, unsigned long VAR_9, u32 VAR_10)
{
 struct fgraph_data *VAR_11 = VAR_6->private;
 struct trace_entry *VAR_12 = VAR_6->ent;
 int VAR_13 = VAR_6->cpu;
 int VAR_14;


 if (FUNC_6(VAR_7, VAR_12->pid, VAR_13, VAR_11) == VAR_4)
  return VAR_4;

 if (VAR_8) {

  VAR_14 = FUNC_2(VAR_6, VAR_9, VAR_8, VAR_13, VAR_12->pid, VAR_10);
  if (VAR_14 == VAR_4)
   return VAR_4;
 }


 if (VAR_10 & VAR_0) {
  VAR_14 = FUNC_0(VAR_6->ts, VAR_7);
  if (!VAR_14)
   return VAR_4;
 }


 if (VAR_10 & VAR_1) {
  VAR_14 = FUNC_1(VAR_7, VAR_13);
  if (VAR_14 == VAR_4)
   return VAR_4;
 }


 if (VAR_10 & VAR_2) {
  VAR_14 = FUNC_4(VAR_7, VAR_12->pid);
  if (VAR_14 == VAR_4)
   return VAR_4;

  VAR_14 = FUNC_5(VAR_7, " | ");
  if (!VAR_14)
   return VAR_4;
 }


 if (VAR_5 & VAR_3) {
  VAR_14 = FUNC_3(VAR_7, VAR_12);
  if (VAR_14 == VAR_4)
   return VAR_4;
 }

 return 0;
}
