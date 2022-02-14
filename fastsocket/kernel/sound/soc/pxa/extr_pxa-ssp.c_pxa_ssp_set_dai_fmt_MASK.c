
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {struct ssp_device* ssp; } ;
struct ssp_priv {unsigned int dai_fmt; TYPE_1__ dev; } ;
struct ssp_device {TYPE_2__* pdev; } ;
struct snd_soc_dai {struct ssp_priv* private_data; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;





 unsigned int VAR_1 ;



 unsigned int VAR_2 ;
 unsigned int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int) ;
 int VAR_18 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct ssp_device*) ;
 int FUNC_5 (struct ssp_device*,int ) ;
 int FUNC_6 (struct ssp_device*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_19,
  unsigned int VAR_20)
{
 struct ssp_priv *VAR_21 = VAR_19->private_data;
 struct ssp_device *VAR_22 = VAR_21->dev.ssp;
 u32 VAR_23;
 u32 VAR_24;
 u32 VAR_25;


 if (VAR_21->dai_fmt == VAR_20)
  return 0;


 if (FUNC_5(VAR_22, VAR_4) & VAR_10) {
  FUNC_3(&VAR_22->pdev->dev,
   "can't change hardware dai format: stream is in use");
  return -VAR_0;
 }


 VAR_23 = FUNC_5(VAR_22, VAR_4) &
  (VAR_6 | VAR_8 | VAR_7 | VAR_5);
 VAR_24 = FUNC_0(8) | FUNC_1(7);
 VAR_25 = 0;

 switch (VAR_20 & VAR_3) {
 case 137:
  VAR_24 |= VAR_13 | VAR_14;
  break;
 case 136:
  VAR_24 |= VAR_13;
  break;
 case 135:
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20 & VAR_2) {
 case 128:
  VAR_25 |= VAR_18;
  break;
 case 129:
  break;
 case 131:
  VAR_25 |= FUNC_2(2);
  break;
 case 130:
  VAR_25 |= FUNC_2(2) | VAR_18;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_20 & VAR_1) {
 case 132:
  VAR_23 |= VAR_9;
  VAR_24 |= VAR_12 | VAR_15;

  break;

 case 134:
  VAR_25 |= VAR_17;
 case 133:
  VAR_23 |= VAR_7 | VAR_9;
  VAR_24 |= VAR_15 | VAR_12;
  break;

 default:
  return -VAR_0;
 }

 FUNC_6(VAR_22, VAR_4, VAR_23);
 FUNC_6(VAR_22, VAR_11, VAR_24);
 FUNC_6(VAR_22, VAR_16, VAR_25);

 FUNC_4(VAR_22);





 VAR_21->dai_fmt = VAR_20;

 return 0;
}
