
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int addrlen; int addr; } ;
struct comm_point {scalar_t__ type; int fd; int max_tcp_count; int cur_tcp_count; struct comm_point* tcp_free; scalar_t__ ssl; int ssl_shake_state; TYPE_3__ repinfo; TYPE_2__* ev; } ;
struct TYPE_8__ {TYPE_1__* eb; } ;
struct TYPE_6__ {int ev; TYPE_4__* base; } ;
struct TYPE_5__ {int base; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_0 (struct comm_point*) ;
 int FUNC_1 (struct comm_point*,int *,int *) ;
 int FUNC_2 (struct comm_point*) ;
 int VAR_3 ;
 int FUNC_3 (struct comm_point*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct comm_point*,int,int ,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int,short,int ,struct comm_point*) ;

void
FUNC_12(int VAR_6, short VAR_7, void* VAR_8)
{
 struct comm_point* VAR_9 = (struct comm_point*)VAR_8, *VAR_10;
 int VAR_11;
 FUNC_5(VAR_9->type == VAR_5);
 if(!(VAR_7 & VAR_1)) {
  FUNC_6("ignoring tcp accept event %d", (int)VAR_7);
  return;
 }
 FUNC_9(VAR_9->ev->base);

 if(!VAR_9->tcp_free) {
  FUNC_7("accepted too many tcp, connections full");
  return;
 }

 VAR_10 = VAR_9->tcp_free;


 FUNC_10(VAR_10->ev->ev);
 VAR_10->ev->ev = FUNC_11(VAR_10->ev->base->eb->base, -1, VAR_0 | VAR_1 | VAR_2, VAR_3, VAR_10);
 if(!VAR_10->ev->ev) {
  FUNC_7("could not ub_event_new, dropped tcp");
  return;
 }
 FUNC_5(VAR_6 != -1);
 (void)VAR_6;
 VAR_11 = FUNC_1(VAR_9, &VAR_10->repinfo.addr,
  &VAR_10->repinfo.addrlen);
 if(VAR_11 == -1)
  return;
 if(VAR_9->ssl) {
  VAR_10->ssl = FUNC_4(VAR_9->ssl, VAR_11);
  if(!VAR_10->ssl) {
   VAR_10->fd = VAR_11;
   FUNC_0(VAR_10);
   return;
  }
  VAR_10->ssl_shake_state = VAR_4;



 }


 VAR_9->cur_tcp_count++;
 VAR_9->tcp_free = VAR_10->tcp_free;
 if(!VAR_9->tcp_free) {

  FUNC_2(VAR_9);
 }
 FUNC_8(VAR_10, VAR_11, VAR_9->cur_tcp_count, VAR_9->max_tcp_count);
}
