
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct event_iocp_port {int dummy; } ;
struct event_base {int dummy; } ;
struct bufferevent {void* output; void* input; } ;
struct TYPE_2__ {struct bufferevent bev; } ;
struct bufferevent_async {int ok; TYPE_1__ bev; int write_overlapped; int read_overlapped; int connect_overlapped; } ;
typedef int evutil_socket_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct bufferevent*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,struct event_base*,int *,int) ;
 int FUNC_3 (struct bufferevent*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (void*,int ,struct bufferevent*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ) ;
 struct event_iocp_port* FUNC_7 (struct event_base*) ;
 scalar_t__ FUNC_8 (struct event_iocp_port*,int ,int) ;
 int FUNC_9 (int *,int ) ;
 struct bufferevent_async* FUNC_10 (int,int) ;
 int FUNC_11 (struct bufferevent_async*) ;
 int VAR_6 ;
 int VAR_7 ;

struct bufferevent *
FUNC_12(struct event_base *VAR_8,
    evutil_socket_t VAR_9, int VAR_10)
{
 struct bufferevent_async *VAR_11;
 struct bufferevent *VAR_12;
 struct event_iocp_port *VAR_13;

 VAR_10 |= VAR_0;

 if (!(VAR_13 = FUNC_7(VAR_8)))
  return ((void*)0);

 if (VAR_9 >= 0 && FUNC_8(VAR_13, VAR_9, 1)<0) {
  int VAR_14 = FUNC_0();



  if (VAR_14 != VAR_1)
   return ((void*)0);
 }

 if (!(VAR_11 = FUNC_10(1, sizeof(struct bufferevent_async))))
  return ((void*)0);

 VAR_12 = &VAR_11->bev.bev;
 if (!(VAR_12->input = FUNC_6(VAR_9))) {
  FUNC_11(VAR_11);
  return ((void*)0);
 }
 if (!(VAR_12->output = FUNC_6(VAR_9))) {
  FUNC_5(VAR_12->input);
  FUNC_11(VAR_11);
  return ((void*)0);
 }

 if (FUNC_2(&VAR_11->bev, VAR_8, &VAR_4,
  VAR_10)<0)
  goto err;

 FUNC_4(VAR_12->input, VAR_2, VAR_12);
 FUNC_4(VAR_12->output, VAR_3, VAR_12);

 FUNC_9(&VAR_11->connect_overlapped, VAR_5);
 FUNC_9(&VAR_11->read_overlapped, VAR_6);
 FUNC_9(&VAR_11->write_overlapped, VAR_7);

 FUNC_3(VAR_12);

 VAR_11->ok = VAR_9 >= 0;

 return VAR_12;
err:
 FUNC_1(&VAR_11->bev.bev);
 return ((void*)0);
}
