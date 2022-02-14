
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_codec {int mutex; TYPE_2__* ac97; } ;
struct snd_ac97_bus_ops {int dummy; } ;
struct snd_ac97_bus {int dummy; } ;
struct snd_ac97 {int dummy; } ;
struct TYPE_4__ {int num; TYPE_1__* bus; } ;
struct TYPE_3__ {struct snd_ac97_bus_ops* ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_soc_codec *VAR_2,
 struct snd_ac97_bus_ops *VAR_3, int VAR_4)
{
 FUNC_2(&VAR_2->mutex);

 VAR_2->ac97 = FUNC_1(sizeof(struct snd_ac97), VAR_1);
 if (VAR_2->ac97 == ((void*)0)) {
  FUNC_3(&VAR_2->mutex);
  return -VAR_0;
 }

 VAR_2->ac97->bus = FUNC_1(sizeof(struct snd_ac97_bus), VAR_1);
 if (VAR_2->ac97->bus == ((void*)0)) {
  FUNC_0(VAR_2->ac97);
  VAR_2->ac97 = ((void*)0);
  FUNC_3(&VAR_2->mutex);
  return -VAR_0;
 }

 VAR_2->ac97->bus->ops = VAR_3;
 VAR_2->ac97->num = VAR_4;
 FUNC_3(&VAR_2->mutex);
 return 0;
}
