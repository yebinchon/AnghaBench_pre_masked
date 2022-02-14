
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct mthca_qp {int state; int mutex; int transport; TYPE_2__ sq; TYPE_1__ rq; } ;
struct TYPE_8__ {int rdb_shift; } ;
struct TYPE_7__ {scalar_t__ pkey_table_len; scalar_t__ num_ports; scalar_t__ max_qp_init_rdma; } ;
struct mthca_dev {TYPE_4__ qp_table; TYPE_3__ limits; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {int cur_qp_state; int qp_state; scalar_t__ pkey_index; scalar_t__ port_num; scalar_t__ max_rd_atomic; int max_dest_rd_atomic; } ;
struct ib_qp {int qp_type; int device; } ;
typedef enum ib_qp_state { ____Placeholder_ib_qp_state } ib_qp_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ib_qp*,struct ib_qp_attr*,int,int,int) ;
 int FUNC_1 (int,int,int ,int,int ) ;
 int FUNC_2 (struct mthca_dev*,char*,int,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct mthca_dev* FUNC_9 (int ) ;
 struct mthca_qp* FUNC_10 (struct ib_qp*) ;

int FUNC_11(struct ib_qp *VAR_9, struct ib_qp_attr *VAR_10, int VAR_11,
      struct ib_udata *VAR_12)
{
 struct mthca_dev *VAR_13 = FUNC_9(VAR_9->device);
 struct mthca_qp *VAR_14 = FUNC_10(VAR_9);
 enum ib_qp_state VAR_15, VAR_16;
 int VAR_17 = -VAR_0;

 FUNC_3(&VAR_14->mutex);
 if (VAR_11 & VAR_3) {
  VAR_15 = VAR_10->cur_qp_state;
 } else {
  FUNC_6(&VAR_14->sq.lock);
  FUNC_5(&VAR_14->rq.lock);
  VAR_15 = VAR_14->state;
  FUNC_7(&VAR_14->rq.lock);
  FUNC_8(&VAR_14->sq.lock);
 }

 VAR_16 = VAR_11 & VAR_8 ? VAR_10->qp_state : VAR_15;

 if (!FUNC_1(VAR_15, VAR_16, VAR_9->qp_type, VAR_11,
    VAR_1)) {
  FUNC_2(VAR_13, "Bad QP transition (transport %d) "
     "%d->%d with attr 0x%08x\n",
     VAR_14->transport, VAR_15, VAR_16,
     VAR_11);
  goto out;
 }

 if ((VAR_11 & VAR_6) &&
      VAR_10->pkey_index >= VAR_13->limits.pkey_table_len) {
  FUNC_2(VAR_13, "P_Key index (%u) too large. max is %d\n",
     VAR_10->pkey_index, VAR_13->limits.pkey_table_len-1);
  goto out;
 }

 if ((VAR_11 & VAR_7) &&
     (VAR_10->port_num == 0 || VAR_10->port_num > VAR_13->limits.num_ports)) {
  FUNC_2(VAR_13, "Port number (%u) is invalid\n", VAR_10->port_num);
  goto out;
 }

 if (VAR_11 & VAR_5 &&
     VAR_10->max_rd_atomic > VAR_13->limits.max_qp_init_rdma) {
  FUNC_2(VAR_13, "Max rdma_atomic as initiator %u too large (max is %d)\n",
     VAR_10->max_rd_atomic, VAR_13->limits.max_qp_init_rdma);
  goto out;
 }

 if (VAR_11 & VAR_4 &&
     VAR_10->max_dest_rd_atomic > 1 << VAR_13->qp_table.rdb_shift) {
  FUNC_2(VAR_13, "Max rdma_atomic as responder %u too large (max %d)\n",
     VAR_10->max_dest_rd_atomic, 1 << VAR_13->qp_table.rdb_shift);
  goto out;
 }

 if (VAR_15 == VAR_16 && VAR_15 == VAR_2) {
  VAR_17 = 0;
  goto out;
 }

 VAR_17 = FUNC_0(VAR_9, VAR_10, VAR_11, VAR_15, VAR_16);

out:
 FUNC_4(&VAR_14->mutex);
 return VAR_17;
}
