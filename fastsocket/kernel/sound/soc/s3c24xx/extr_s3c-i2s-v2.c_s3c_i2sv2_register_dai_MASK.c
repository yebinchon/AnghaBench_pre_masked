
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai_ops {int set_clkdiv; int set_fmt; int hw_params; int trigger; } ;
struct snd_soc_dai {int resume; int suspend; struct snd_soc_dai_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_dai*) ;

int FUNC_1(struct snd_soc_dai *VAR_6)
{
 struct snd_soc_dai_ops *VAR_7 = VAR_6->ops;

 VAR_7->trigger = VAR_5;
 VAR_7->hw_params = VAR_0;
 VAR_7->set_fmt = VAR_3;
 VAR_7->set_clkdiv = VAR_2;

 VAR_6->suspend = VAR_4;
 VAR_6->resume = VAR_1;

 return FUNC_0(VAR_6);
}
