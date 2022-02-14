
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_cmd_mailbox {int dma; int buf; } ;
struct ib_device_modify {int node_desc; } ;
struct ib_device {int node_desc; } ;
struct TYPE_2__ {int dev; int sm_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 struct mlx4_cmd_mailbox* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 TYPE_1__* FUNC_8 (struct ib_device*) ;

__attribute__((used)) static int FUNC_9(struct ib_device *VAR_6, int VAR_7,
     struct ib_device_modify *VAR_8)
{
 struct mlx4_cmd_mailbox *VAR_9;
 unsigned long VAR_10;

 if (VAR_7 & ~VAR_1)
  return -VAR_0;

 if (!(VAR_7 & VAR_1))
  return 0;

 if (FUNC_5(FUNC_8(VAR_6)->dev))
  return -VAR_0;

 FUNC_6(&FUNC_8(VAR_6)->sm_lock, VAR_10);
 FUNC_1(VAR_6->node_desc, VAR_8->node_desc, VAR_2);
 FUNC_7(&FUNC_8(VAR_6)->sm_lock, VAR_10);





 VAR_9 = FUNC_2(FUNC_8(VAR_6)->dev);
 if (FUNC_0(VAR_9))
  return 0;

 FUNC_1(VAR_9->buf, VAR_8->node_desc, VAR_2);
 FUNC_3(FUNC_8(VAR_6)->dev, VAR_9->dma, 1, 0,
   VAR_4, VAR_5, VAR_3);

 FUNC_4(FUNC_8(VAR_6)->dev, VAR_9);

 return 0;
}
