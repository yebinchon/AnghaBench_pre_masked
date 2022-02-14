
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sqps; TYPE_2__* demux; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; int ib_dev; int dev; } ;
struct TYPE_4__ {int * tun; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *,int,int,int,int ) ;
 int FUNC_2 (struct mlx4_ib_dev*,int,int,int ,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx4_ib_dev *VAR_0, int VAR_1,
      int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (!VAR_3) {
  FUNC_0(&VAR_0->sriov.demux[VAR_2 - 1], VAR_1);

  if (VAR_1 == FUNC_3(VAR_0->dev))
   FUNC_2(VAR_0, VAR_1, VAR_2,
          VAR_0->sriov.sqps[VAR_2 - 1], 1);

  FUNC_2(VAR_0, VAR_1, VAR_2,
         VAR_0->sriov.demux[VAR_2 - 1].tun[VAR_1], 1);
  return 0;
 }


 VAR_4 = FUNC_1(&VAR_0->ib_dev, VAR_1, VAR_2, 1,
      VAR_0->sriov.demux[VAR_2 - 1].tun[VAR_1]);


 if (!VAR_4 && VAR_1 == FUNC_3(VAR_0->dev))
  VAR_4 = FUNC_1(&VAR_0->ib_dev, VAR_1, VAR_2, 0,
       VAR_0->sriov.sqps[VAR_2 - 1]);
 return VAR_4;
}
