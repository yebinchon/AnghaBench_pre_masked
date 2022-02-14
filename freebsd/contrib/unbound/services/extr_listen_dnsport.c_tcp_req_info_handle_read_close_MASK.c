
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_req_info {scalar_t__ num_done_req; scalar_t__ num_open_req; int read_is_closed; TYPE_1__* cp; } ;
struct TYPE_2__ {scalar_t__ tcp_byte_count; int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcp_req_info*) ;
 int FUNC_1 (struct tcp_req_info*) ;
 int FUNC_2 (int ,char*,int ) ;

int
FUNC_3(struct tcp_req_info* VAR_1)
{
 FUNC_2(VAR_0, "tcp channel read side closed %d", VAR_1->cp->fd);

 VAR_1->cp->tcp_byte_count = 0;

 if(VAR_1->num_done_req != 0) {
  FUNC_1(VAR_1);
  FUNC_0(VAR_1);
  return 1;
 }

 if(VAR_1->num_open_req == 0 && VAR_1->num_done_req == 0)
  return 0;

 VAR_1->read_is_closed = 1;
 FUNC_0(VAR_1);
 return 1;
}
