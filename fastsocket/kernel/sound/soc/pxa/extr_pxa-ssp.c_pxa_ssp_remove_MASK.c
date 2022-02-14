
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ssp; } ;
struct ssp_priv {TYPE_1__ dev; } ;
struct snd_soc_dai {struct ssp_priv* private_data; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_0,
         struct snd_soc_dai *VAR_1)
{
 struct ssp_priv *VAR_2 = VAR_1->private_data;
 FUNC_0(VAR_2->dev.ssp);
}
