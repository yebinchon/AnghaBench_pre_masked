
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_flow_spec {int size; } ;
typedef int u64 ;
typedef int u16 ;
struct mlx4_net_trans_rule_hw_ctrl {int qpn; int port; scalar_t__ type; int prio; } ;
struct mlx4_ib_dev {int dev; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_net_trans_rule_hw_ctrl* buf; } ;
struct ib_qp {int qp_num; int device; } ;
struct ib_flow_attr {int const priority; int num_of_specs; int port; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_4 ;
 int VAR_5 ;




 int const VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (struct mlx4_ib_dev*,struct ib_qp*,scalar_t__,struct mlx4_net_trans_rule_hw_ctrl*) ;
 int FUNC_3 (struct ib_qp*,struct ib_flow_attr*) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_8 ;
 struct mlx4_cmd_mailbox* FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int *,int,int ,int ,int ,int ) ;
 int FUNC_8 (int ,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int FUNC_10 (int ,int ,void*,struct mlx4_net_trans_rule_hw_ctrl*) ;
 int FUNC_11 (char*,...) ;
 struct mlx4_ib_dev* FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct ib_qp *VAR_9, struct ib_flow_attr *VAR_10,
     int VAR_11,
     enum mlx4_net_trans_promisc_mode VAR_12,
     u64 *VAR_13)
{
 int VAR_14, VAR_15;
 int VAR_16 = 0;
 void *VAR_17;
 struct mlx4_ib_dev *VAR_18 = FUNC_12(VAR_9->device);
 struct mlx4_cmd_mailbox *VAR_19;
 struct mlx4_net_trans_rule_hw_ctrl *VAR_20;
 int VAR_21;

 static const u16 VAR_22[] = {
  [132] = 128,
  [135] = 131,
  [133] = 129,
  [134] = 130,
 };

 if (VAR_10->priority > VAR_6) {
  FUNC_11("Invalid priority value %d\n", VAR_10->priority);
  return -VAR_0;
 }

 if (VAR_11 >= VAR_3) {
  FUNC_11("Invalid domain value %d\n", VAR_11);
  return -VAR_0;
 }

 if (FUNC_9(VAR_18->dev, VAR_12) < 0)
  return -VAR_0;

 VAR_19 = FUNC_6(VAR_18->dev);
 if (FUNC_0(VAR_19))
  return FUNC_1(VAR_19);
 VAR_20 = VAR_19->buf;

 VAR_20->prio = FUNC_4(VAR_22[VAR_11] |
     VAR_10->priority);
 VAR_20->type = FUNC_9(VAR_18->dev, VAR_12);
 VAR_20->port = VAR_10->port;
 VAR_20->qpn = FUNC_5(VAR_9->qp_num);

 VAR_17 = VAR_10 + 1;
 VAR_16 += sizeof(struct mlx4_net_trans_rule_hw_ctrl);

 VAR_21 = FUNC_3(VAR_9, VAR_10);
 if (VAR_21 >= 0) {
  VAR_14 = FUNC_2(
    VAR_18, VAR_9, VAR_8 + VAR_21,
    VAR_19->buf + VAR_16);
  if (VAR_14 < 0) {
   FUNC_8(VAR_18->dev, VAR_19);
   return -VAR_0;
  }
  VAR_16 += VAR_14;
 }
 for (VAR_15 = 0; VAR_15 < VAR_10->num_of_specs; VAR_15++) {
  VAR_14 = FUNC_10(VAR_18->dev, VAR_9->qp_num, VAR_17,
          VAR_19->buf + VAR_16);
  if (VAR_14 < 0) {
   FUNC_8(VAR_18->dev, VAR_19);
   return -VAR_0;
  }
  VAR_17 += ((union ib_flow_spec *) VAR_17)->size;
  VAR_16 += VAR_14;
 }

 VAR_14 = FUNC_7(VAR_18->dev, VAR_19->dma, VAR_13, VAR_16 >> 2, 0,
      VAR_7, VAR_4,
      VAR_5);
 if (VAR_14 == -VAR_1)
  FUNC_11("mcg table is full. Fail to register network rule.\n");
 else if (VAR_14 == -VAR_2)
  FUNC_11("Device managed flow steering is disabled. Fail to register network rule.\n");
 else if (VAR_14)
  FUNC_11("Invalid argument. Fail to register network rule.\n");

 FUNC_8(VAR_18->dev, VAR_19);
 return VAR_14;
}
