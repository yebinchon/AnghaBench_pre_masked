
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist_fdinfo {int dummy; } ;
struct event_changelist {int dummy; } ;
struct event_change {short old_events; void* close_change; void* write_change; void* read_change; } ;
struct event_base {struct event_changelist changelist; } ;
typedef int evutil_socket_t ;


 void* VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (struct event_base*) ;
 struct event_change* FUNC_1 (struct event_changelist*,int ,short,struct event_changelist_fdinfo*) ;

int
FUNC_2(struct event_base *VAR_5, evutil_socket_t VAR_6, short VAR_7, short VAR_8,
    void *VAR_9)
{
 struct event_changelist *VAR_10 = &VAR_5->changelist;
 struct event_changelist_fdinfo *VAR_11 = VAR_9;
 struct event_change *VAR_12;

 FUNC_0(VAR_5);
 VAR_12 = FUNC_1(VAR_10, VAR_6, VAR_7, VAR_11);
 FUNC_0(VAR_5);
 if (!VAR_12)
  return -1;
 if (VAR_8 & (VAR_2|VAR_3)) {
  if (!(VAR_12->old_events & (VAR_2 | VAR_3)))
   VAR_12->read_change = 0;
  else
   VAR_12->read_change = VAR_0;
 }
 if (VAR_8 & VAR_4) {
  if (!(VAR_12->old_events & VAR_4))
   VAR_12->write_change = 0;
  else
   VAR_12->write_change = VAR_0;
 }
 if (VAR_8 & VAR_1) {
  if (!(VAR_12->old_events & VAR_1))
   VAR_12->close_change = 0;
  else
   VAR_12->close_change = VAR_0;
 }

 FUNC_0(VAR_5);
 return (0);
}
