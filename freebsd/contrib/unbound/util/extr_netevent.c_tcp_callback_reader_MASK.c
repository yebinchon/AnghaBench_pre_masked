
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {scalar_t__ type; int tcp_timeout_msec; int repinfo; int cb_arg; scalar_t__ (* callback ) (struct comm_point*,int ,int ,int *) ;scalar_t__ tcp_req_info; scalar_t__ tcp_byte_count; scalar_t__ tcp_is_reading; scalar_t__ tcp_do_toggle_rw; int buffer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct comm_point*,int,int ) ;
 int FUNC_1 (struct comm_point*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__ (*) (struct comm_point*,int ,int ,int *)) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct comm_point*,int ,int ,int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void
FUNC_8(struct comm_point* VAR_3)
{
 FUNC_4(VAR_3->type == VAR_2 || VAR_3->type == VAR_1);
 FUNC_5(VAR_3->buffer);
 if(VAR_3->tcp_do_toggle_rw)
  VAR_3->tcp_is_reading = 0;
 VAR_3->tcp_byte_count = 0;
 if(VAR_3->tcp_req_info) {
  FUNC_7(VAR_3->tcp_req_info);
 } else {
  if(VAR_3->type == VAR_2)
   FUNC_1(VAR_3);
  FUNC_2(FUNC_3(VAR_3->callback));
  if( (*VAR_3->callback)(VAR_3, VAR_3->cb_arg, VAR_0, &VAR_3->repinfo) ) {
   FUNC_0(VAR_3, -1, VAR_3->tcp_timeout_msec);
  }
 }
}
