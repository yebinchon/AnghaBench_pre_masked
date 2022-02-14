
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int jack; int pins; struct snd_soc_card* card; } ;
struct snd_soc_card {TYPE_1__* codec; } ;
struct TYPE_2__ {int card; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int,int *) ;

int FUNC_2(struct snd_soc_card *VAR_0, const char *VAR_1, int VAR_2,
       struct snd_soc_jack *VAR_3)
{
 VAR_3->card = VAR_0;
 FUNC_0(&VAR_3->pins);

 return FUNC_1(VAR_0->codec->card, VAR_1, VAR_2, &VAR_3->jack);
}
