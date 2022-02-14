
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct mlx4_port_gid_table {TYPE_1__* gids; } ;
struct mlx4_ib_iboe {int lock; struct mlx4_port_gid_table* gids; } ;
struct mlx4_ib_dev {int ib_dev; int dev; struct mlx4_ib_iboe iboe; } ;
struct ib_gid_attr {scalar_t__ gid_type; scalar_t__ ndev; } ;
struct gid_cache_context {int real_index; } ;
typedef int gid ;
struct TYPE_2__ {scalar_t__ gid_type; struct gid_cache_context* ctx; union ib_gid gid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,int,union ib_gid*,struct ib_gid_attr*) ;
 int FUNC_2 (union ib_gid*,union ib_gid*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 union ib_gid VAR_3 ;

int FUNC_7(struct mlx4_ib_dev *VAR_4,
        u8 VAR_5, int VAR_6)
{
 struct mlx4_ib_iboe *VAR_7 = &VAR_4->iboe;
 struct gid_cache_context *VAR_8 = ((void*)0);
 union ib_gid VAR_9;
 struct mlx4_port_gid_table *VAR_10;
 int VAR_11 = -VAR_0;
 int VAR_12;
 int VAR_13;
 unsigned long VAR_14;
 struct ib_gid_attr VAR_15;

 if (VAR_5 > VAR_1)
  return -VAR_0;

 if (FUNC_3(VAR_4->dev))
  VAR_5 = 1;

 if (!FUNC_4(&VAR_4->ib_dev, VAR_5))
  return VAR_6;

 VAR_13 = FUNC_1(&VAR_4->ib_dev, VAR_5, VAR_6, &VAR_9, &VAR_15);
 if (VAR_13)
  return VAR_13;

 if (VAR_15.ndev)
  FUNC_0(VAR_15.ndev);

 if (!FUNC_2(&VAR_9, &VAR_3, sizeof(VAR_9)))
  return -VAR_0;

 FUNC_5(&VAR_7->lock, VAR_14);
 VAR_10 = &VAR_7->gids[VAR_5 - 1];

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12)
  if (!FUNC_2(&VAR_10->gids[VAR_12].gid, &VAR_9, sizeof(VAR_9)) &&
      VAR_15.gid_type == VAR_10->gids[VAR_12].gid_type) {
   VAR_8 = VAR_10->gids[VAR_12].ctx;
   break;
  }
 if (VAR_8)
  VAR_11 = VAR_8->real_index;
 FUNC_6(&VAR_7->lock, VAR_14);
 return VAR_11;
}
