
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct timeval*) ;

__attribute__((used)) static void
FUNC_1(evutil_socket_t VAR_0, short VAR_1, void *VAR_2)
{
 struct timeval VAR_3;
 int *VAR_4 = VAR_2;

 *VAR_4 = 1;

 VAR_3.tv_usec = 500000;
 VAR_3.tv_sec = 0;
 FUNC_0(&VAR_3);
}
