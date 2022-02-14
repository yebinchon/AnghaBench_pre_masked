
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_req_info {int is_reply; TYPE_1__* cp; int spool_buffer; scalar_t__ in_worker_handle; } ;
struct TYPE_3__ {scalar_t__ tcp_byte_count; int repinfo; int tcp_timeout_msec; scalar_t__ tcp_is_reading; int buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct tcp_req_info*,int ,int ) ;
 int FUNC_9 (struct tcp_req_info*,int ,int ) ;

void
FUNC_10(struct tcp_req_info* VAR_0)
{
 if(VAR_0->in_worker_handle) {



  FUNC_4(VAR_0->cp->buffer);
  FUNC_7(VAR_0->cp->buffer,
   FUNC_3(VAR_0->spool_buffer),
   FUNC_6(VAR_0->spool_buffer));
  FUNC_5(VAR_0->cp->buffer);
  VAR_0->is_reply = 1;
  return;
 }






 if(VAR_0->cp->tcp_is_reading && VAR_0->cp->tcp_byte_count == 0) {


  FUNC_9(VAR_0,
   FUNC_3(VAR_0->spool_buffer),
   FUNC_6(VAR_0->spool_buffer));

  FUNC_2(VAR_0->cp);
  FUNC_1(VAR_0->cp, -1,
   VAR_0->cp->tcp_timeout_msec);
  return;
 }

 if(!FUNC_8(VAR_0, FUNC_3(VAR_0->spool_buffer),
  FUNC_6(VAR_0->spool_buffer))) {

  FUNC_0(&VAR_0->cp->repinfo);
 }
}
