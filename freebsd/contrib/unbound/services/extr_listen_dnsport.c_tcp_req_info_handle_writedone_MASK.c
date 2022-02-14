
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_req_info {scalar_t__ num_done_req; TYPE_1__* cp; scalar_t__ read_is_closed; } ;
struct TYPE_2__ {int tcp_is_reading; int repinfo; int buffer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tcp_req_info*) ;
 int FUNC_3 (struct tcp_req_info*) ;

void
FUNC_4(struct tcp_req_info* VAR_0)
{

 FUNC_1(VAR_0->cp->buffer);
 if(VAR_0->num_done_req == 0 && VAR_0->read_is_closed) {

  FUNC_0(&VAR_0->cp->repinfo);
  return;
 }
 VAR_0->cp->tcp_is_reading = 1;

 FUNC_3(VAR_0);




 FUNC_2(VAR_0);
}
