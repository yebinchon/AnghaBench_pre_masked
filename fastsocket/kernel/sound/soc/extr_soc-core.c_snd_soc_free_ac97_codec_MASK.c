
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_codec {int mutex; TYPE_1__* ac97; } ;
struct TYPE_2__ {struct TYPE_2__* bus; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct snd_soc_codec *VAR_0)
{
 FUNC_1(&VAR_0->mutex);
 FUNC_0(VAR_0->ac97->bus);
 FUNC_0(VAR_0->ac97);
 VAR_0->ac97 = ((void*)0);
 FUNC_2(&VAR_0->mutex);
}
