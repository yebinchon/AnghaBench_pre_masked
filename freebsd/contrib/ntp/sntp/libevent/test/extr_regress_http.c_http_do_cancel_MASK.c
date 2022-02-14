
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct evhttp_request {int dummy; } ;
struct event_base {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct event_base*,struct timeval*) ;
 int FUNC_1 (struct evhttp_request*) ;
 struct event_base* FUNC_2 (int ) ;
 int FUNC_3 (struct evhttp_request*) ;
 int FUNC_4 (struct timeval*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(evutil_socket_t VAR_1, short VAR_2, void *VAR_3)
{
 struct evhttp_request *VAR_4 = VAR_3;
 struct timeval VAR_5;
 struct event_base *VAR_6;
 FUNC_4(&VAR_5);
 VAR_5.tv_sec = 0;
 VAR_5.tv_usec = 500 * 1000;

 VAR_6 = FUNC_2(FUNC_3(VAR_4));
 FUNC_1(VAR_4);

 FUNC_0(VAR_6, &VAR_5);

 ++VAR_0;
}
