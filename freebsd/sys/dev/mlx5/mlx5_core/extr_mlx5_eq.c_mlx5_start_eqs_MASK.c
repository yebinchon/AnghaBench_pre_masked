
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct mlx5_eq_table {int cmd_eq; int async_eq; int pages_eq; } ;
struct TYPE_3__ {int * uars; } ;
struct TYPE_4__ {TYPE_1__ uuari; struct mlx5_eq_table eq_table; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;


 unsigned long long VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int *,int ,int,int,int *) ;
 int FUNC_5 (struct mlx5_core_dev*,int *) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

int FUNC_6(struct mlx5_core_dev *VAR_21)
{
 struct mlx5_eq_table *VAR_22 = &VAR_21->priv.eq_table;
 u64 VAR_23 = VAR_0;
 int VAR_24;

 if (FUNC_0(VAR_21, VAR_19))
  VAR_23 |= (1ull <<
         VAR_7);

 if (FUNC_0(VAR_21, VAR_18))
  VAR_23 |= (1ull <<
         VAR_10);

 if (FUNC_0(VAR_21, VAR_15))
  VAR_23 |= (1ull <<
         VAR_5);

 if (FUNC_0(VAR_21, VAR_16))
  VAR_23 |= (1ull << VAR_8) |
        (1ull << VAR_9);

 if (FUNC_0(VAR_21, VAR_20))
  VAR_23 |= (1ull << VAR_12);

 if (FUNC_0(VAR_21, VAR_17)) {
  VAR_23 |= (1ull <<
      VAR_6);
 }

 VAR_24 = FUNC_4(VAR_21, &VAR_22->cmd_eq, VAR_2,
     VAR_14, 1ull << VAR_4,
     &VAR_21->priv.uuari.uars[0]);
 if (VAR_24) {
  FUNC_3(VAR_21, "failed to create cmd EQ %d\n", VAR_24);
  return VAR_24;
 }

 FUNC_1(VAR_21);

 VAR_24 = FUNC_4(VAR_21, &VAR_22->async_eq, VAR_1,
     VAR_13, VAR_23,
     &VAR_21->priv.uuari.uars[0]);
 if (VAR_24) {
  FUNC_3(VAR_21, "failed to create async EQ %d\n", VAR_24);
  goto err1;
 }

 VAR_24 = FUNC_4(VAR_21, &VAR_22->pages_eq,
     VAR_3,
                                1,
     1 << VAR_11,
     &VAR_21->priv.uuari.uars[0]);
 if (VAR_24) {
  FUNC_3(VAR_21, "failed to create pages EQ %d\n", VAR_24);
  goto err2;
 }

 return VAR_24;

err2:
 FUNC_5(VAR_21, &VAR_22->async_eq);

err1:
 FUNC_2(VAR_21);
 FUNC_5(VAR_21, &VAR_22->cmd_eq);
 return VAR_24;
}
