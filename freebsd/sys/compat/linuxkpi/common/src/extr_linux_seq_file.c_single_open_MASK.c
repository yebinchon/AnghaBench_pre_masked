
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_operations {int (* show ) (struct seq_file*,void*) ;int stop; int next; int start; } ;
struct seq_file {void* private; } ;
struct linux_file {scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct seq_operations*,int ) ;
 struct seq_operations* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct linux_file*,struct seq_operations*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_3(struct linux_file *VAR_6, int (*VAR_7)(struct seq_file *, void *), void *VAR_8)
{
 struct seq_operations *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1, VAR_2);
 if (VAR_9) {
  VAR_9->start = VAR_4;
  VAR_9->next = VAR_3;
  VAR_9->stop = VAR_5;
  VAR_9->show = VAR_7;
  VAR_10 = FUNC_2(VAR_6, VAR_9);
  if (VAR_10)
   FUNC_0(VAR_9, VAR_1);
  else
   ((struct seq_file *)VAR_6->private_data)->private = VAR_8;

 }
 return (VAR_10);
}
