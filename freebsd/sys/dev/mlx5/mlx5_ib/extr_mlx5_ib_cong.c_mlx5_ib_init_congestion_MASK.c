
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_8__ {int dwork; int * arg; struct sysctl_ctx_list ctx; int lock; } ;
struct TYPE_5__ {struct sysctl_oid* oidp; } ;
struct TYPE_6__ {TYPE_1__ kobj; } ;
struct TYPE_7__ {TYPE_2__ dev; } ;
struct mlx5_ib_dev {TYPE_4__ congestion; TYPE_3__ ib_dev; int mdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sysctl_oid* FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_3 (struct sysctl_ctx_list*,int ,int ,int ,int,struct mlx5_ib_dev*,int,int *,char*,int ) ;
 int FUNC_4 (struct sysctl_ctx_list*,int ,int ,int ,int,int *,int ,int ) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 int FUNC_6 (struct mlx5_ib_dev*) ;
 int VAR_14 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (struct sysctl_ctx_list*) ;
 int FUNC_10 (struct sysctl_ctx_list*) ;

int
FUNC_11(struct mlx5_ib_dev *VAR_15)
{
 struct sysctl_ctx_list *VAR_16;
 struct sysctl_oid *VAR_17;
 struct sysctl_oid *VAR_18;
 int VAR_19;
 u32 VAR_20;

 VAR_16 = &VAR_15->congestion.ctx;
 FUNC_10(VAR_16);
 FUNC_8(&VAR_15->congestion.lock, "mlx5ibcong");
 FUNC_0(&VAR_15->congestion.dwork, VAR_14);

 if (!FUNC_1(VAR_15->mdev, VAR_9))
  return (0);

 VAR_19 = FUNC_6(VAR_15);
 if (VAR_19)
  return (VAR_19);

 VAR_17 = FUNC_2(VAR_16, FUNC_5(VAR_15->ib_dev.dev.kobj.oidp),
     VAR_8, "cong", VAR_2, ((void*)0), "Congestion control");
 if (VAR_17 == ((void*)0))
  return (-VAR_5);

 VAR_18 = FUNC_2(VAR_16, FUNC_5(VAR_17),
     VAR_8, "conf", VAR_2, ((void*)0), "Configuration");
 if (VAR_18 == ((void*)0)) {
  FUNC_9(&VAR_15->congestion.ctx);
  return (-VAR_5);
 }

 for (VAR_20 = 0; VAR_20 != VAR_6; VAR_20++) {
  FUNC_3(VAR_16,
      FUNC_5(VAR_18), VAR_8,
      VAR_11[2 * VAR_20],
      VAR_4 | VAR_3 | VAR_0,
      VAR_15, VAR_20, &VAR_12, "QU",
      VAR_11[2 * VAR_20 + 1]);
 }

 VAR_18 = FUNC_2(VAR_16, FUNC_5(VAR_17),
     VAR_8, "stats", VAR_1, ((void*)0), "Statistics");
 if (VAR_18 == ((void*)0)) {
  FUNC_9(&VAR_15->congestion.ctx);
  return (-VAR_5);
 }

 for (VAR_20 = 0; VAR_20 != VAR_7; VAR_20++) {

  FUNC_4(VAR_16, FUNC_5(VAR_18), VAR_8,
      VAR_13[2 * VAR_20],
      VAR_1 | VAR_0,
      &VAR_15->congestion.arg[VAR_20 + VAR_6],
      0, VAR_13[2 * VAR_20 + 1]);
 }
 FUNC_7(&VAR_15->congestion.dwork, VAR_10);
 return (0);
}
