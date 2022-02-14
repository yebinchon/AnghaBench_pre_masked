
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct mlx4_ib_demux_ctx {int wq; int ud_wq; TYPE_3__** tun; int port; int ib_dev; } ;
struct TYPE_7__ {scalar_t__ state; } ;
struct TYPE_5__ {int sqp_demux; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_ib_dev*,int,int ,TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_ib_dev*,int,int ) ;
 int FUNC_4 (TYPE_3__**) ;
 int FUNC_5 (struct mlx4_ib_demux_ctx*,int) ;
 struct mlx4_ib_dev* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct mlx4_ib_demux_ctx *VAR_2)
{
 int VAR_3;
 if (VAR_2) {
  struct mlx4_ib_dev *VAR_4 = FUNC_6(VAR_2->ib_dev);
  FUNC_5(VAR_2, 1);
  for (VAR_3 = 0; VAR_3 < VAR_4->dev->caps.sqp_demux; VAR_3++) {
   if (!VAR_2->tun[VAR_3])
    continue;
   if (VAR_2->tun[VAR_3]->state > VAR_0)
    VAR_2->tun[VAR_3]->state = VAR_1;
  }
  FUNC_2(VAR_2->wq);
  for (VAR_3 = 0; VAR_3 < VAR_4->dev->caps.sqp_demux; VAR_3++) {
   FUNC_0(VAR_4, VAR_3, VAR_2->port, VAR_2->tun[VAR_3], 0);
   FUNC_3(VAR_4, VAR_3, VAR_2->port);
  }
  FUNC_4(VAR_2->tun);
  FUNC_1(VAR_2->ud_wq);
  FUNC_1(VAR_2->wq);
 }
}
