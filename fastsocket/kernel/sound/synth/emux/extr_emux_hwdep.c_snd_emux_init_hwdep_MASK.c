
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ioctl; } ;
struct snd_hwdep {int exclusive; struct snd_emux* private_data; TYPE_1__ ops; int iface; int name; } ;
struct snd_emux {int card; struct snd_hwdep* hwdep; int hwdep_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,struct snd_hwdep**) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3(struct snd_emux *VAR_3)
{
 struct snd_hwdep *VAR_4;
 int VAR_5;

 if ((VAR_5 = FUNC_1(VAR_3->card, VAR_0, VAR_3->hwdep_idx, &VAR_4)) < 0)
  return VAR_5;
 VAR_3->hwdep = VAR_4;
 FUNC_2(VAR_4->name, VAR_0);
 VAR_4->iface = VAR_1;
 VAR_4->ops.ioctl = VAR_2;
 VAR_4->exclusive = 1;
 VAR_4->private_data = VAR_3;
 if ((VAR_5 = FUNC_0(VAR_3->card)) < 0)
  return VAR_5;

 return 0;
}
