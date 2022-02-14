
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5e_flow_table {size_t num_groups; int ** g; int t; } ;
struct TYPE_2__ {int svlan_tag; int cvlan_tag; int first_vid; } ;


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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *,int ,int) ;
 void* FUNC_6 (int ,int *) ;
 int FUNC_7 (struct mlx5e_flow_table*) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_8(struct mlx5e_flow_table *VAR_11, u32 *VAR_12,
          int VAR_13)
{
 int VAR_14;
 int VAR_15 = 0;
 u8 *VAR_16 = FUNC_1(VAR_4, VAR_12, VAR_7);

 FUNC_5(VAR_12, 0, VAR_13);
 FUNC_2(VAR_12, VAR_8, VAR_3);
 FUNC_3(VAR_6, VAR_16, VAR_9.cvlan_tag);
 FUNC_3(VAR_6, VAR_16, VAR_9.first_vid);
 FUNC_2(VAR_12, VAR_10, VAR_15);
 VAR_15 += VAR_0;
 FUNC_2(VAR_12, VAR_5, VAR_15 - 1);
 VAR_11->g[VAR_11->num_groups] = FUNC_6(VAR_11->t, VAR_12);
 if (FUNC_0(VAR_11->g[VAR_11->num_groups]))
  goto err_destory_groups;
 VAR_11->num_groups++;

 FUNC_5(VAR_12, 0, VAR_13);
 FUNC_2(VAR_12, VAR_8, VAR_3);
 FUNC_3(VAR_6, VAR_16, VAR_9.cvlan_tag);
 FUNC_2(VAR_12, VAR_10, VAR_15);
 VAR_15 += VAR_1;
 FUNC_2(VAR_12, VAR_5, VAR_15 - 1);
 VAR_11->g[VAR_11->num_groups] = FUNC_6(VAR_11->t, VAR_12);
 if (FUNC_0(VAR_11->g[VAR_11->num_groups]))
  goto err_destory_groups;
 VAR_11->num_groups++;

 FUNC_5(VAR_12, 0, VAR_13);
 FUNC_2(VAR_12, VAR_8, VAR_3);
 FUNC_3(VAR_6, VAR_16, VAR_9.svlan_tag);
 FUNC_2(VAR_12, VAR_10, VAR_15);
 VAR_15 += VAR_2;
 FUNC_2(VAR_12, VAR_5, VAR_15 - 1);
 VAR_11->g[VAR_11->num_groups] = FUNC_6(VAR_11->t, VAR_12);
 if (FUNC_0(VAR_11->g[VAR_11->num_groups]))
  goto err_destory_groups;
 VAR_11->num_groups++;

 return (0);

err_destory_groups:
 VAR_14 = FUNC_4(VAR_11->g[VAR_11->num_groups]);
 VAR_11->g[VAR_11->num_groups] = ((void*)0);
 FUNC_7(VAR_11);

 return (VAR_14);
}
