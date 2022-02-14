
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct common_timeout_info {int count; int ev; int called_at; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct common_timeout_info *VAR_3 = VAR_2;
 ++VAR_3->count;
 FUNC_1(&VAR_3->called_at, ((void*)0));
 if (VAR_3->count >= 4)
  FUNC_0(&VAR_3->ev);
}
