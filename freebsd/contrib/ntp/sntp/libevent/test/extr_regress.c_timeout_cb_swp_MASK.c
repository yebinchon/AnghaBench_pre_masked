
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int member_0; int member_1; } ;
struct event {int dummy; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct event*,struct timeval*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_3, short VAR_4, void *VAR_5)
{
 if (VAR_1 == -1) {
  struct timeval VAR_6 = {5, 0};

  VAR_1 = 0;
  FUNC_1((struct event *)VAR_5, &VAR_6);
  FUNC_2(VAR_0);
  return;
 }
 VAR_2 = 0;
 FUNC_0(((void*)0));
}
