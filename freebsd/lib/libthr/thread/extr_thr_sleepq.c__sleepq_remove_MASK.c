
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleepqueue {int sq_freeq; int sq_blocked; } ;
struct pthread {int * wchan; struct sleepqueue* sleepqueue; } ;


 int FUNC_0 (struct sleepqueue*,int ) ;
 struct sleepqueue* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct pthread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_5(struct sleepqueue *VAR_3, struct pthread *VAR_4)
{
 int VAR_5;

 FUNC_4(&VAR_3->sq_blocked, VAR_4, VAR_2);
 if (FUNC_3(&VAR_3->sq_blocked)) {
  FUNC_0(VAR_3, VAR_1);
  VAR_4->sleepqueue = VAR_3;
  VAR_5 = 0;
 } else {
  VAR_4->sleepqueue = FUNC_1(&VAR_3->sq_freeq);
  FUNC_2(&VAR_3->sq_freeq, VAR_0);
  VAR_5 = 1;
 }
 VAR_4->wchan = ((void*)0);
 return (VAR_5);
}
