
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct trace_iterator {scalar_t__ pos; int mutex; TYPE_1__* trace; } ;
struct file {int f_flags; struct trace_iterator* private_data; } ;
struct TYPE_2__ {int (* wait_pipe ) (struct trace_iterator*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct trace_iterator*) ;
 scalar_t__ FUNC_4 (struct trace_iterator*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5)
{
 struct trace_iterator *VAR_6 = VAR_5->private_data;

 while (FUNC_4(VAR_6)) {

  if ((VAR_5->f_flags & VAR_2)) {
   return -VAR_0;
  }

  FUNC_1(&VAR_6->mutex);

  VAR_6->trace->wait_pipe(VAR_6);

  FUNC_0(&VAR_6->mutex);

  if (FUNC_2(VAR_3))
   return -VAR_1;
  if (!VAR_4 && VAR_6->pos)
   break;
 }

 return 1;
}
