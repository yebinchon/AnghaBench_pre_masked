
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {TYPE_1__* dev; } ;
struct uda1380_priv {struct snd_soc_codec codec; } ;
struct uda1380_platform_data {int gpio_power; int gpio_reset; } ;
struct TYPE_2__ {struct uda1380_platform_data* platform_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct uda1380_priv*) ;
 int FUNC_4 (struct snd_soc_codec*) ;
 int FUNC_5 (int ,int ) ;
 int * VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct uda1380_priv *VAR_2)
{
 struct snd_soc_codec *VAR_3 = &VAR_2->codec;
 struct uda1380_platform_data *VAR_4 = VAR_3->dev->platform_data;

 FUNC_5(VAR_1, FUNC_0(VAR_1));
 FUNC_4(&VAR_2->codec);

 FUNC_2(VAR_4->gpio_power, 0);
 FUNC_1(VAR_4->gpio_reset);
 FUNC_1(VAR_4->gpio_power);

 FUNC_3(VAR_2);
 VAR_0 = ((void*)0);
}
