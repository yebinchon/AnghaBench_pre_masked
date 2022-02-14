
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int addr; } ;
struct ds_qp {TYPE_4__* cm_id; TYPE_2__* rs; TYPE_1__ dest; struct ds_qp* rbuf; scalar_t__ rmr; scalar_t__ smr; } ;
struct TYPE_9__ {TYPE_3__* recv_cq_channel; scalar_t__ qp; } ;
struct TYPE_8__ {int fd; } ;
struct TYPE_7__ {int epfd; int dest_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (struct ds_qp*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct ds_qp *VAR_2)
{
 if (VAR_2->smr)
  FUNC_2(VAR_2->smr);

 if (VAR_2->rbuf) {
  if (VAR_2->rmr)
   FUNC_2(VAR_2->rmr);
  FUNC_1(VAR_2->rbuf);
 }

 if (VAR_2->cm_id) {
  if (VAR_2->cm_id->qp) {
   FUNC_5(&VAR_2->dest.addr, &VAR_2->rs->dest_map, VAR_1);
   FUNC_0(VAR_2->rs->epfd, VAR_0,
      VAR_2->cm_id->recv_cq_channel->fd, ((void*)0));
   FUNC_4(VAR_2->cm_id);
  }
  FUNC_3(VAR_2->cm_id);
 }

 FUNC_1(VAR_2);
}
