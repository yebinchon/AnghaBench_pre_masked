
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int buf; int dma; } ;
struct TYPE_3__ {int pool; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int VAR_0 ;
 struct mlx4_cmd_mailbox* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_2__* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (int ,int ,int *) ;

struct mlx4_cmd_mailbox *FUNC_6(struct mlx4_dev *VAR_3)
{
 struct mlx4_cmd_mailbox *VAR_4;

 VAR_4 = FUNC_2(sizeof *VAR_4, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->buf = FUNC_5(FUNC_4(VAR_3)->cmd.pool, VAR_1,
          &VAR_4->dma);
 if (!VAR_4->buf) {
  FUNC_1(VAR_4);
  return FUNC_0(-VAR_0);
 }

 FUNC_3(VAR_4->buf, 0, VAR_2);

 return VAR_4;
}
