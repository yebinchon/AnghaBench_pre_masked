
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {scalar_t__ type; int tcp_is_reading; scalar_t__ tcp_req_info; scalar_t__ tcp_byte_count; scalar_t__ tcp_do_toggle_rw; int buffer; } ;


 int FUNC_0 (struct comm_point*,int,int) ;
 int FUNC_1 (struct comm_point*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct comm_point* VAR_1)
{
 FUNC_2(VAR_1->type == VAR_0);
 FUNC_3(VAR_1->buffer);
 if(VAR_1->tcp_do_toggle_rw)
  VAR_1->tcp_is_reading = 1;
 VAR_1->tcp_byte_count = 0;

 if(VAR_1->tcp_req_info) {
  FUNC_4(VAR_1->tcp_req_info);
 } else {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1, -1, -1);
 }
}
