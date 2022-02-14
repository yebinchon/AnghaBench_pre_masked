
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct terminate_state {int fd; int bev; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct terminate_state *VAR_3 = VAR_2;
 FUNC_0(VAR_3->bev);
 FUNC_1(VAR_3->fd);
}
