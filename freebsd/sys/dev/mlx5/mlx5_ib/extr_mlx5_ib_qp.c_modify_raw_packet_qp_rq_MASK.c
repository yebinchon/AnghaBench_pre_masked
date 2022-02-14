
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_modify_raw_qp_param {int set_mask; int rq_q_ctr_id; } ;
struct TYPE_4__ {int qpn; } ;
struct TYPE_5__ {TYPE_1__ mqp; } ;
struct mlx5_ib_rq {int state; TYPE_2__ base; } ;
struct TYPE_6__ {int name; } ;
struct mlx5_ib_dev {int mdev; TYPE_3__ ib_dev; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,void*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,int ) ;
 int FUNC_4 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,void*,int) ;
 void* FUNC_7 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_8 (char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct mlx5_ib_dev *VAR_11,
       struct mlx5_ib_rq *VAR_12, int VAR_13,
       const struct mlx5_modify_raw_qp_param *VAR_14)
{
 void *VAR_15;
 void *VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_17 = FUNC_4(VAR_7);
 VAR_15 = FUNC_7(VAR_17);
 if (!VAR_15)
  return -VAR_0;

 FUNC_2(VAR_7, VAR_15, VAR_9, VAR_12->base.mqp.qpn);
 FUNC_2(VAR_7, VAR_15, VAR_8, VAR_12->state);

 VAR_16 = FUNC_0(VAR_7, VAR_15, VAR_4);
 FUNC_2(VAR_16, VAR_16, VAR_10, VAR_13);

 if (VAR_14->set_mask & VAR_2) {
  if (FUNC_1(VAR_11->mdev, VAR_6)) {
   FUNC_3(VAR_7, VAR_15, VAR_5,
       VAR_1);
   FUNC_2(VAR_16, VAR_16, VAR_3, VAR_14->rq_q_ctr_id);
  } else
   FUNC_8("%s: RAW PACKET QP counters are not supported on current FW\n",
         VAR_11->ib_dev.name);
 }

 VAR_18 = FUNC_6(VAR_11->mdev, VAR_15, VAR_17);
 if (VAR_18)
  goto out;

 VAR_12->state = VAR_13;

out:
 FUNC_5(VAR_15);
 return VAR_18;
}
