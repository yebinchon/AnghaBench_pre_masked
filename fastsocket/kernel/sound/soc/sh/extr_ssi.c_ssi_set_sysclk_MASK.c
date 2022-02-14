
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssi_priv {unsigned int sysclk; } ;
struct snd_soc_dai {size_t id; } ;


 struct ssi_priv* VAR_0 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_1, int VAR_2,
     unsigned int VAR_3, int VAR_4)
{
 struct ssi_priv *VAR_5 = &VAR_0[VAR_1->id];

 VAR_5->sysclk = VAR_3;

 return 0;
}
