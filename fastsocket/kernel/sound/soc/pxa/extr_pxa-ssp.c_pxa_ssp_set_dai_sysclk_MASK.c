
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct ssp_device* ssp; } ;
struct ssp_priv {int sysclk; TYPE_2__ dev; } ;
struct ssp_device {int clk; TYPE_1__* pdev; } ;
struct snd_soc_dai {int id; struct ssp_priv* private_data; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*,int ,int,unsigned int) ;
 int FUNC_5 (struct ssp_device*,int ) ;
 int FUNC_6 (struct ssp_device*,int) ;
 int FUNC_7 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_6,
 int VAR_7, unsigned int VAR_8, int VAR_9)
{
 struct ssp_priv *VAR_10 = VAR_6->private_data;
 struct ssp_device *VAR_11 = VAR_10->dev.ssp;
 int VAR_12;

 u32 VAR_13 = FUNC_5(VAR_11, VAR_1) &
  ~(VAR_3 | VAR_5 | VAR_4 | VAR_2);

 FUNC_4(&VAR_11->pdev->dev,
  "pxa_ssp_set_dai_sysclk id: %d, clk_id %d, freq %u\n",
  VAR_6->id, VAR_7, VAR_8);

 switch (VAR_7) {
 case 129:
  VAR_13 |= VAR_4;
  break;
 case 128:

  if (FUNC_2())
   VAR_10->sysclk = 1843200;
  else
   VAR_10->sysclk = 13000000;
  break;
 case 131:
  VAR_10->sysclk = VAR_8;
  VAR_13 |= VAR_3;
  break;
 case 130:
  VAR_10->sysclk = VAR_8;
  VAR_13 |= VAR_5 | VAR_4;
  break;
 case 132:
  VAR_10->sysclk = 0;
  FUNC_6(VAR_11, 1);
  VAR_13 |= VAR_2;
  break;
 default:
  return -VAR_0;
 }



 if (!FUNC_3())
  FUNC_0(VAR_10->dev.ssp->clk);
 VAR_12 = FUNC_5(VAR_11, VAR_1) | VAR_13;
 FUNC_7(VAR_11, VAR_1, VAR_12);
 if (!FUNC_3())
  FUNC_1(VAR_10->dev.ssp->clk);

 return 0;
}
