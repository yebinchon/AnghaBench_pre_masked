
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kqop {int dummy; } ;
struct kevent {int ident; void* flags; int filter; } ;
struct event {int ev_flags; int ev_events; int ev_fd; } ;
typedef int kev ;


 int FUNC_0 (struct event*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct kqop*,struct kevent*) ;
 int FUNC_2 (struct kevent*,int ,int) ;
 scalar_t__ FUNC_3 (int,int ) ;

int
FUNC_4(void *VAR_10, struct event *VAR_11)
{
 struct kqop *VAR_12 = VAR_10;
 struct kevent VAR_13;

 if (!(VAR_11->ev_flags & VAR_3))
  return (0);

 if (VAR_11->ev_events & VAR_6) {
  int VAR_14 = FUNC_0(VAR_11);

   FUNC_2(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ident = VAR_14;
  VAR_13.filter = VAR_1;
  VAR_13.flags = VAR_4;

  if (FUNC_1(VAR_12, &VAR_13) == -1)
   return (-1);

  if (FUNC_3(VAR_14, VAR_8) == VAR_9)
   return (-1);

  VAR_11->ev_flags &= ~VAR_3;
  return (0);
 }

 if (VAR_11->ev_events & VAR_5) {
   FUNC_2(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ident = VAR_11->ev_fd;
  VAR_13.filter = VAR_0;
  VAR_13.flags = VAR_4;

  if (FUNC_1(VAR_12, &VAR_13) == -1)
   return (-1);

  VAR_11->ev_flags &= ~VAR_3;
 }

 if (VAR_11->ev_events & VAR_7) {
   FUNC_2(&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ident = VAR_11->ev_fd;
  VAR_13.filter = VAR_2;
  VAR_13.flags = VAR_4;

  if (FUNC_1(VAR_12, &VAR_13) == -1)
   return (-1);

  VAR_11->ev_flags &= ~VAR_3;
 }

 return (0);
}
