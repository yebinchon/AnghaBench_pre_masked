
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union rc_pid_event_data {int index; int rate; } ;
struct rc_pid_event_buffer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rc_pid_event_buffer*,int ,union rc_pid_event_data*) ;

void FUNC_1(struct rc_pid_event_buffer *VAR_1,
            int VAR_2, int VAR_3)
{
 union rc_pid_event_data VAR_4;

 VAR_4.index = VAR_2;
 VAR_4.rate = VAR_3;
 FUNC_0(VAR_1, VAR_0, &VAR_4);
}
