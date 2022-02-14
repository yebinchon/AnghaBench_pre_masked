
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_changelist_fdinfo {int dummy; } ;
struct event_changelist {int dummy; } ;
struct event_change {short read_change; short write_change; short close_change; } ;
struct event_base {struct event_changelist changelist; } ;
typedef int evutil_socket_t ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 int FUNC_0 (struct event_base*) ;
 struct event_change* FUNC_1 (struct event_changelist*,int ,short,struct event_changelist_fdinfo*) ;

int
FUNC_2(struct event_base *VAR_7, evutil_socket_t VAR_8, short VAR_9, short VAR_10,
    void *VAR_11)
{
 struct event_changelist *VAR_12 = &VAR_7->changelist;
 struct event_changelist_fdinfo *VAR_13 = VAR_11;
 struct event_change *VAR_14;

 FUNC_0(VAR_7);

 VAR_14 = FUNC_1(VAR_12, VAR_8, VAR_9, VAR_13);
 if (!VAR_14)
  return -1;





 if (VAR_10 & (VAR_4|VAR_5)) {
  VAR_14->read_change = VAR_0 |
      (VAR_10 & (VAR_2|VAR_3|VAR_5));
 }
 if (VAR_10 & VAR_6) {
  VAR_14->write_change = VAR_0 |
      (VAR_10 & (VAR_2|VAR_3|VAR_5));
 }
 if (VAR_10 & VAR_1) {
  VAR_14->close_change = VAR_0 |
      (VAR_10 & (VAR_2|VAR_3|VAR_5));
 }

 FUNC_0(VAR_7);
 return (0);
}
