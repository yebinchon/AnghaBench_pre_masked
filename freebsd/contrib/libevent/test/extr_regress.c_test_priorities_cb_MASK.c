
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct test_pri_event {int count; int ev; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int *,struct timeval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct timeval*) ;

__attribute__((used)) static void
FUNC_3(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct test_pri_event *VAR_3 = VAR_2;
 struct timeval VAR_4;

 if (VAR_3->count == 3) {
  FUNC_1(((void*)0));
  return;
 }

 VAR_3->count++;

 FUNC_2(&VAR_4);
 FUNC_0(&VAR_3->ev, &VAR_4);
}
