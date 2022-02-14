
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int head; int lock; } ;
struct TYPE_4__ {TYPE_1__ med; TYPE_1__ large; } ;
struct mlx5_cmd {TYPE_2__ cache; } ;
struct mlx5_core_dev {struct mlx5_cmd cmd; } ;
struct mlx5_cmd_msg {int list; TYPE_1__* cache; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_cmd_msg*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct mlx5_cmd_msg*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (int *,int *) ;
 struct mlx5_cmd_msg* FUNC_5 (struct mlx5_core_dev*,int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mlx5_core_dev *VAR_5)
{
 struct mlx5_cmd *VAR_6 = &VAR_5->cmd;
 struct mlx5_cmd_msg *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_6(&VAR_6->cache.large.lock);
 FUNC_0(&VAR_6->cache.large.head);
 FUNC_6(&VAR_6->cache.med.lock);
 FUNC_0(&VAR_6->cache.med.head);

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = FUNC_5(VAR_5, VAR_0, VAR_1);
  if (FUNC_1(VAR_7)) {
   VAR_8 = FUNC_2(VAR_7);
   goto ex_err;
  }
  VAR_7->cache = &VAR_6->cache.large;
  FUNC_4(&VAR_7->list, &VAR_6->cache.large.head);
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = FUNC_5(VAR_5, VAR_0, VAR_2);
  if (FUNC_1(VAR_7)) {
   VAR_8 = FUNC_2(VAR_7);
   goto ex_err;
  }
  VAR_7->cache = &VAR_6->cache.med;
  FUNC_4(&VAR_7->list, &VAR_6->cache.med.head);
 }

 return 0;

ex_err:
 FUNC_3(VAR_5);
 return VAR_8;
}
