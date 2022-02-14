
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union bufferevent_ctrl_data {void* fd; } ;
struct event_iocp_port {int dummy; } ;
struct TYPE_2__ {int options; } ;
struct bufferevent_async {int ok; TYPE_1__ bev; } ;
struct bufferevent {int input; int output; int ev_base; } ;
typedef void* evutil_socket_t ;
typedef enum bufferevent_ctrl_op { ____Placeholder_bufferevent_ctrl_op } bufferevent_ctrl_op ;






 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 struct event_iocp_port* FUNC_3 (int ) ;
 int FUNC_4 (struct event_iocp_port*,void*,int) ;
 struct bufferevent_async* FUNC_5 (struct bufferevent*) ;

__attribute__((used)) static int
FUNC_6(struct bufferevent *VAR_2, enum bufferevent_ctrl_op VAR_3,
    union bufferevent_ctrl_data *VAR_4)
{
 switch (VAR_3) {
 case 130:
  VAR_4->fd = FUNC_1(VAR_2->input);
  return 0;
 case 128: {
  struct event_iocp_port *VAR_5;

  if (VAR_4->fd == FUNC_1(VAR_2->input))
   return 0;
  if (!(VAR_5 = FUNC_3(VAR_2->ev_base)))
   return -1;
  if (FUNC_4(VAR_5, VAR_4->fd, 1) < 0)
   return -1;
  FUNC_2(VAR_2->input, VAR_4->fd);
  FUNC_2(VAR_2->output, VAR_4->fd);
  return 0;
 }
 case 131: {
  struct bufferevent_async *VAR_6 = FUNC_5(VAR_2);
  evutil_socket_t VAR_7 = FUNC_1(VAR_2->input);
  if (VAR_7 != (evutil_socket_t)VAR_1 &&
      (VAR_6->bev.options & VAR_0)) {
   FUNC_0(VAR_7);
   FUNC_2(VAR_2->input, VAR_1);
  }
  VAR_6->ok = 0;
  return 0;
 }
 case 129:
 default:
  return -1;
 }
}
