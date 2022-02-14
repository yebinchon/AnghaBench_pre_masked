
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {TYPE_1__* op; } ;
struct linux_file {struct seq_file* private_data; } ;
typedef int ssize_t ;
typedef int off_t ;
struct TYPE_2__ {int (* show ) (struct seq_file*,void*) ;void* (* start ) (struct seq_file*,int *) ;} ;


 void* FUNC_0 (struct seq_file*,int *) ;
 int FUNC_1 (struct seq_file*,void*) ;

ssize_t
FUNC_2(struct linux_file *VAR_0, char *VAR_1, size_t VAR_2, off_t *VAR_3)
{
 struct seq_file *VAR_4 = VAR_0->private_data;
 void *VAR_5;
 int VAR_6;
 off_t VAR_7 = 0;

 VAR_5 = VAR_4->op->start(VAR_4, &VAR_7);
 VAR_6 = VAR_4->op->show(VAR_4, VAR_5);
 if (VAR_6)
  return (VAR_6);
 return (VAR_2);
}
