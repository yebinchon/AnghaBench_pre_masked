
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int count; unsigned int start; } ;
struct TYPE_4__ {TYPE_1__ reserved_gids; } ;
struct mlx5_core_dev {TYPE_2__ roce; int intf_state; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct mlx5_core_dev *VAR_1, unsigned int VAR_2)
{
 FUNC_0(FUNC_2(VAR_0, &VAR_1->intf_state), "Unreserving GIDs when interfaces are up");
 FUNC_0(VAR_2 > VAR_1->roce.reserved_gids.count, "Unreserving %u GIDs when only %u reserved",
      VAR_2, VAR_1->roce.reserved_gids.count);

 VAR_1->roce.reserved_gids.start += VAR_2;
 VAR_1->roce.reserved_gids.count -= VAR_2;
 FUNC_1(VAR_1, "%u GIDs starting at %u left reserved\n",
        VAR_1->roce.reserved_gids.count,
        VAR_1->roce.reserved_gids.start);
}
