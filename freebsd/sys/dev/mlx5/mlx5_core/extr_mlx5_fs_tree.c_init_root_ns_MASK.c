
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx5_core_dev {TYPE_3__* root_ns; } ;
struct TYPE_5__ {int base; } ;
struct TYPE_7__ {TYPE_1__ ns; } ;
struct TYPE_6__ {int max_ft_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_2 (struct mlx5_core_dev*,int ,int ) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*,int,int *,int *) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_core_dev *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_5,
           VAR_3.
           max_ft_level);

 VAR_5->root_ns = FUNC_2(VAR_5, VAR_1,
          VAR_2);
 if (FUNC_0(VAR_5->root_ns))
  goto err;


 if (FUNC_3(VAR_5, VAR_6, &VAR_4, &VAR_5->root_ns->ns.base))
  goto err;

 FUNC_4(&VAR_5->root_ns->ns);

 return 0;
err:
 return -VAR_0;
}
