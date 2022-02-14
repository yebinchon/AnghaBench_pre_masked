
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct event {int ev_flags; int ev_events; int ev_res; int ev_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (struct timeval*,struct timeval*,struct timeval*) ;
 int FUNC_3 (int *,struct timeval*,struct timeval*) ;

int
FUNC_4(struct event *VAR_8, short VAR_9, struct timeval *VAR_10)
{
 struct timeval VAR_11, VAR_12;
 int VAR_13 = 0;

 if (VAR_8->ev_flags & VAR_1)
  VAR_13 |= (VAR_8->ev_events & (VAR_4|VAR_7));
 if (VAR_8->ev_flags & VAR_0)
  VAR_13 |= VAR_8->ev_res;
 if (VAR_8->ev_flags & VAR_3)
  VAR_13 |= VAR_6;
 if (VAR_8->ev_flags & VAR_2)
  VAR_13 |= VAR_5;

 VAR_9 &= (VAR_6|VAR_4|VAR_7|VAR_5);


 if (VAR_10 != ((void*)0) && (VAR_13 & VAR_9 & VAR_6)) {
  FUNC_0(&VAR_11);
  FUNC_3(&VAR_8->ev_timeout, &VAR_11, &VAR_12);

  FUNC_1(&VAR_11, ((void*)0));
  FUNC_2(&VAR_11, &VAR_12, VAR_10);
 }

 return (VAR_13 & VAR_9);
}
