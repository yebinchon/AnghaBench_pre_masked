
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct trace_iterator {int dummy; } ;
struct seq_file {struct trace_iterator* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_file*,int ) ;
 int FUNC_1 (struct seq_file*,struct trace_iterator*) ;
 scalar_t__ FUNC_2 (struct trace_iterator*) ;
 int VAR_3 ;

void FUNC_3(struct seq_file *VAR_4, u32 VAR_5)
{
 struct trace_iterator *VAR_6 = VAR_4->private;

 if (VAR_3 & VAR_2) {

  if (FUNC_2(VAR_6))
   return;

  FUNC_1(VAR_4, VAR_6);
  VAR_5 |= VAR_1;
 } else
  VAR_5 |= VAR_0;

 FUNC_0(VAR_4, VAR_5);
}
