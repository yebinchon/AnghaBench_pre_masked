
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_tdm_slot ) (struct snd_soc_dai*,unsigned int,unsigned int,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snd_soc_dai*,unsigned int,unsigned int,int,int) ;

int FUNC_1(struct snd_soc_dai *VAR_1,
 unsigned int VAR_2, unsigned int VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_1->ops && VAR_1->ops->set_tdm_slot)
  return VAR_1->ops->set_tdm_slot(VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_5);
 else
  return -VAR_0;
}
