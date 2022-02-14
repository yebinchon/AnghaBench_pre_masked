
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* pcm; } ;
struct TYPE_4__ {scalar_t__ data; } ;
struct snd_card_aica {int channel; TYPE_2__ timer; } ;
struct TYPE_3__ {struct snd_card_aica* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream
     *VAR_1)
{
 struct snd_card_aica *VAR_2 = VAR_1->pcm->private_data;
 FUNC_1(VAR_0);
 if (VAR_2->timer.data)
  FUNC_0(&VAR_2->timer);
 FUNC_2(VAR_2->channel);
 FUNC_3();
 return 0;
}
