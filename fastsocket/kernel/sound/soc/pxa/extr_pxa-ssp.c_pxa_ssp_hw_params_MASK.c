
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {struct ssp_device* ssp; } ;
struct ssp_priv {int dai_fmt; TYPE_2__ dev; } ;
struct ssp_device {TYPE_3__* pdev; } ;
struct snd_soc_pcm_runtime {TYPE_1__* dai; } ;
struct snd_soc_dai {scalar_t__ dma_data; struct ssp_priv* private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {struct snd_soc_dai* cpu_dai; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_10 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (struct ssp_device*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct snd_pcm_hw_params*) ;
 int FUNC_11 (struct snd_pcm_hw_params*) ;
 int FUNC_12 (int) ;
 scalar_t__ FUNC_13 (struct ssp_device*,int,int) ;
 int FUNC_14 (struct ssp_device*) ;
 int FUNC_15 (struct ssp_device*,int ) ;
 int FUNC_16 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_17(struct snd_pcm_substream *VAR_11,
    struct snd_pcm_hw_params *VAR_12,
    struct snd_soc_dai *VAR_13)
{
 struct snd_soc_pcm_runtime *VAR_14 = VAR_11->private_data;
 struct snd_soc_dai *VAR_15 = VAR_14->dai->cpu_dai;
 struct ssp_priv *VAR_16 = VAR_15->private_data;
 struct ssp_device *VAR_17 = VAR_16->dev.ssp;
 int VAR_18 = FUNC_10(VAR_12);
 u32 VAR_19;
 u32 VAR_20;
 int VAR_21 = FUNC_12(FUNC_11(VAR_12));
 int VAR_22 = FUNC_15(VAR_17, VAR_10) & 0xf;


 if (VAR_15->dma_data)
  FUNC_9(VAR_15->dma_data);





 VAR_15->dma_data = FUNC_13(VAR_17,
   ((VAR_18 == 2) && (VAR_22 != 1)) || (VAR_21 == 32),
   VAR_11->stream == VAR_1);


 if (FUNC_15(VAR_17, VAR_3) & VAR_8)
  return 0;


 VAR_19 = FUNC_15(VAR_17, VAR_3) & ~(VAR_4 | VAR_5);
 FUNC_16(VAR_17, VAR_3, VAR_19);


 VAR_19 = FUNC_15(VAR_17, VAR_3);
 switch (FUNC_11(VAR_12)) {
 case 131:




  VAR_19 |= FUNC_0(16);
  break;
 case 130:
  VAR_19 |= (VAR_5 | FUNC_0(8));
  break;
 case 129:
  VAR_19 |= (VAR_5 | FUNC_0(16));
  break;
 }
 FUNC_16(VAR_17, VAR_3, VAR_19);

 switch (VAR_16->dai_fmt & VAR_2) {
 case 128:
        VAR_20 = FUNC_15(VAR_17, VAR_9);

  if ((FUNC_14(VAR_17) == 4) && (VAR_21 == 16)) {
   return -VAR_0;

  } else {






   VAR_20 |= FUNC_5(VAR_21 + 1);
   VAR_20 |= FUNC_4((VAR_21 + 1) * 2);
   VAR_20 |= FUNC_2(1);
  }

  FUNC_16(VAR_17, VAR_9, VAR_20);
  break;
 default:
  break;
 }




 if ((VAR_19 & VAR_7) && !VAR_22) {
  FUNC_7(&VAR_17->pdev->dev, "No TDM timeslot configured\n");
  return -VAR_0;
 }

 FUNC_8(VAR_17);

 return 0;
}
