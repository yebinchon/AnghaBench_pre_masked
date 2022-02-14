
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct event_once {void (* cb ) (int,short,void*) ;int ev; void* arg; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 struct event_once* FUNC_0 (int,int) ;
 int FUNC_1 (int *,struct timeval*) ;
 int VAR_4 ;
 int FUNC_2 (int *,int,short,int ,struct event_once*) ;
 int FUNC_3 (int *,int ,struct event_once*) ;
 int FUNC_4 (struct event_once*) ;
 int FUNC_5 (struct timeval*) ;

int
FUNC_6(int VAR_5, short VAR_6,
    void (*VAR_7)(int, short, void *), void *VAR_8, struct timeval *VAR_9)
{
 struct event_once *VAR_10;
 struct timeval VAR_11;
 int VAR_12;


 if (VAR_6 & VAR_1)
  return (-1);

 if ((VAR_10 = FUNC_0(1, sizeof(struct event_once))) == ((void*)0))
  return (-1);

 VAR_10->cb = VAR_7;
 VAR_10->arg = VAR_8;

 if (VAR_6 == VAR_2) {
  if (VAR_9 == ((void*)0)) {
   FUNC_5(&VAR_11);
   VAR_9 = &VAR_11;
  }

  FUNC_3(&VAR_10->ev, VAR_4, VAR_10);
 } else if (VAR_6 & (VAR_0|VAR_3)) {
  VAR_6 &= VAR_0|VAR_3;

  FUNC_2(&VAR_10->ev, VAR_5, VAR_6, VAR_4, VAR_10);
 } else {

  FUNC_4(VAR_10);
  return (-1);
 }

 VAR_12 = FUNC_1(&VAR_10->ev, VAR_9);
 if (VAR_12 != 0) {
  FUNC_4(VAR_10);
  return (VAR_12);
 }

 return (0);
}
