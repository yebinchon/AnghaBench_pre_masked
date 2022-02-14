
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union rc_pid_event_data {int dummy; } rc_pid_event_data ;
struct rc_pid_event_buffer {size_t next_entry; int waitqueue; int lock; int ev_count; struct rc_pid_event* ring; } ;
struct rc_pid_event {int type; union rc_pid_event_data data; scalar_t__ id; int timestamp; } ;
typedef enum rc_pid_event_type { ____Placeholder_rc_pid_event_type } rc_pid_event_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rc_pid_event_buffer *VAR_2,
       enum rc_pid_event_type VAR_3,
       union rc_pid_event_data *VAR_4)
{
 struct rc_pid_event *VAR_5;
 unsigned long VAR_6;

 FUNC_0(&VAR_2->lock, VAR_6);
 VAR_5 = &(VAR_2->ring[VAR_2->next_entry]);
 VAR_2->next_entry = (VAR_2->next_entry + 1) % VAR_0;

 VAR_5->timestamp = VAR_1;
 VAR_5->id = VAR_2->ev_count++;
 VAR_5->type = VAR_3;
 VAR_5->data = *VAR_4;

 FUNC_1(&VAR_2->lock, VAR_6);

 FUNC_2(&VAR_2->waitqueue);
}
