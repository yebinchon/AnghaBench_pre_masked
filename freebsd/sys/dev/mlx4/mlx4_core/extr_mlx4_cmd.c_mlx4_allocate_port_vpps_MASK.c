
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_qos_manager {int num_of_qos_vfs; int priority_bm; } ;
struct TYPE_3__ {struct mlx4_qos_manager* qos_ctl; } ;
struct TYPE_4__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int*,int*) ;
 int FUNC_2 (struct mlx4_dev*,int,int*) ;
 int FUNC_3 (struct mlx4_dev*,char*,int,int,...) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 scalar_t__ FUNC_6 (int,int ) ;

__attribute__((used)) static void FUNC_7(struct mlx4_dev *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 u16 VAR_6;
 u8 VAR_7[VAR_0];
 struct mlx4_qos_manager *VAR_8;
 struct mlx4_priv *VAR_9 = FUNC_5(VAR_1);

 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_6, VAR_7);
 if (VAR_4) {
  FUNC_4(VAR_1, "Failed query availible VPPs\n");
  return;
 }

 VAR_8 = &VAR_9->mfunc.master.qos_ctl[VAR_2];
 VAR_5 = (VAR_6 /
     FUNC_0(VAR_8->priority_bm, VAR_0));

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_6(VAR_3, VAR_8->priority_bm))
   VAR_7[VAR_3] = VAR_5;
 }

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_7);
 if (VAR_4) {
  FUNC_4(VAR_1, "Failed allocating VPPs\n");
  return;
 }


 VAR_4 = FUNC_1(VAR_1, VAR_2, &VAR_6, VAR_7);
 if (VAR_4) {
  FUNC_4(VAR_1, "Failed query availible VPPs\n");
  return;
 }

 VAR_8->num_of_qos_vfs = VAR_5;
 FUNC_3(VAR_1, "Port %d Availible VPPs %d\n", VAR_2, VAR_6);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(VAR_1, "Port %d UP %d Allocated %d VPPs\n", VAR_2, VAR_3,
    VAR_7[VAR_3]);
}
