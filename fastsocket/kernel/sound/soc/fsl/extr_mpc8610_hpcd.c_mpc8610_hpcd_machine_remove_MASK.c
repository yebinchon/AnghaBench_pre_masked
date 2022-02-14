
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct mpc8610_hpcd_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mpc8610_hpcd_data {int ssi_id; TYPE_2__* guts; int * dma_channel_id; int dma_id; } ;
struct TYPE_4__ {int pmuxcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;

int FUNC_2(struct platform_device *VAR_4)
{
 struct mpc8610_hpcd_data *VAR_5 =
  VAR_4->dev.platform_data;



 FUNC_1(VAR_5->guts, VAR_5->dma_id,
  VAR_5->dma_channel_id[0], 0);
 FUNC_1(VAR_5->guts, VAR_5->dma_id,
  VAR_5->dma_channel_id[1], 0);

 switch (VAR_5->ssi_id) {
 case 0:
  FUNC_0(&VAR_5->guts->pmuxcr,
   VAR_1, VAR_0);
  break;
 case 1:
  FUNC_0(&VAR_5->guts->pmuxcr,
   VAR_3, VAR_2);
  break;
 }

 return 0;
}
