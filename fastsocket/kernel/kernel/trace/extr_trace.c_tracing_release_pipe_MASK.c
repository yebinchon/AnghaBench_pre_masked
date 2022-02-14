
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_iterator {scalar_t__ cpu_file; struct trace_iterator* trace; int mutex; int started; } ;
struct inode {int dummy; } ;
struct file {struct trace_iterator* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct trace_iterator*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, struct file *VAR_4)
{
 struct trace_iterator *VAR_5 = VAR_4->private_data;

 FUNC_5(&VAR_1);

 if (VAR_5->cpu_file == VAR_0)
  FUNC_0(VAR_2);
 else
  FUNC_1(VAR_5->cpu_file, VAR_2);

 FUNC_6(&VAR_1);

 FUNC_2(VAR_5->started);
 FUNC_4(&VAR_5->mutex);
 FUNC_3(VAR_5->trace);
 FUNC_3(VAR_5);

 return 0;
}
