
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcl_list {int dummy; } ;
struct sldns_buffer {int dummy; } ;
struct internal_event {int fd; int tcp_timeout_msec; int max_tcp_count; struct internal_event** tcp_handlers; int * timeout; struct internal_event* ev; int * cb_arg; int * callback; int * dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ tcp_do_toggle_rw; scalar_t__ do_not_close; scalar_t__ tcp_do_close; int type; int * tcp_free; scalar_t__ cur_tcp_count; int * tcp_parent; scalar_t__ tcp_keepalive; int * tcl_addr; struct tcl_list* tcp_conn_limit; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; int * buffer; struct comm_base* base; } ;
struct comm_point {int fd; int tcp_timeout_msec; int max_tcp_count; struct comm_point** tcp_handlers; int * timeout; struct comm_point* ev; int * cb_arg; int * callback; int * dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ tcp_do_toggle_rw; scalar_t__ do_not_close; scalar_t__ tcp_do_close; int type; int * tcp_free; scalar_t__ cur_tcp_count; int * tcp_parent; scalar_t__ tcp_keepalive; int * tcl_addr; struct tcl_list* tcp_conn_limit; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; int * buffer; struct comm_base* base; } ;
struct comm_base {TYPE_1__* eb; } ;
typedef int comm_point_callback_type ;
struct TYPE_2__ {int base; } ;


 short VAR_0 ;
 short VAR_1 ;
 scalar_t__ FUNC_0 (size_t,int) ;
 struct internal_event* FUNC_1 (struct comm_base*,struct internal_event*,size_t,struct sldns_buffer*,int *,void*) ;
 int FUNC_2 (struct internal_event*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct internal_event*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (struct internal_event*,int *) ;
 struct internal_event* FUNC_6 (int ,int,short,int ,struct internal_event*) ;

struct comm_point*
FUNC_7(struct comm_base *VAR_4, int VAR_5, int VAR_6,
 int VAR_7, struct tcl_list* VAR_8, size_t VAR_9,
 struct sldns_buffer* VAR_10, comm_point_callback_type* VAR_11,
 void* VAR_12)
{
 struct comm_point* VAR_13 = (struct comm_point*)FUNC_0(1,
  sizeof(struct comm_point));
 short VAR_14;
 int VAR_15;

 if(!VAR_13)
  return ((void*)0);
 VAR_13->ev = (struct internal_event*)FUNC_0(1,
  sizeof(struct internal_event));
 if(!VAR_13->ev) {
  FUNC_3(VAR_13);
  return ((void*)0);
 }
 VAR_13->ev->base = VAR_4;
 VAR_13->fd = VAR_5;
 VAR_13->buffer = ((void*)0);
 VAR_13->timeout = ((void*)0);
 VAR_13->tcp_is_reading = 0;
 VAR_13->tcp_byte_count = 0;
 VAR_13->tcp_timeout_msec = VAR_7;
 VAR_13->tcp_conn_limit = VAR_8;
 VAR_13->tcl_addr = ((void*)0);
 VAR_13->tcp_keepalive = 0;
 VAR_13->tcp_parent = ((void*)0);
 VAR_13->max_tcp_count = VAR_6;
 VAR_13->cur_tcp_count = 0;
 VAR_13->tcp_handlers = (struct comm_point**)FUNC_0((size_t)VAR_6,
  sizeof(struct comm_point*));
 if(!VAR_13->tcp_handlers) {
  FUNC_3(VAR_13->ev);
  FUNC_3(VAR_13);
  return ((void*)0);
 }
 VAR_13->tcp_free = ((void*)0);
 VAR_13->type = VAR_3;
 VAR_13->tcp_do_close = 0;
 VAR_13->do_not_close = 0;
 VAR_13->tcp_do_toggle_rw = 0;
 VAR_13->tcp_check_nb_connect = 0;







 VAR_13->callback = ((void*)0);
 VAR_13->cb_arg = ((void*)0);
 VAR_14 = VAR_1 | VAR_0;

 VAR_13->ev->ev = FUNC_6(VAR_4->eb->base, VAR_13->fd, VAR_14,
  VAR_2, VAR_13);
 if(VAR_13->ev->ev == ((void*)0)) {
  FUNC_4("could not baseset tcpacc event");
  FUNC_2(VAR_13);
  return ((void*)0);
 }
 if (FUNC_5(VAR_13->ev->ev, VAR_13->timeout) != 0) {
  FUNC_4("could not add tcpacc event");
  FUNC_2(VAR_13);
  return ((void*)0);
 }

 for(VAR_15=0; VAR_15<VAR_6; VAR_15++) {
  VAR_13->tcp_handlers[VAR_15] = FUNC_1(VAR_4,
   VAR_13, VAR_9, VAR_10, VAR_11, VAR_12);
  if(!VAR_13->tcp_handlers[VAR_15]) {
   FUNC_2(VAR_13);
   return ((void*)0);
  }
 }

 return VAR_13;
}
