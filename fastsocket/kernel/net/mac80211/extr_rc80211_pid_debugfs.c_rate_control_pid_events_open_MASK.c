
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_pid_event_buffer {int lock; int next_entry; } ;
struct rc_pid_sta_info {struct rc_pid_event_buffer events; } ;
struct rc_pid_events_file_info {struct rc_pid_event_buffer* events; int next_entry; } ;
struct inode {struct rc_pid_sta_info* i_private; } ;
struct file {struct rc_pid_events_file_info* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rc_pid_events_file_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 struct rc_pid_sta_info *VAR_4 = VAR_2->i_private;
 struct rc_pid_event_buffer *VAR_5 = &VAR_4->events;
 struct rc_pid_events_file_info *VAR_6;
 unsigned long VAR_7;


 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_5->lock, VAR_7);

 VAR_6->next_entry = VAR_5->next_entry;
 VAR_6->events = VAR_5;

 FUNC_2(&VAR_5->lock, VAR_7);

 VAR_3->private_data = VAR_6;

 return 0;
}
