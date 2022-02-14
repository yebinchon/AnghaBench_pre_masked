
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_overlapped {int fd; } ;
struct evbuffer {int dummy; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (struct evbuffer*) ;
 int FUNC_1 (struct evbuffer*) ;
 struct evbuffer_overlapped* FUNC_2 (struct evbuffer*) ;

void
FUNC_3(struct evbuffer *VAR_0, evutil_socket_t VAR_1)
{
 struct evbuffer_overlapped *VAR_2 = FUNC_2(VAR_0);
 FUNC_0(VAR_0);

 if (VAR_2)
  VAR_2->fd = VAR_1;
 FUNC_1(VAR_0);
}
