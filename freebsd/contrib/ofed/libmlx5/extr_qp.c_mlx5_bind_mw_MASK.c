
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ibv_mw_bind_info {int mw_access_flags; TYPE_3__* mr; scalar_t__ length; scalar_t__ addr; } ;
struct TYPE_4__ {int rkey; struct ibv_mw* mw; struct ibv_mw_bind_info bind_info; } ;
struct ibv_send_wr {TYPE_1__ bind_mw; int send_flags; int wr_id; int * next; int opcode; } ;
struct ibv_qp {int dummy; } ;
struct ibv_mw_bind {struct ibv_mw_bind_info bind_info; int send_flags; int wr_id; } ;
struct ibv_mw {scalar_t__ pd; int rkey; } ;
struct TYPE_6__ {scalar_t__ pd; } ;
struct TYPE_5__ {int alloc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ibv_qp*,struct ibv_send_wr*,struct ibv_send_wr**) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_3__*) ;

int FUNC_3(struct ibv_qp *VAR_5, struct ibv_mw *VAR_6,
   struct ibv_mw_bind *VAR_7)
{
 struct ibv_mw_bind_info *VAR_8 = &VAR_7->bind_info;
 struct ibv_send_wr VAR_9 = {};
 struct ibv_send_wr *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_8->mr && (VAR_8->addr || VAR_8->length)) {
  VAR_4 = VAR_0;
  return VAR_4;
 }

 if (VAR_8->mw_access_flags & VAR_2) {
  VAR_4 = VAR_0;
  return VAR_4;
 }

 if (VAR_8->mr) {
  if (FUNC_2(VAR_8->mr)->alloc_flags & VAR_2) {
   VAR_4 = VAR_0;
   return VAR_4;
  }

  if (VAR_6->pd != VAR_8->mr->pd) {
   VAR_4 = VAR_1;
   return VAR_4;
  }
 }

 VAR_9.opcode = VAR_3;
 VAR_9.next = ((void*)0);
 VAR_9.wr_id = VAR_7->wr_id;
 VAR_9.send_flags = VAR_7->send_flags;
 VAR_9.bind_mw.bind_info = VAR_7->bind_info;
 VAR_9.bind_mw.mw = VAR_6;
 VAR_9.bind_mw.rkey = FUNC_1(VAR_6->rkey);

 VAR_11 = FUNC_0(VAR_5, &VAR_9, &VAR_10);
 if (VAR_11)
  return VAR_11;

 VAR_6->rkey = VAR_9.bind_mw.rkey;

 return 0;
}
