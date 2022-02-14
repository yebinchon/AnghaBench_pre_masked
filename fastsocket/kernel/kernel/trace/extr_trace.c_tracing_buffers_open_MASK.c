
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_private; } ;
struct ftrace_buffer_info {int cpu; unsigned int read; int * spare; int * tr; } ;
struct file {struct ftrace_buffer_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ftrace_buffer_info* FUNC_0 (int,int ) ;
 int FUNC_1 (struct inode*,struct file*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_5, struct file *VAR_6)
{
 int VAR_7 = (int)(long)VAR_5->i_private;
 struct ftrace_buffer_info *VAR_8;

 if (VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->tr = &VAR_3;
 VAR_8->cpu = VAR_7;
 VAR_8->spare = ((void*)0);

 VAR_8->read = (unsigned int)-1;

 VAR_6->private_data = VAR_8;

 return FUNC_1(VAR_5, VAR_6);
}
