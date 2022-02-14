
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int cmdq_addr_l_sz; int initializing; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int FUNC_4 (struct mlx5_core_dev*,char*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct mlx5_core_dev *VAR_7)
{
 bool VAR_8;
 u32 VAR_9, VAR_10;

 if (!VAR_6)
  return;
 VAR_8 = (FUNC_1(&VAR_7->iseg->initializing) >>
     VAR_0) & 1;
 if (!VAR_8)
  return;






 VAR_10 = FUNC_0(VAR_7);
 if (VAR_10 == VAR_5 ||
     VAR_10 == VAR_3 ||
     VAR_10 == VAR_4) {
  FUNC_4(VAR_7,
      "Not issuing FW reset. Either it's already done or won't help.\n");
  return;
 }

 FUNC_3(VAR_7, "Issuing FW Reset\n");



 VAR_9 = FUNC_1(&VAR_7->iseg->cmdq_addr_l_sz);
 FUNC_2((VAR_9 & 0xFFFFF000) |
      VAR_2 << VAR_1,
      &VAR_7->iseg->cmdq_addr_l_sz);
}
