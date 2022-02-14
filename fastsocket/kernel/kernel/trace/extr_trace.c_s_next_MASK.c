
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {int idx; scalar_t__ pos; } ;
struct seq_file {struct trace_iterator* private; } ;
typedef scalar_t__ loff_t ;


 void* FUNC_0 (struct trace_iterator*) ;

__attribute__((used)) static void *FUNC_1(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct trace_iterator *VAR_3 = VAR_0->private;
 int VAR_4 = (int)*VAR_2;
 void *VAR_5;

 (*VAR_2)++;


 if (VAR_3->idx > VAR_4)
  return ((void*)0);

 if (VAR_3->idx < 0)
  VAR_5 = FUNC_0(VAR_3);
 else
  VAR_5 = VAR_3;

 while (VAR_5 && VAR_3->idx < VAR_4)
  VAR_5 = FUNC_0(VAR_3);

 VAR_3->pos = *VAR_2;

 return VAR_5;
}
