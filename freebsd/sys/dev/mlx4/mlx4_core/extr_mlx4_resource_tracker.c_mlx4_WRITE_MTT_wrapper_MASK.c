
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {int res_id; } ;
struct res_mtt {TYPE_1__ com; } ;
struct mlx4_vhcr {int in_modifier; } ;
struct mlx4_mtt {scalar_t__ page_shift; scalar_t__ order; scalar_t__ offset; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int * buf; } ;
struct mlx4_cmd_info {int dummy; } ;
typedef int __be64 ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_dev*,struct mlx4_mtt*,unsigned long long,int,unsigned long long*) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int,struct res_mtt**) ;
 int FUNC_3 (struct mlx4_dev*,int,int ,int ) ;

int FUNC_4(struct mlx4_dev *VAR_1, int VAR_2,
      struct mlx4_vhcr *VAR_3,
      struct mlx4_cmd_mailbox *VAR_4,
      struct mlx4_cmd_mailbox *VAR_5,
      struct mlx4_cmd_info *VAR_6)
{
 struct mlx4_mtt VAR_7;
 __be64 *VAR_8 = VAR_4->buf;
 u64 *VAR_9 = (u64 *)VAR_8;
 int VAR_10;
 struct res_mtt *VAR_11 = ((void*)0);
 int VAR_12 = FUNC_1(VAR_8[0]);
 int VAR_13 = VAR_3->in_modifier;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_1, VAR_2, VAR_12, VAR_13, &VAR_11);
 if (VAR_14)
  return VAR_14;




 VAR_7.offset = 0;

 VAR_7.order = 0;
 VAR_7.page_shift = 0;
 for (VAR_10 = 0; VAR_10 < VAR_13; ++VAR_10)
  VAR_9[VAR_10 + 2] = (FUNC_1(VAR_8[VAR_10 + 2]) & ~1ULL);

 VAR_14 = FUNC_0(VAR_1, &VAR_7, FUNC_1(VAR_8[0]), VAR_13,
          ((u64 *)VAR_8 + 2));

 if (VAR_11)
  FUNC_3(VAR_1, VAR_2, VAR_11->com.res_id, VAR_0);

 return VAR_14;
}
