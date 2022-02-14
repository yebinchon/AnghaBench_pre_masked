
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int dummy; } ;
struct trace_iterator {int iter_flags; int ts; int cpu; struct trace_entry* ent; struct trace_seq seq; } ;
struct trace_entry {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (unsigned long long,int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct trace_seq*,char*,char*,int ,int ,unsigned long,...) ;

int FUNC_4(struct trace_iterator *VAR_3)
{
 struct trace_seq *VAR_4 = &VAR_3->seq;
 struct trace_entry *VAR_5 = VAR_3->ent;
 unsigned long long VAR_6;
 unsigned long VAR_7, VAR_8;
 char VAR_9[VAR_0];

 FUNC_2(VAR_5->pid, VAR_9);

 if (VAR_3->iter_flags & VAR_1) {
  VAR_6 = FUNC_1(VAR_3->ts);
  VAR_8 = FUNC_0(VAR_6, VAR_2);
  VAR_7 = (unsigned long)VAR_6;
  return FUNC_3(VAR_4, "%16s-%-5d [%03d] %5lu.%06lu: ",
     VAR_9, VAR_5->pid, VAR_3->cpu, VAR_7, VAR_8);
 } else
  return FUNC_3(VAR_4, "%16s-%-5d [%03d] %12llu: ",
     VAR_9, VAR_5->pid, VAR_3->cpu, VAR_3->ts);
}
