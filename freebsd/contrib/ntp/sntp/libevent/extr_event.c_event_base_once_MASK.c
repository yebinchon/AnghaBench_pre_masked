
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct event_once {void (* cb ) (int ,short,void*) ;int ev; void* arg; } ;
struct event_base {int once_events; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 int FUNC_2 (int *,struct event_once*,int ) ;
 int FUNC_3 (int *,short,int) ;
 int FUNC_4 (int *,struct timeval const*,int ) ;
 int FUNC_5 (int *,struct event_base*,int ,short,int ,struct event_once*) ;
 int VAR_6 ;
 int FUNC_6 (int *,struct event_base*,int ,struct event_once*) ;
 int FUNC_7 (struct timeval const*) ;
 struct event_once* FUNC_8 (int,int) ;
 int FUNC_9 (struct event_once*) ;
 int VAR_7 ;
 int VAR_8 ;

int
FUNC_10(struct event_base *VAR_9, evutil_socket_t VAR_10, short VAR_11,
    void (*VAR_12)(evutil_socket_t, short, void *),
    void *VAR_13, const struct timeval *VAR_14)
{
 struct event_once *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = 0;



 if (VAR_11 & (VAR_3|VAR_1))
  return (-1);

 if ((VAR_15 = FUNC_8(1, sizeof(struct event_once))) == ((void*)0))
  return (-1);

 VAR_15->cb = VAR_12;
 VAR_15->arg = VAR_13;

 if ((VAR_11 & (VAR_4|VAR_3|VAR_2|VAR_5|VAR_0)) == VAR_4) {
  FUNC_6(&VAR_15->ev, VAR_9, VAR_6, VAR_15);

  if (VAR_14 == ((void*)0) || ! FUNC_7(VAR_14)) {




   VAR_17 = 1;
  }
 } else if (VAR_11 & (VAR_2|VAR_5|VAR_0)) {
  VAR_11 &= VAR_2|VAR_5|VAR_0;

  FUNC_5(&VAR_15->ev, VAR_9, VAR_10, VAR_11, VAR_6, VAR_15);
 } else {

  FUNC_9(VAR_15);
  return (-1);
 }

 if (VAR_16 == 0) {
  FUNC_0(VAR_9, VAR_8);
  if (VAR_17)
   FUNC_3(&VAR_15->ev, VAR_4, 1);
  else
   VAR_16 = FUNC_4(&VAR_15->ev, VAR_14, 0);

  if (VAR_16 != 0) {
   FUNC_9(VAR_15);
   return (VAR_16);
  } else {
   FUNC_2(&VAR_9->once_events, VAR_15, VAR_7);
  }
  FUNC_1(VAR_9, VAR_8);
 }

 return (0);
}
