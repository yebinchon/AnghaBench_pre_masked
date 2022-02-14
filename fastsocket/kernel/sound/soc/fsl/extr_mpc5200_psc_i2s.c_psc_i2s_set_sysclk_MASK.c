
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct psc_dma* private_data; } ;
struct psc_dma {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct snd_soc_dai*,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_2,
         int VAR_3, unsigned int VAR_4, int VAR_5)
{
 struct psc_dma *VAR_6 = VAR_2->private_data;
 FUNC_0(VAR_6->dev, "psc_i2s_set_sysclk(cpu_dai=%p, dir=%i)\n",
    VAR_2, VAR_5);
 return (VAR_5 == VAR_1) ? 0 : -VAR_0;
}
