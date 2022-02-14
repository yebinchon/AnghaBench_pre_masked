
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_event {int fd; int tcp_is_reading; int do_not_close; struct internal_event* ev; int * timeout; void* cb_arg; int * callback; scalar_t__ buffer; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ tcp_do_toggle_rw; scalar_t__ tcp_do_close; int type; int * tcp_free; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; int * tcp_parent; scalar_t__ tcp_byte_count; struct comm_base* base; } ;
struct comm_point {int fd; int tcp_is_reading; int do_not_close; struct comm_point* ev; int * timeout; void* cb_arg; int * callback; scalar_t__ buffer; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ tcp_do_toggle_rw; scalar_t__ tcp_do_close; int type; int * tcp_free; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; int * tcp_parent; scalar_t__ tcp_byte_count; struct comm_base* base; } ;
struct comm_base {TYPE_1__* eb; } ;
typedef int comm_point_callback_type ;
struct TYPE_2__ {int base; } ;


 short VAR_0 ;
 short VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct internal_event*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (struct internal_event*,int *) ;
 int FUNC_5 (struct internal_event*) ;
 struct internal_event* FUNC_6 (int ,int,short,int ,struct internal_event*) ;

struct comm_point*
FUNC_7(struct comm_base *VAR_4, int VAR_5, size_t VAR_6,
        comm_point_callback_type* VAR_7, void* VAR_8)
{
 struct comm_point* VAR_9 = (struct comm_point*)FUNC_0(1,
  sizeof(struct comm_point));
 short VAR_10;
 if(!VAR_9)
  return ((void*)0);
 VAR_9->ev = (struct internal_event*)FUNC_0(1,
  sizeof(struct internal_event));
 if(!VAR_9->ev) {
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 VAR_9->ev->base = VAR_4;
 VAR_9->fd = VAR_5;
 VAR_9->buffer = FUNC_3(VAR_6);
 if(!VAR_9->buffer) {
  FUNC_1(VAR_9->ev);
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 VAR_9->timeout = ((void*)0);
 VAR_9->tcp_is_reading = 1;
 VAR_9->tcp_byte_count = 0;
 VAR_9->tcp_parent = ((void*)0);
 VAR_9->max_tcp_count = 0;
 VAR_9->cur_tcp_count = 0;
 VAR_9->tcp_handlers = ((void*)0);
 VAR_9->tcp_free = ((void*)0);
 VAR_9->type = VAR_2;
 VAR_9->tcp_do_close = 0;
 VAR_9->do_not_close = 1;
 VAR_9->tcp_do_toggle_rw = 0;
 VAR_9->tcp_check_nb_connect = 0;







 VAR_9->callback = VAR_7;
 VAR_9->cb_arg = VAR_8;

 VAR_10 = VAR_0 | VAR_1;
 VAR_9->ev->ev = FUNC_6(VAR_4->eb->base, VAR_9->fd, VAR_10,
  VAR_3, VAR_9);
 if(VAR_9->ev->ev == ((void*)0)) {
  FUNC_2("could not baseset localhdl event");
  FUNC_1(VAR_9->ev);
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 if (FUNC_4(VAR_9->ev->ev, VAR_9->timeout) != 0) {
  FUNC_2("could not add localhdl event");
  FUNC_5(VAR_9->ev->ev);
  FUNC_1(VAR_9->ev);
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 return VAR_9;
}
