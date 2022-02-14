
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_pid_sta_info {int events_entry; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,struct dentry*,struct rc_pid_sta_info*,int *) ;
 int VAR_1 ;

void FUNC_1(void *VAR_2, void *VAR_3,
          struct dentry *VAR_4)
{
 struct rc_pid_sta_info *VAR_5 = VAR_3;

 VAR_5->events_entry = FUNC_0("rc_pid_events", VAR_0,
         VAR_4, VAR_5,
         &VAR_1);
}
