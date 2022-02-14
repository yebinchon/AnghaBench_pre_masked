
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int iter_flags; } ;
struct seq_file {struct trace_iterator* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct seq_file*) ;
 int FUNC_1 (struct seq_file*,struct trace_iterator*) ;
 scalar_t__ FUNC_2 (struct trace_iterator*) ;
 int VAR_2 ;

void FUNC_3(struct seq_file *VAR_3)
{
 struct trace_iterator *VAR_4 = VAR_3->private;


 if (FUNC_2(VAR_4))
  return;

 if (VAR_4->iter_flags & VAR_0)
  FUNC_1(VAR_3, VAR_4);

 if (!(VAR_2 & VAR_1))
  FUNC_0(VAR_3);
}
