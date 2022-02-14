
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_req_info {int in_worker_handle; scalar_t__ is_reply; scalar_t__ is_drop; int spool_buffer; struct comm_point* cp; } ;
struct comm_point {int buffer; int tcp_timeout_msec; scalar_t__ tcp_is_reading; int repinfo; int cb_arg; scalar_t__ (* callback ) (struct comm_point*,int ,int ,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct comm_point*,int,int ) ;
 int FUNC_1 (struct comm_point*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__ (*) (struct comm_point*,int ,int ,int *)) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct comm_point*,int ,int ,int *) ;
 int FUNC_7 (struct tcp_req_info*) ;
 int FUNC_8 (struct tcp_req_info*) ;

void
FUNC_9(struct tcp_req_info* VAR_1)
{
 struct comm_point* VAR_2 = VAR_1->cp;




 VAR_1->is_drop = 0;
 VAR_1->is_reply = 0;
 VAR_1->in_worker_handle = 1;
 FUNC_5(VAR_1->spool_buffer, 0);




 FUNC_2(FUNC_3(VAR_2->callback));
 if( (*VAR_2->callback)(VAR_2, VAR_2->cb_arg, VAR_0, &VAR_2->repinfo) ) {
  VAR_1->in_worker_handle = 0;




 send_it:
  VAR_2->tcp_is_reading = 0;
  FUNC_1(VAR_2);
  FUNC_0(VAR_2, -1, VAR_2->tcp_timeout_msec);
  return;
 }
 VAR_1->in_worker_handle = 0;



 if(VAR_1->is_drop) {

  return;
 }


 if(VAR_1->is_reply) {
  goto send_it;
 }

 FUNC_4(VAR_2->buffer);

 FUNC_8(VAR_1);



 FUNC_7(VAR_1);
}
