
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u16 ;
struct mlx4_flow_reg_id {scalar_t__ mirror; scalar_t__ id; } ;
struct TYPE_4__ {int raw; } ;
struct mlx4_ib_steering {int list; struct mlx4_flow_reg_id reg_id; TYPE_2__ gid; } ;
struct mlx4_ib_qp {int port; int flags; int mqp; int mutex; int steering_rules; } ;
struct mlx4_ib_dev {struct mlx4_dev* dev; } ;
struct TYPE_3__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct ib_qp {int device; } ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ib_qp*,union ib_gid*) ;
 int FUNC_1 (struct mlx4_ib_steering*) ;
 struct mlx4_ib_steering* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int *,int ,int,int,int,scalar_t__*) ;
 int FUNC_7 (struct mlx4_dev*,int *,int ,int,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 struct mlx4_ib_dev* FUNC_11 (int ) ;
 struct mlx4_ib_qp* FUNC_12 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_13(struct ib_qp *VAR_5, union ib_gid *VAR_6, u16 VAR_7)
{
 int VAR_8;
 struct mlx4_ib_dev *VAR_9 = FUNC_11(VAR_5->device);
 struct mlx4_dev *VAR_10 = VAR_9->dev;
 struct mlx4_ib_qp *VAR_11 = FUNC_12(VAR_5);
 struct mlx4_ib_steering *VAR_12 = ((void*)0);
 enum mlx4_protocol VAR_13 = VAR_3;
 struct mlx4_flow_reg_id VAR_14;

 if (VAR_9->dev->caps.steering_mode ==
     VAR_4) {
  VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_1);
  if (!VAR_12)
   return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_9->dev, &VAR_11->mqp, VAR_6->raw, VAR_11->port,
        !!(VAR_11->flags &
           VAR_2),
        VAR_13, &VAR_14.id);
 if (VAR_8) {
  FUNC_10("multicast attach op failed, err %d\n", VAR_8);
  goto err_malloc;
 }

 VAR_14.mirror = 0;
 if (FUNC_5(VAR_10)) {
  VAR_8 = FUNC_6(VAR_9->dev, &VAR_11->mqp, VAR_6->raw,
         (VAR_11->port == 1) ? 2 : 1,
         !!(VAR_11->flags &
         VAR_2),
         VAR_13, &VAR_14.mirror);
  if (VAR_8)
   goto err_add;
 }

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8)
  goto err_add;

 if (VAR_12) {
  FUNC_4(VAR_12->gid.raw, VAR_6->raw, 16);
  VAR_12->reg_id = VAR_14;
  FUNC_8(&VAR_11->mutex);
  FUNC_3(&VAR_12->list, &VAR_11->steering_rules);
  FUNC_9(&VAR_11->mutex);
 }
 return 0;

err_add:
 FUNC_7(VAR_9->dev, &VAR_11->mqp, VAR_6->raw,
         VAR_13, VAR_14.id);
 if (VAR_14.mirror)
  FUNC_7(VAR_9->dev, &VAR_11->mqp, VAR_6->raw,
          VAR_13, VAR_14.mirror);
err_malloc:
 FUNC_1(VAR_12);

 return VAR_8;
}
