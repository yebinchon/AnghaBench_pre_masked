
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_req_info {scalar_t__ num_open_req; scalar_t__ num_done_req; int read_again; TYPE_1__* cp; int read_is_closed; } ;
struct TYPE_4__ {scalar_t__ tcp_byte_count; int tcp_is_reading; int tcp_timeout_msec; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(struct tcp_req_info* VAR_1)
{
 int VAR_2 = 0;
 int VAR_3 = 0;

 if(VAR_1->cp->tcp_byte_count != 0) {

  return;
 }

 if(!VAR_1->cp->tcp_is_reading)
  VAR_2 = 1;
 if(VAR_1->num_open_req + VAR_1->num_done_req < VAR_0 &&
  !VAR_1->read_is_closed)
  VAR_3 = 1;

 if(VAR_2) {
  VAR_1->cp->tcp_is_reading = 0;
  FUNC_2(VAR_1->cp);
  FUNC_1(VAR_1->cp, -1,
   VAR_1->cp->tcp_timeout_msec);
 } else if(VAR_3) {
  VAR_1->cp->tcp_is_reading = 1;
  FUNC_2(VAR_1->cp);
  FUNC_1(VAR_1->cp, -1,
   VAR_1->cp->tcp_timeout_msec);



  VAR_1->read_again = 1;
 } else {
  FUNC_2(VAR_1->cp);
  FUNC_1(VAR_1->cp, -1,
   VAR_1->cp->tcp_timeout_msec);
  FUNC_0(VAR_1->cp, 0, 0);
 }
}
