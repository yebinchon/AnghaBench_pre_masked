
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_monotonic_timer {int dummy; } ;


 int FUNC_0 (struct evutil_monotonic_timer*,int ,int) ;
 struct evutil_monotonic_timer* FUNC_1 (int) ;

struct evutil_monotonic_timer *
FUNC_2(void)
{
  struct evutil_monotonic_timer *VAR_0 = ((void*)0);

  VAR_0 = FUNC_1(sizeof(*VAR_0));
  if (!VAR_0) goto done;

  FUNC_0(VAR_0, 0, sizeof(*VAR_0));

 done:
  return VAR_0;
}
