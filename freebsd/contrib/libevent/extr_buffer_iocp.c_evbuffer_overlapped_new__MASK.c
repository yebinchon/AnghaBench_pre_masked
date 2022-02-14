
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {int refcnt; int is_overlapped; int first; int * last_with_datap; int callbacks; } ;
struct evbuffer_overlapped {struct evbuffer buffer; int fd; } ;
typedef int evutil_socket_t ;


 int FUNC_0 (int *) ;
 struct evbuffer_overlapped* FUNC_1 (int,int) ;

struct evbuffer *
FUNC_2(evutil_socket_t VAR_0)
{
 struct evbuffer_overlapped *VAR_1;

 VAR_1 = FUNC_1(1, sizeof(struct evbuffer_overlapped));
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->buffer.callbacks);
 VAR_1->buffer.refcnt = 1;
 VAR_1->buffer.last_with_datap = &VAR_1->buffer.first;

 VAR_1->buffer.is_overlapped = 1;
 VAR_1->fd = VAR_0;

 return &VAR_1->buffer;
}
