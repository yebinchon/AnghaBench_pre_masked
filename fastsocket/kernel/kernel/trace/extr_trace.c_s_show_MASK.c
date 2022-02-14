
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {int seq; TYPE_1__* trace; scalar_t__ tr; int * ent; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int (* print_header ) (struct seq_file*) ;int name; } ;


 int FUNC_0 (struct trace_iterator*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;
 int FUNC_2 (struct seq_file*,char*) ;
 int FUNC_3 (struct seq_file*) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*,int *) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_0, void *VAR_1)
{
 struct trace_iterator *VAR_2 = VAR_1;

 if (VAR_2->ent == ((void*)0)) {
  if (VAR_2->tr) {
   FUNC_1(VAR_0, "# tracer: %s\n", VAR_2->trace->name);
   FUNC_2(VAR_0, "#\n");
  }
  if (VAR_2->trace && VAR_2->trace->print_header)
   VAR_2->trace->print_header(VAR_0);
  else
   FUNC_4(VAR_0);

 } else {
  FUNC_0(VAR_2);
  FUNC_5(VAR_0, &VAR_2->seq);
 }

 return 0;
}
