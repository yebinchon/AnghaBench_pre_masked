
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct internal_event {int fd; int do_not_close; struct internal_event* ev; int * timeout; void* cb_arg; int * callback; int * buffer; int * dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ tcp_do_toggle_rw; scalar_t__ tcp_do_close; int type; int * tcp_free; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; int * tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; struct comm_base* base; } ;
struct comm_point {int fd; int do_not_close; struct comm_point* ev; int * timeout; void* cb_arg; int * callback; int * buffer; int * dnscrypt_buffer; scalar_t__ dnscrypt; scalar_t__ tcp_do_fastopen; scalar_t__ tcp_check_nb_connect; scalar_t__ tcp_do_toggle_rw; scalar_t__ tcp_do_close; int type; int * tcp_free; int * tcp_handlers; scalar_t__ cur_tcp_count; scalar_t__ max_tcp_count; int * tcp_parent; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; struct comm_base* base; } ;
struct comm_base {TYPE_1__* eb; } ;
typedef int comm_point_callback_type ;
struct TYPE_2__ {int base; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct internal_event*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (struct internal_event*,int *) ;
 int FUNC_4 (struct internal_event*) ;
 struct internal_event* FUNC_5 (int ,int,short,int ,struct internal_event*) ;

struct comm_point*
FUNC_6(struct comm_base* VAR_5, int VAR_6, int VAR_7,
 comm_point_callback_type* VAR_8, void* VAR_9)
{
 struct comm_point* VAR_10 = (struct comm_point*)FUNC_0(1,
  sizeof(struct comm_point));
 short VAR_11;
 if(!VAR_10)
  return ((void*)0);
 VAR_10->ev = (struct internal_event*)FUNC_0(1,
  sizeof(struct internal_event));
 if(!VAR_10->ev) {
  FUNC_1(VAR_10);
  return ((void*)0);
 }
 VAR_10->ev->base = VAR_5;
 VAR_10->fd = VAR_6;
 VAR_10->buffer = ((void*)0);
 VAR_10->timeout = ((void*)0);
 VAR_10->tcp_is_reading = 0;
 VAR_10->tcp_byte_count = 0;
 VAR_10->tcp_parent = ((void*)0);
 VAR_10->max_tcp_count = 0;
 VAR_10->cur_tcp_count = 0;
 VAR_10->tcp_handlers = ((void*)0);
 VAR_10->tcp_free = ((void*)0);
 VAR_10->type = VAR_4;
 VAR_10->tcp_do_close = 0;
 VAR_10->do_not_close = 1;
 VAR_10->tcp_do_toggle_rw = 0;
 VAR_10->tcp_check_nb_connect = 0;







 VAR_10->callback = VAR_8;
 VAR_10->cb_arg = VAR_9;

 if(VAR_7)
  VAR_11 = VAR_0 | VAR_2;
 else VAR_11 = VAR_0 | VAR_1;
 VAR_10->ev->ev = FUNC_5(VAR_5->eb->base, VAR_10->fd, VAR_11,
  VAR_3, VAR_10);
 if(VAR_10->ev->ev == ((void*)0)) {
  FUNC_2("could not baseset rawhdl event");
  FUNC_1(VAR_10->ev);
  FUNC_1(VAR_10);
  return ((void*)0);
 }
 if (FUNC_3(VAR_10->ev->ev, VAR_10->timeout) != 0) {
  FUNC_2("could not add rawhdl event");
  FUNC_4(VAR_10->ev->ev);
  FUNC_1(VAR_10->ev);
  FUNC_1(VAR_10);
  return ((void*)0);
 }
 return VAR_10;
}
