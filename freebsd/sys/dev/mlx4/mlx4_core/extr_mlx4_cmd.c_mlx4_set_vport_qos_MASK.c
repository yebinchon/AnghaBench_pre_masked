
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_vport_qos_param {int max_avg_bw; int enable; } ;
struct mlx4_qos_manager {int num_of_qos_vfs; int priority_bm; } ;
struct TYPE_3__ {struct mlx4_qos_manager* qos_ctl; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_priv {TYPE_2__ mfunc; struct mlx4_dev dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_vport_qos_param*,int ,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int ,struct mlx4_vport_qos_param*) ;
 int FUNC_2 (struct mlx4_dev*,int,int,struct mlx4_vport_qos_param*) ;
 int FUNC_3 (struct mlx4_dev*,char*,...) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct mlx4_priv *VAR_2, int VAR_3, int VAR_4,
         int VAR_5)
{
 int VAR_6;
 int VAR_7;
 struct mlx4_qos_manager *VAR_8;
 struct mlx4_dev *VAR_9 = &VAR_2->dev;
 struct mlx4_vport_qos_param VAR_10[VAR_1];

 VAR_8 = &VAR_2->mfunc.master.qos_ctl[VAR_4];
 FUNC_0(VAR_10, 0, sizeof(struct mlx4_vport_qos_param) * VAR_1);

 if (VAR_3 > VAR_8->num_of_qos_vfs) {
  FUNC_3(VAR_9, "No availible VPP resources for this VF\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_1(VAR_9, VAR_4, 0, VAR_10);
 if (VAR_7) {
  FUNC_3(VAR_9, "Failed to query Vport 0 QoS values\n");
  return VAR_7;
 }

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_4(VAR_6, VAR_8->priority_bm) && VAR_5) {
   VAR_10[VAR_6].max_avg_bw = VAR_5;
   VAR_10[VAR_6].enable = 1;
  } else {




   VAR_10[VAR_6].enable = 0;
  }
 }

 VAR_7 = FUNC_2(VAR_9, VAR_4, VAR_3, VAR_10);
 if (VAR_7) {
  FUNC_3(VAR_9, "Failed to set Vport %d QoS values\n", VAR_3);
  return VAR_7;
 }

 return 0;
}
