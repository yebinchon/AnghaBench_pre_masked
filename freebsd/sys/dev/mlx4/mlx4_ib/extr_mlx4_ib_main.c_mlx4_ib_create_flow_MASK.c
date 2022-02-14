
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int type ;
struct ib_flow {int dummy; } ;
struct mlx4_ib_flow {TYPE_1__* reg_id; struct ib_flow ibflow; } ;
struct mlx4_dev {int dummy; } ;
struct ib_qp {TYPE_3__* device; } ;
struct ib_flow_attr {int port; int flags; int type; } ;
typedef enum mlx4_net_trans_promisc_mode { ____Placeholder_mlx4_net_trans_promisc_mode } mlx4_net_trans_promisc_mode ;
struct TYPE_6__ {int phys_port_cnt; } ;
struct TYPE_5__ {struct mlx4_dev* dev; } ;
struct TYPE_4__ {int mirror; int id; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_flow* FUNC_1 (int) ;
 int VAR_3 ;

 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct ib_qp*,struct ib_flow_attr*,int,int,int *) ;
 int FUNC_3 (struct mlx4_dev*,int ) ;
 int FUNC_4 (struct mlx4_ib_flow*) ;
 struct mlx4_ib_flow* FUNC_5 (int,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int FUNC_7 (struct mlx4_dev*,struct ib_flow_attr*,int*) ;
 int FUNC_8 (struct ib_qp*,struct ib_flow_attr*,int *) ;
 int FUNC_9 (struct mlx4_dev*) ;
 TYPE_2__* FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static struct ib_flow *FUNC_12(struct ib_qp *VAR_10,
        struct ib_flow_attr *VAR_11,
        int VAR_12)
{
 int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
 struct mlx4_ib_flow *VAR_16;
 enum mlx4_net_trans_promisc_mode VAR_17[2];
 struct mlx4_dev *VAR_18 = (FUNC_10(VAR_10->device))->dev;
 int VAR_19 = FUNC_9(VAR_18);

 if (VAR_11->port < 1 || VAR_11->port > VAR_10->device->phys_port_cnt)
  return FUNC_1(-VAR_0);

 if ((VAR_11->flags & VAR_4) &&
     (VAR_11->type != 129))
  return FUNC_1(-VAR_2);

 FUNC_6(VAR_17, 0, sizeof(VAR_17));

 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_3);
 if (!VAR_16) {
  VAR_13 = -VAR_1;
  goto err_free;
 }

 switch (VAR_11->type) {
 case 129:




  if (FUNC_11(VAR_11->flags & VAR_4)) {
   VAR_13 = FUNC_7(VAR_18,
        VAR_11,
        VAR_17);
   if (VAR_13)
    goto err_free;
  } else {
   VAR_17[0] = VAR_9;
  }
  break;

 case 131:
  VAR_17[0] = VAR_5;
  break;

 case 130:
  VAR_17[0] = VAR_6;
  break;

 case 128:
  VAR_17[0] = VAR_7;
  VAR_17[1] = VAR_8;
  break;

 default:
  VAR_13 = -VAR_0;
  goto err_free;
 }

 while (VAR_14 < FUNC_0(VAR_17) && VAR_17[VAR_14]) {
  VAR_13 = FUNC_2(VAR_10, VAR_11, VAR_12, VAR_17[VAR_14],
         &VAR_16->reg_id[VAR_14].id);
  if (VAR_13)
   goto err_create_flow;
  if (VAR_19) {



   VAR_11->port = 2;
   VAR_13 = FUNC_2(VAR_10, VAR_11,
          VAR_12, VAR_17[VAR_15],
          &VAR_16->reg_id[VAR_15].mirror);
   VAR_11->port = 1;
   if (VAR_13)
    goto err_create_flow;
   VAR_15++;
  }

  VAR_14++;
 }

 if (VAR_14 < FUNC_0(VAR_17) && VAR_11->type == 129) {
  VAR_13 = FUNC_8(VAR_10, VAR_11,
            &VAR_16->reg_id[VAR_14].id);
  if (VAR_13)
   goto err_create_flow;

  if (VAR_19) {
   VAR_11->port = 2;
   VAR_13 = FUNC_8(VAR_10, VAR_11,
             &VAR_16->reg_id[VAR_15].mirror);
   VAR_11->port = 1;
   if (VAR_13)
    goto err_create_flow;
   VAR_15++;
  }

  VAR_14++;
 }

 return &VAR_16->ibflow;

err_create_flow:
 while (VAR_14) {
  (void)FUNC_3(FUNC_10(VAR_10->device)->dev,
          VAR_16->reg_id[VAR_14].id);
  VAR_14--;
 }

 while (VAR_15) {
  (void)FUNC_3(FUNC_10(VAR_10->device)->dev,
          VAR_16->reg_id[VAR_15].mirror);
  VAR_15--;
 }
err_free:
 FUNC_4(VAR_16);
 return FUNC_1(VAR_13);
}
