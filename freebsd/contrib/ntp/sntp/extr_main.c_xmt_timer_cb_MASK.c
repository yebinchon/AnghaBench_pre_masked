
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* spkt; } ;
typedef TYPE_2__ xmt_ctx ;
typedef int u_int ;
struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
typedef void* evutil_socket_t ;
struct TYPE_10__ {scalar_t__ sched; } ;
struct TYPE_8__ {int addr; } ;


 int FUNC_0 (int) ;
 short VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_3 (void*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,struct timeval*) ;
 int FUNC_5 (TYPE_2__*) ;
 struct timeval VAR_3 ;
 int FUNC_6 (int ,struct timeval*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_3__* VAR_6 ;

void
FUNC_9(
 evutil_socket_t VAR_7,
 short VAR_8,
 void * VAR_9
 )
{
 struct timeval VAR_10;
 struct timeval VAR_11;
 xmt_ctx * VAR_12;

 FUNC_3(VAR_7);
 FUNC_3(VAR_9);
 FUNC_0(VAR_0 == VAR_8);

 if (((void*)0) == VAR_6 || VAR_5)
  return;
 FUNC_6(VAR_1, &VAR_10);
 if (VAR_6->sched <= VAR_10.tv_sec) {
  FUNC_2(VAR_12, VAR_6, VAR_4);
  FUNC_1(2, ("xmt_timer_cb: at .%6.6u -> %s\n",
     (u_int)VAR_10.tv_usec, FUNC_7(&VAR_12->spkt->addr)));
  FUNC_8(VAR_12);
  FUNC_5(VAR_12);
  if (((void*)0) == VAR_6)
   return;
 }
 if (VAR_6->sched <= VAR_10.tv_sec) {
  FUNC_4(VAR_2, &VAR_3);
  FUNC_1(2, ("xmt_timer_cb: at .%6.6u gap %6.6u\n",
     (u_int)VAR_10.tv_usec,
     (u_int)VAR_3.tv_usec));
 } else {
  VAR_11.tv_sec = VAR_6->sched - VAR_10.tv_sec;
  VAR_11.tv_usec = 0;
  FUNC_4(VAR_2, &VAR_11);
  FUNC_1(2, ("xmt_timer_cb: at .%6.6u next %ld seconds\n",
     (u_int)VAR_10.tv_usec,
     (long)VAR_11.tv_sec));
 }
}
