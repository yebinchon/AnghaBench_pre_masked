
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_sec; scalar_t__ tv_usec; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event*,struct timeval const*) ;

int
FUNC_1(struct event *VAR_0, const struct timeval *VAR_1)
{
 if (VAR_1->tv_sec == 0 && VAR_1->tv_usec == 0)
  return FUNC_0(VAR_0, ((void*)0));
 else
  return FUNC_0(VAR_0, VAR_1);
}
