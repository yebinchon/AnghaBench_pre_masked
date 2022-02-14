
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
struct evhttp {int dummy; } ;


 int FUNC_0 (struct evhttp*,struct timeval*) ;

void
FUNC_1(struct evhttp* VAR_0, int VAR_1)
{
 if (VAR_1 == -1) {
  FUNC_0(VAR_0, ((void*)0));
 } else {
  struct timeval VAR_2;
  VAR_2.tv_sec = VAR_1;
  VAR_2.tv_usec = 0;
  FUNC_0(VAR_0, &VAR_2);
 }
}
