
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_flow_table {size_t num_groups; int ** g; int t; } ;
struct TYPE_2__ {int ethertype; int ip_protocol; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_1 (int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mlx5e_flow_table*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_8(struct mlx5e_flow_table *VAR_11, u32 *VAR_12,
        int VAR_13)
{
 u8 *VAR_14 = FUNC_1(VAR_4, VAR_12, VAR_8);
 int VAR_15;
 int VAR_16 = 0;

 FUNC_5(VAR_12, 0, VAR_13);
 FUNC_2(VAR_12, VAR_9, VAR_3);
 FUNC_3(VAR_6, VAR_14, VAR_7.ethertype);
 FUNC_3(VAR_6, VAR_14, VAR_7.ip_protocol);
 FUNC_2(VAR_12, VAR_10, VAR_16);
 VAR_16 += VAR_0;
 FUNC_2(VAR_12, VAR_5, VAR_16 - 1);
 VAR_11->g[VAR_11->num_groups] = FUNC_6(VAR_11->t, VAR_12);
 if (FUNC_0(VAR_11->g[VAR_11->num_groups]))
  goto err_destory_groups;
 VAR_11->num_groups++;

 FUNC_5(VAR_12, 0, VAR_13);
 FUNC_2(VAR_12, VAR_9, VAR_3);
 FUNC_3(VAR_6, VAR_14, VAR_7.ethertype);
 FUNC_2(VAR_12, VAR_10, VAR_16);
 VAR_16 += VAR_1;
 FUNC_2(VAR_12, VAR_5, VAR_16 - 1);
 VAR_11->g[VAR_11->num_groups] = FUNC_6(VAR_11->t, VAR_12);
 if (FUNC_0(VAR_11->g[VAR_11->num_groups]))
  goto err_destory_groups;
 VAR_11->num_groups++;

 FUNC_5(VAR_12, 0, VAR_13);
 FUNC_2(VAR_12, VAR_10, VAR_16);
 VAR_16 += VAR_2;
 FUNC_2(VAR_12, VAR_5, VAR_16 - 1);
 VAR_11->g[VAR_11->num_groups] = FUNC_6(VAR_11->t, VAR_12);
 if (FUNC_0(VAR_11->g[VAR_11->num_groups]))
  goto err_destory_groups;
 VAR_11->num_groups++;

 return (0);

err_destory_groups:
 VAR_15 = FUNC_4(VAR_11->g[VAR_11->num_groups]);
 VAR_11->g[VAR_11->num_groups] = ((void*)0);
 FUNC_7(VAR_11);

 return (VAR_15);
}
