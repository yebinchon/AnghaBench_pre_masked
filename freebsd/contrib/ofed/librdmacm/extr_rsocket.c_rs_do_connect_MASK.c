
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct rsocket {int state; int opts; int fd_flags; scalar_t__ err; TYPE_7__* cm_id; int retries; int * optval; int optlen; } ;
struct rs_conn_private_data {int dummy; } ;
struct rs_conn_data {int version; } ;
struct rdma_conn_param {int flow_control; int retry_count; int rnr_retry_count; int initiator_depth; int private_data_len; void* private_data; } ;
struct TYPE_12__ {int dst_addr; } ;
struct TYPE_13__ {TYPE_1__ addr; } ;
struct TYPE_18__ {TYPE_6__* channel; TYPE_5__* event; TYPE_2__ route; } ;
struct TYPE_17__ {int fd; } ;
struct TYPE_14__ {scalar_t__ private_data; } ;
struct TYPE_15__ {TYPE_3__ conn; } ;
struct TYPE_16__ {TYPE_4__ param; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rdma_conn_param*,int ,int) ;
 int FUNC_4 (TYPE_7__*,struct rdma_conn_param*) ;
 int FUNC_5 (TYPE_7__*,int *,int *,int) ;
 int FUNC_6 (TYPE_7__*,int) ;
 int FUNC_7 (TYPE_7__*,int ,int ,int *,int ) ;


 int FUNC_8 (struct rsocket*) ;
 int VAR_13 ;
 void* VAR_14 ;

 int FUNC_9 (struct rsocket*) ;
 int FUNC_10 (struct rsocket*,struct rs_conn_data*) ;



 int FUNC_11 (struct rsocket*,struct rs_conn_data*) ;
 int FUNC_12 (TYPE_7__*) ;

__attribute__((used)) static int FUNC_13(struct rsocket *VAR_15)
{
 struct rdma_conn_param VAR_16;
 struct rs_conn_private_data VAR_17;
 struct rs_conn_data *VAR_18, *VAR_19;
 int VAR_20, VAR_21;

 switch (VAR_15->state) {
 case 130:
 case 132:
resolve_addr:
  VAR_20 = 1000 << VAR_15->retries++;
  VAR_21 = FUNC_5(VAR_15->cm_id, ((void*)0),
     &VAR_15->cm_id->route.addr.dst_addr, VAR_20);
  if (!VAR_21)
   goto resolve_route;
  if (VAR_12 == VAR_0 || VAR_12 == VAR_5)
   VAR_15->state = 129;
  break;
 case 129:
  VAR_21 = FUNC_12(VAR_15->cm_id);
  if (VAR_21) {
   if (VAR_12 == VAR_4 && VAR_15->retries <= VAR_10)
    goto resolve_addr;
   break;
  }

  VAR_15->retries = 0;
resolve_route:
  VAR_20 = 1000 << VAR_15->retries++;
  if (VAR_15->optval) {
   VAR_21 = FUNC_7(VAR_15->cm_id, VAR_8,
           VAR_9, VAR_15->optval,
           VAR_15->optlen);
   FUNC_2(VAR_15->optval);
   VAR_15->optval = ((void*)0);
   if (!VAR_21) {
    VAR_15->state = 128;
    goto resolving_route;
   }
  } else {
   VAR_21 = FUNC_6(VAR_15->cm_id, VAR_20);
   if (!VAR_21)
    goto do_connect;
  }
  if (VAR_12 == VAR_0 || VAR_12 == VAR_5)
   VAR_15->state = 128;
  break;
 case 128:
resolving_route:
  VAR_21 = FUNC_12(VAR_15->cm_id);
  if (VAR_21) {
   if (VAR_12 == VAR_4 && VAR_15->retries <= VAR_10)
    goto resolve_route;
   break;
  }
do_connect:
  VAR_21 = FUNC_9(VAR_15);
  if (VAR_21)
   break;

  FUNC_3(&VAR_16, 0, sizeof VAR_16);
  VAR_18 = (void *) &VAR_17 + FUNC_8(VAR_15);
  FUNC_10(VAR_15, VAR_18);
  VAR_16.private_data = (void *) VAR_18 - FUNC_8(VAR_15);
  VAR_16.private_data_len = sizeof(*VAR_18) + FUNC_8(VAR_15);
  VAR_16.flow_control = 1;
  VAR_16.retry_count = 7;
  VAR_16.rnr_retry_count = 7;

  if (VAR_15->opts & VAR_11)
   VAR_16.initiator_depth = 1;
  VAR_15->retries = 0;

  VAR_21 = FUNC_4(VAR_15->cm_id, &VAR_16);
  if (!VAR_21)
   goto connected;
  if (VAR_12 == VAR_0 || VAR_12 == VAR_5)
   VAR_15->state = 131;
  break;
 case 131:
  VAR_21 = FUNC_12(VAR_15->cm_id);
  if (VAR_21)
   break;
connected:
  VAR_19 = (struct rs_conn_data *) VAR_15->cm_id->event->param.conn.private_data;
  if (VAR_19->version != 1) {
   VAR_21 = FUNC_0(VAR_3);
   break;
  }

  FUNC_11(VAR_15, VAR_19);
  VAR_15->state = VAR_14;
  break;
 case 133:
  if (!(VAR_15->fd_flags & VAR_7))
   FUNC_1(VAR_15->cm_id->channel->fd, VAR_6, 0);

  VAR_21 = FUNC_12(VAR_15->cm_id);
  if (VAR_21)
   break;

  VAR_15->state = VAR_14;
  break;
 default:
  VAR_21 = FUNC_0(VAR_2);
  break;
 }

 if (VAR_21) {
  if (VAR_12 == VAR_0 || VAR_12 == VAR_5) {
   VAR_12 = VAR_1;
  } else {
   VAR_15->state = VAR_13;
   VAR_15->err = VAR_12;
  }
 }
 return VAR_21;
}
