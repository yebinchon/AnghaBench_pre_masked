
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rsocket {scalar_t__ type; scalar_t__ state; struct ds_qp* qp_list; int epfd; TYPE_3__* cm_id; } ;
struct ds_qp {TYPE_5__* cm_id; } ;
struct TYPE_10__ {TYPE_4__* recv_cq_channel; } ;
struct TYPE_9__ {int fd; } ;
struct TYPE_8__ {TYPE_2__* channel; TYPE_1__* recv_cq_channel; } ;
struct TYPE_7__ {int fd; } ;
struct TYPE_6__ {int fd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ds_qp* FUNC_0 (struct ds_qp*) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_2(struct rsocket *VAR_3, int VAR_4)
{
 struct ds_qp *VAR_5;
 int VAR_6 = 0;

 if (VAR_3->type == VAR_1) {
  if (VAR_3->cm_id->recv_cq_channel)
   VAR_6 = FUNC_1(VAR_3->cm_id->recv_cq_channel->fd, VAR_0, VAR_4);

  if (!VAR_6 && VAR_3->state < VAR_2)
   VAR_6 = FUNC_1(VAR_3->cm_id->channel->fd, VAR_0, VAR_4);
 } else {
  VAR_6 = FUNC_1(VAR_3->epfd, VAR_0, VAR_4);
  if (!VAR_6 && VAR_3->qp_list) {
   VAR_5 = VAR_3->qp_list;
   do {
    VAR_6 = FUNC_1(VAR_5->cm_id->recv_cq_channel->fd,
         VAR_0, VAR_4);
    VAR_5 = FUNC_0(VAR_5);
   } while (VAR_5 != VAR_3->qp_list && !VAR_6);
  }
 }

 return VAR_6;
}
