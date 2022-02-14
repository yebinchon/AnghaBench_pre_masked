
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mlx5_ib_dev {TYPE_1__* port; int mdev; } ;
struct TYPE_2__ {scalar_t__ q_cnt_id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_1, u8 VAR_2)
{
 FUNC_0(VAR_1->mdev,
         VAR_0,
         VAR_1->port[VAR_2].q_cnt_id);
 VAR_1->port[VAR_2].q_cnt_id = 0;
}
