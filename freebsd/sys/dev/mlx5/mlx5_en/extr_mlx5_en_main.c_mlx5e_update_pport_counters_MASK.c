
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
typedef int u32 ;
struct mlx5e_port_stats_debug {void** arg; } ;
struct mlx5e_pport_stats {void** arg; } ;
struct TYPE_2__ {struct mlx5e_port_stats_debug port_stats_debug; struct mlx5e_pport_stats pport; } ;
struct mlx5e_priv {TYPE_1__ stats; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int *,int ) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 int FUNC_3 (int ,int *,int ,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 void* FUNC_5 (int const) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_6 (int *) ;
 int VAR_19 ;
 int FUNC_7 (struct mlx5_core_dev*,int *,unsigned int,int *,unsigned int,int ,int ,int ) ;
 int * FUNC_8 (unsigned int) ;
 int FUNC_9 (struct mlx5e_priv*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;

__attribute__((used)) static void
FUNC_10(struct mlx5e_priv *VAR_25)
{
 struct mlx5_core_dev *VAR_26 = VAR_25->mdev;
 struct mlx5e_pport_stats *VAR_27 = &VAR_25->stats.pport;
 struct mlx5e_port_stats_debug *VAR_28 = &VAR_25->stats.port_stats_debug;
 u32 *VAR_29;
 u32 *VAR_30;
 const u64 *VAR_31;
 unsigned VAR_32 = FUNC_4(VAR_22);
 unsigned VAR_33;
 unsigned VAR_34;
 unsigned VAR_35;


 VAR_29 = FUNC_8(VAR_32);
 VAR_30 = FUNC_8(VAR_32);
 if (VAR_29 == ((void*)0) || VAR_30 == ((void*)0))
  goto free_out;





 VAR_31 = (const uint64_t *)FUNC_0(VAR_22, VAR_30, VAR_17);

 FUNC_3(VAR_22, VAR_29, VAR_19, 1);


 FUNC_3(VAR_22, VAR_29, VAR_18, VAR_10);
 FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);
 for (VAR_33 = 0, VAR_34 = VAR_2;
      VAR_33 != VAR_1; VAR_33++, VAR_34++)
  VAR_27->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);


 FUNC_3(VAR_22, VAR_29, VAR_18, VAR_15);
 FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);
 for (VAR_33 = 0; VAR_33 != VAR_6; VAR_33++, VAR_34++)
  VAR_27->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);

 for (VAR_34 = 0; VAR_33 != VAR_6 +
     VAR_5; VAR_33++, VAR_34++)
  VAR_28->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);


 FUNC_3(VAR_22, VAR_29, VAR_18, VAR_16);
 FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);
 for (VAR_33 = 0; VAR_33 != VAR_7; VAR_33++, VAR_34++)
  VAR_28->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);


 FUNC_3(VAR_22, VAR_29, VAR_18, VAR_12);
 FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);
 for (VAR_33 = 0; VAR_33 != VAR_4; VAR_33++, VAR_34++)
  VAR_28->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);


 FUNC_3(VAR_22, VAR_29, VAR_18, VAR_9);
 FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);
 for (VAR_33 = 0; VAR_33 != VAR_0; VAR_33++, VAR_34++)
  VAR_28->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);


 if (FUNC_1(VAR_26, VAR_20) &&
     FUNC_2(VAR_26, VAR_23) &&
     FUNC_2(VAR_26, VAR_21)) {

  FUNC_3(VAR_22, VAR_29, VAR_18, VAR_13);
  FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);

  for (VAR_33 = 0; VAR_33 != VAR_8; VAR_33++, VAR_34++)
   VAR_28->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);
 }


 FUNC_9(VAR_25);


 FUNC_3(VAR_22, VAR_29, VAR_18, VAR_11);


 for (VAR_34 = VAR_35 = 0; VAR_35 != VAR_3; VAR_35++) {
  FUNC_3(VAR_22, VAR_29, VAR_24, VAR_35);
  FUNC_7(VAR_26, VAR_29, VAR_32, VAR_30, VAR_32, VAR_14, 0, 0);


  for (VAR_33 = 0; VAR_33 != (VAR_2 /
      VAR_3); VAR_33++, VAR_34++)
   VAR_27->arg[VAR_34] = FUNC_5(VAR_31[VAR_33]);
 }

free_out:

 FUNC_6(VAR_29);
 FUNC_6(VAR_30);
}
