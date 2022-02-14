
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct mpc8610_hpcd_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mpc8610_hpcd_data {int ssi_id; TYPE_2__* guts; int * dma_channel_id; int dma_id; } ;
struct TYPE_5__ {int pmuxcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_5)
{
 struct mpc8610_hpcd_data *VAR_6 =
  VAR_5->dev.platform_data;


 FUNC_1(VAR_6->guts, VAR_6->dma_id,
  VAR_6->dma_channel_id[0], VAR_0);
 FUNC_1(VAR_6->guts, VAR_6->dma_id,
  VAR_6->dma_channel_id[1], VAR_0);

 FUNC_2(VAR_6->guts, VAR_6->dma_id,
  VAR_6->dma_channel_id[0], 0);
 FUNC_2(VAR_6->guts, VAR_6->dma_id,
  VAR_6->dma_channel_id[1], 0);

 switch (VAR_6->ssi_id) {
 case 0:
  FUNC_0(&VAR_6->guts->pmuxcr,
   VAR_1, VAR_2);
  break;
 case 1:
  FUNC_0(&VAR_6->guts->pmuxcr,
   VAR_3, VAR_4);
  break;
 }

 return 0;
}
