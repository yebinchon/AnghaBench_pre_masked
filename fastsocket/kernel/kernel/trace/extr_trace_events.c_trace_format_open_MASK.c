
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct ftrace_event_call* private; } ;
struct inode {struct ftrace_event_call* i_private; } ;
struct ftrace_event_call {int dummy; } ;
struct file {struct seq_file* private_data; } ;


 int FUNC_0 (struct file*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 struct ftrace_event_call *VAR_3 = VAR_1->i_private;
 struct seq_file *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, &VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = VAR_2->private_data;
 VAR_4->private = VAR_3;

 return 0;
}
