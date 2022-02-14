
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event*,struct timeval const*) ;
 int FUNC_1 (struct timeval const*) ;

int
FUNC_2(struct event *VAR_0, const struct timeval *VAR_1)
{
 if (!FUNC_1(VAR_1))
  return FUNC_0(VAR_0, ((void*)0));
 else
  return FUNC_0(VAR_0, VAR_1);
}
