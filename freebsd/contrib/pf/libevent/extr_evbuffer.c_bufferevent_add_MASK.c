
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; } ;
struct event {int dummy; } ;


 int FUNC_0 (struct event*,struct timeval*) ;
 int FUNC_1 (struct timeval*) ;

__attribute__((used)) static int
FUNC_2(struct event *VAR_0, int VAR_1)
{
 struct timeval VAR_2, *VAR_3 = ((void*)0);

 if (VAR_1) {
  FUNC_1(&VAR_2);
  VAR_2.tv_sec = VAR_1;
  VAR_3 = &VAR_2;
 }

 return (FUNC_0(VAR_0, VAR_3));
}
