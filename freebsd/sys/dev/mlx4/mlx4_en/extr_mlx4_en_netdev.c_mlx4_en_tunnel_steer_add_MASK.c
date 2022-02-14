
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct mlx4_en_priv {int port; TYPE_2__* mdev; } ;
struct TYPE_4__ {scalar_t__ tunnel_offload_mode; scalar_t__ dmfs_high_steer_mode; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;
struct TYPE_5__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,unsigned char*,long long) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int) ;
 int FUNC_2 (TYPE_3__*,unsigned char*,int ,int,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct mlx4_en_priv *VAR_4, unsigned char *VAR_5,
        int VAR_6, u64 *VAR_7)
{
 int VAR_8;

 if (VAR_4->mdev->dev->caps.tunnel_offload_mode != VAR_3 ||
     VAR_4->mdev->dev->caps.dmfs_high_steer_mode == VAR_2)
  return 0;

 VAR_8 = FUNC_2(VAR_4->mdev->dev, VAR_5, VAR_4->port, VAR_6,
        VAR_1, VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4, "failed to add vxlan steering rule, err %d\n", VAR_8);
  return VAR_8;
 }
 FUNC_0(VAR_0, VAR_4, "added vxlan steering rule, mac %pM reg_id %llx\n", VAR_5, (long long)*VAR_7);
 return 0;
}
