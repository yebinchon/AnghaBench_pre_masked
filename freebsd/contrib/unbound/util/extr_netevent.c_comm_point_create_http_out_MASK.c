
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct internal_event* c; } ;
struct internal_event {int fd; int tcp_do_toggle_rw; int tcp_check_nb_connect; int http_in_headers; int tcp_do_fastopen; struct internal_event* ev; scalar_t__ buffer; int ssl; void* cb_arg; int * callback; TYPE_1__ repinfo; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; int * http_temp; scalar_t__ http_is_chunked; scalar_t__ http_in_chunk_headers; scalar_t__ do_not_close; scalar_t__ tcp_do_close; int type; int * tcp_free; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; int * tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; int * timeout; struct comm_base* base; } ;
struct comm_point {int fd; int tcp_do_toggle_rw; int tcp_check_nb_connect; int http_in_headers; int tcp_do_fastopen; struct comm_point* ev; scalar_t__ buffer; int ssl; void* cb_arg; int * callback; TYPE_1__ repinfo; scalar_t__ dnscrypt_buffer; scalar_t__ dnscrypt; int * http_temp; scalar_t__ http_is_chunked; scalar_t__ http_in_chunk_headers; scalar_t__ do_not_close; scalar_t__ tcp_do_close; int type; int * tcp_free; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; int * tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; int * timeout; struct comm_base* base; } ;
struct comm_base {TYPE_2__* eb; } ;
typedef int sldns_buffer ;
typedef int comm_point_callback_type ;
struct TYPE_4__ {int base; } ;


 int FUNC_0 (int ) ;
 short VAR_0 ;
 short VAR_1 ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct internal_event*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (size_t) ;
 struct internal_event* FUNC_6 (int ,int,short,int ,struct internal_event*) ;

struct comm_point*
FUNC_7(struct comm_base *VAR_4, size_t VAR_5,
        comm_point_callback_type* VAR_6, void* VAR_7,
 sldns_buffer* VAR_8)
{
 struct comm_point* VAR_9 = (struct comm_point*)FUNC_1(1,
  sizeof(struct comm_point));
 short VAR_10;
 if(!VAR_9)
  return ((void*)0);
 VAR_9->ev = (struct internal_event*)FUNC_1(1,
  sizeof(struct internal_event));
 if(!VAR_9->ev) {
  FUNC_2(VAR_9);
  return ((void*)0);
 }
 VAR_9->ev->base = VAR_4;
 VAR_9->fd = -1;
 VAR_9->buffer = FUNC_5(VAR_5);
 if(!VAR_9->buffer) {
  FUNC_2(VAR_9->ev);
  FUNC_2(VAR_9);
  return ((void*)0);
 }
 VAR_9->timeout = ((void*)0);
 VAR_9->tcp_is_reading = 0;
 VAR_9->tcp_byte_count = 0;
 VAR_9->tcp_parent = ((void*)0);
 VAR_9->max_tcp_count = 0;
 VAR_9->cur_tcp_count = 0;
 VAR_9->tcp_handlers = ((void*)0);
 VAR_9->tcp_free = ((void*)0);
 VAR_9->type = VAR_2;
 VAR_9->tcp_do_close = 0;
 VAR_9->do_not_close = 0;
 VAR_9->tcp_do_toggle_rw = 1;
 VAR_9->tcp_check_nb_connect = 1;
 VAR_9->http_in_headers = 1;
 VAR_9->http_in_chunk_headers = 0;
 VAR_9->http_is_chunked = 0;
 VAR_9->http_temp = VAR_8;







 VAR_9->repinfo.c = VAR_9;
 VAR_9->callback = VAR_6;
 VAR_9->cb_arg = VAR_7;
 VAR_10 = VAR_0 | VAR_1;
 VAR_9->ev->ev = FUNC_6(VAR_4->eb->base, VAR_9->fd, VAR_10,
  VAR_3, VAR_9);
 if(VAR_9->ev->ev == ((void*)0))
 {
  FUNC_3("could not baseset tcpout event");



  FUNC_4(VAR_9->buffer);
  FUNC_2(VAR_9->ev);
  FUNC_2(VAR_9);
  return ((void*)0);
 }

 return VAR_9;
}
