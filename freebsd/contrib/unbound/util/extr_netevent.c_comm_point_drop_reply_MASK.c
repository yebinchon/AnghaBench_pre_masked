
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct comm_reply {TYPE_2__* c; } ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__* tcp_req_info; } ;
struct TYPE_3__ {int is_drop; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(struct comm_reply* VAR_2)
{
 if(!VAR_2)
  return;
 FUNC_0(VAR_2 && VAR_2->c);
 FUNC_0(VAR_2->c->type != VAR_0);
 if(VAR_2->c->type == VAR_1)
  return;
 if(VAR_2->c->tcp_req_info)
  VAR_2->c->tcp_req_info->is_drop = 1;
 FUNC_1(VAR_2->c);
}
