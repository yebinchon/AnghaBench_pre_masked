
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct gid_entry {int dummy; } ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct gid_entry*,struct mlx4_ib_dev*,int ) ;
 int FUNC_1 (struct gid_entry*,struct mlx4_ib_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct gid_entry *VAR_1,
          struct mlx4_ib_dev *VAR_2,
          u8 VAR_3)
{
 if (VAR_2->dev->caps.flags2 & VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
