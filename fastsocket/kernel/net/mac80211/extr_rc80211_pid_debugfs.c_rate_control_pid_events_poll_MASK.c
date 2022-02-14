
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_pid_events_file_info {TYPE_1__* events; } ;
struct file {struct rc_pid_events_file_info* private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {int waitqueue; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_1(struct file *VAR_2,
       poll_table *VAR_3)
{
 struct rc_pid_events_file_info *VAR_4 = VAR_2->private_data;

 FUNC_0(VAR_2, &VAR_4->events->waitqueue, VAR_3);

 return VAR_0 | VAR_1;
}
