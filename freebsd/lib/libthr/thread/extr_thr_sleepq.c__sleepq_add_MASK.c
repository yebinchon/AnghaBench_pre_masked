
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleepqueue_chain {int sc_enqcnt; int sc_queues; } ;
struct sleepqueue {int sq_blocked; void* sq_wchan; int sq_freeq; } ;
struct pthread {void* wchan; struct sleepqueue* sleepqueue; } ;


 int FUNC_0 (int *,struct sleepqueue*,int ) ;
 struct sleepqueue_chain* FUNC_1 (void*) ;
 int FUNC_2 (int *,struct sleepqueue*,int ) ;
 int FUNC_3 (int *,struct pthread*,int ) ;
 int FUNC_4 (int *,struct pthread*,int ) ;
 int VAR_0 ;
 struct sleepqueue* FUNC_5 (struct sleepqueue_chain*,void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(void *VAR_4, struct pthread *VAR_5)
{
 struct sleepqueue_chain *VAR_6;
 struct sleepqueue *VAR_7;

 VAR_6 = FUNC_1(VAR_4);
 VAR_7 = FUNC_5(VAR_6, VAR_4);
 if (VAR_7 != ((void*)0)) {
  FUNC_2(&VAR_7->sq_freeq, VAR_5->sleepqueue, VAR_1);
 } else {
  VAR_7 = VAR_5->sleepqueue;
  FUNC_0(&VAR_6->sc_queues, VAR_7, VAR_2);
  VAR_7->sq_wchan = VAR_4;

 }
 VAR_5->sleepqueue = ((void*)0);
 VAR_5->wchan = VAR_4;
 if (((++VAR_6->sc_enqcnt << VAR_0) & 0xff) != 0)
  FUNC_3(&VAR_7->sq_blocked, VAR_5, VAR_3);
 else
  FUNC_4(&VAR_7->sq_blocked, VAR_5, VAR_3);
}
