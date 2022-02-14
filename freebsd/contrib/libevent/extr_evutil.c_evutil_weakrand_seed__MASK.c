
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;
struct evutil_weakrand_state {scalar_t__ seed; } ;
typedef scalar_t__ ev_uint32_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct timeval*,int *) ;
 scalar_t__ FUNC_2 () ;

ev_uint32_t
FUNC_3(struct evutil_weakrand_state *VAR_0, ev_uint32_t VAR_1)
{
 if (VAR_1 == 0) {
  struct timeval VAR_2;
  FUNC_1(&VAR_2, ((void*)0));
  VAR_1 = (ev_uint32_t)VAR_2.tv_sec + (ev_uint32_t)VAR_2.tv_usec;



  VAR_1 += (ev_uint32_t) FUNC_2();

 }
 VAR_0->seed = VAR_1;
 return VAR_1;
}
