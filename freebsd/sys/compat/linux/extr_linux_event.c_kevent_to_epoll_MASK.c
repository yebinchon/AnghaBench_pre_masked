
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kevent {int flags; int filter; } ;
struct epoll_event {int events; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct kevent *VAR_6, struct epoll_event *VAR_7)
{

 if ((VAR_6->flags & VAR_1) != 0) {
  VAR_7->events = VAR_2;
  return;
 }


 switch (VAR_6->filter) {
 case 129:
  VAR_7->events = VAR_3;
  if ((VAR_6->flags & VAR_0) != 0)
   VAR_7->events |= VAR_5;
 break;
 case 128:
  VAR_7->events = VAR_4;
 break;
 }
}
