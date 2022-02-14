
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct TYPE_4__ {int mesh; } ;
struct worker {TYPE_1__ env; int stats; } ;
struct query_info {int dummy; } ;
struct comm_reply {TYPE_2__* c; } ;
struct TYPE_6__ {int spool_buffer; } ;
struct TYPE_5__ {int buffer; TYPE_3__* tcp_req_info; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct comm_reply*) ;
 int FUNC_1 (int ,struct query_info*,int ,scalar_t__) ;
 int FUNC_2 (int *,struct worker*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct worker* VAR_1, struct query_info* VAR_2,
 uint16_t VAR_3, struct comm_reply* VAR_4, time_t VAR_5)
{


 if(FUNC_4(VAR_4->c->buffer) != 0) {
  if(VAR_4->c->tcp_req_info) {
   FUNC_3(
    VAR_4->c->tcp_req_info->spool_buffer,
    VAR_4->c->buffer);
  }
  FUNC_0(VAR_4);
 }
 FUNC_2(&VAR_1->stats, VAR_1);





 FUNC_1(VAR_1->env.mesh, VAR_2, VAR_3, VAR_5 +
  VAR_0);
}
