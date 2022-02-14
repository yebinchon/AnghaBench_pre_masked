
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_clkdiv ) (struct snd_soc_dai*,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,int,int) ;

int FUNC_1(struct snd_soc_dai *VAR_1,
 int VAR_2, int VAR_3)
{
 if (VAR_1->ops && VAR_1->ops->set_clkdiv)
  return VAR_1->ops->set_clkdiv(VAR_1, VAR_2, VAR_3);
 else
  return -VAR_0;
}
