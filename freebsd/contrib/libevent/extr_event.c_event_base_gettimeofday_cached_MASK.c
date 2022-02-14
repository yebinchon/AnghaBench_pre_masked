
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct event_base {int tv_clock_diff; TYPE_1__ tv_cache; } ;


 int FUNC_0 (struct event_base*,int ) ;
 int FUNC_1 (struct event_base*,int ) ;
 struct event_base* VAR_0 ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 (TYPE_1__*,int *,struct timeval*) ;
 int VAR_1 ;

int
FUNC_4(struct event_base *VAR_2, struct timeval *VAR_3)
{
 int VAR_4;
 if (!VAR_2) {
  VAR_2 = VAR_0;
  if (!VAR_0)
   return FUNC_2(VAR_3, ((void*)0));
 }

 FUNC_0(VAR_2, VAR_1);
 if (VAR_2->tv_cache.tv_sec == 0) {
  VAR_4 = FUNC_2(VAR_3, ((void*)0));
 } else {
  FUNC_3(&VAR_2->tv_cache, &VAR_2->tv_clock_diff, VAR_3);
  VAR_4 = 0;
 }
 FUNC_1(VAR_2, VAR_1);
 return VAR_4;
}
