
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_uuar_info {TYPE_1__* uars; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mlx5_uuar_info *VAR_1, int VAR_2)
{
 return VAR_1->uars[VAR_2 / VAR_0].index;
}
