
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comm_point {scalar_t__ type; scalar_t__ ssl_shake_state; int tcp_is_reading; scalar_t__ tcp_byte_count; scalar_t__ tcp_do_toggle_rw; int buffer; scalar_t__ ssl; scalar_t__ tcp_check_nb_connect; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comm_point*,int,int) ;
 int FUNC_1 (struct comm_point*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,struct comm_point*) ;
 int FUNC_3 (int,struct comm_point*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct comm_point*) ;
 int FUNC_8 (struct comm_point*) ;

__attribute__((used)) static int
FUNC_9(int VAR_2, struct comm_point* VAR_3)
{
 FUNC_4(VAR_3->type == VAR_0);
 FUNC_4(VAR_2 != -1);



 if(VAR_3->tcp_check_nb_connect) {
  int VAR_4 = FUNC_2(VAR_2, VAR_3);
  if(VAR_4 == 0) return 0;
  if(VAR_4 == 1) return 1;
  VAR_3->tcp_check_nb_connect = 0;
 }
 if(VAR_3->tcp_is_reading)
  return 1;

 if(VAR_3->ssl) {
  if(!FUNC_8(VAR_3))
   return 0;
 } else {
  if(!FUNC_3(VAR_2, VAR_3))
   return 0;
 }




 if(FUNC_6(VAR_3->buffer) == 0) {
  FUNC_5(VAR_3->buffer);
  if(VAR_3->tcp_do_toggle_rw)
   VAR_3->tcp_is_reading = 1;
  VAR_3->tcp_byte_count = 0;

  FUNC_1(VAR_3);
  FUNC_0(VAR_3, -1, -1);
 }
 return 1;
}
