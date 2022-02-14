
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ssp; } ;
struct ssp_priv {unsigned int dai_fmt; TYPE_1__ dev; } ;
struct snd_soc_dai {struct ssp_priv* private_data; scalar_t__ id; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ssp_priv*) ;
 struct ssp_priv* FUNC_1 (int,int ) ;
 int * FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_3,
       struct snd_soc_dai *VAR_4)
{
 struct ssp_priv *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(sizeof(struct ssp_priv), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->dev.ssp = FUNC_2(VAR_4->id + 1, "SoC audio");
 if (VAR_5->dev.ssp == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err_priv;
 }

 VAR_5->dai_fmt = (unsigned int) -1;
 VAR_4->private_data = VAR_5;

 return 0;

err_priv:
 FUNC_0(VAR_5);
 return VAR_6;
}
