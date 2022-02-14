
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct timeval* c; } ;
struct timeval {int fd; int tcp_do_close; int tcp_do_toggle_rw; struct timeval* ev; struct timeval* timeout; scalar_t__ buffer; TYPE_3__* tcp_req_info; struct timeval* tcp_free; void* cb_arg; int * callback; TYPE_1__ repinfo; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ do_not_close; int type; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; scalar_t__ tcp_keepalive; int * tcl_addr; int tcp_conn_limit; int tcp_timeout_msec; struct timeval* tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; struct comm_base* base; } ;
struct sldns_buffer {int dummy; } ;
struct internal_event {int fd; int tcp_do_close; int tcp_do_toggle_rw; struct internal_event* ev; struct internal_event* timeout; scalar_t__ buffer; TYPE_3__* tcp_req_info; struct internal_event* tcp_free; void* cb_arg; int * callback; TYPE_1__ repinfo; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ do_not_close; int type; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; scalar_t__ tcp_keepalive; int * tcl_addr; int tcp_conn_limit; int tcp_timeout_msec; struct internal_event* tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; struct comm_base* base; } ;
struct comm_point {int fd; int tcp_do_close; int tcp_do_toggle_rw; struct comm_point* ev; struct comm_point* timeout; scalar_t__ buffer; TYPE_3__* tcp_req_info; struct comm_point* tcp_free; void* cb_arg; int * callback; TYPE_1__ repinfo; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ do_not_close; int type; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; scalar_t__ tcp_keepalive; int * tcl_addr; int tcp_conn_limit; int tcp_timeout_msec; struct comm_point* tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; struct comm_base* base; } ;
struct comm_base {TYPE_2__* eb; } ;
typedef int comm_point_callback_type ;
struct TYPE_7__ {struct timeval* cp; } ;
struct TYPE_6__ {int base; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct timeval*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (size_t) ;
 TYPE_3__* FUNC_6 (struct sldns_buffer*) ;
 int FUNC_7 (TYPE_3__*) ;
 struct timeval* FUNC_8 (int ,int,short,int ,struct timeval*) ;

__attribute__((used)) static struct comm_point*
FUNC_9(struct comm_base *VAR_5,
 struct comm_point* VAR_6, size_t VAR_7,
 struct sldns_buffer* VAR_8, comm_point_callback_type* VAR_9,
 void* VAR_10)
{
 struct comm_point* VAR_11 = (struct comm_point*)FUNC_0(1,
  sizeof(struct comm_point));
 short VAR_12;
 if(!VAR_11)
  return ((void*)0);
 VAR_11->ev = (struct internal_event*)FUNC_0(1,
  sizeof(struct internal_event));
 if(!VAR_11->ev) {
  FUNC_1(VAR_11);
  return ((void*)0);
 }
 VAR_11->ev->base = VAR_5;
 VAR_11->fd = -1;
 VAR_11->buffer = FUNC_5(VAR_7);
 if(!VAR_11->buffer) {
  FUNC_1(VAR_11->ev);
  FUNC_1(VAR_11);
  return ((void*)0);
 }
 VAR_11->timeout = (struct timeval*)FUNC_3(sizeof(struct timeval));
 if(!VAR_11->timeout) {
  FUNC_4(VAR_11->buffer);
  FUNC_1(VAR_11->ev);
  FUNC_1(VAR_11);
  return ((void*)0);
 }
 VAR_11->tcp_is_reading = 0;
 VAR_11->tcp_byte_count = 0;
 VAR_11->tcp_parent = VAR_6;
 VAR_11->tcp_timeout_msec = VAR_6->tcp_timeout_msec;
 VAR_11->tcp_conn_limit = VAR_6->tcp_conn_limit;
 VAR_11->tcl_addr = ((void*)0);
 VAR_11->tcp_keepalive = 0;
 VAR_11->max_tcp_count = 0;
 VAR_11->cur_tcp_count = 0;
 VAR_11->tcp_handlers = ((void*)0);
 VAR_11->tcp_free = ((void*)0);
 VAR_11->type = VAR_4;
 VAR_11->tcp_do_close = 0;
 VAR_11->do_not_close = 0;
 VAR_11->tcp_do_toggle_rw = 1;
 VAR_11->tcp_check_nb_connect = 0;
 VAR_11->repinfo.c = VAR_11;
 VAR_11->callback = VAR_9;
 VAR_11->cb_arg = VAR_10;
 if(VAR_8) {
  VAR_11->tcp_req_info = FUNC_6(VAR_8);
  if(!VAR_11->tcp_req_info) {
   FUNC_2("could not create tcp commpoint");
   FUNC_4(VAR_11->buffer);
   FUNC_1(VAR_11->timeout);
   FUNC_1(VAR_11->ev);
   FUNC_1(VAR_11);
   return ((void*)0);
  }
  VAR_11->tcp_req_info->cp = VAR_11;
  VAR_11->tcp_do_close = 1;
  VAR_11->tcp_do_toggle_rw = 0;
 }

 VAR_11->tcp_free = VAR_6->tcp_free;
 VAR_6->tcp_free = VAR_11;

 VAR_12 = VAR_0 | VAR_1 | VAR_2;
 VAR_11->ev->ev = FUNC_8(VAR_5->eb->base, VAR_11->fd, VAR_12,
  VAR_3, VAR_11);
 if(VAR_11->ev->ev == ((void*)0))
 {
  FUNC_2("could not basetset tcphdl event");
  VAR_6->tcp_free = VAR_11->tcp_free;
  FUNC_7(VAR_11->tcp_req_info);
  FUNC_4(VAR_11->buffer);
  FUNC_1(VAR_11->timeout);
  FUNC_1(VAR_11->ev);
  FUNC_1(VAR_11);
  return ((void*)0);
 }
 return VAR_11;
}
