
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; TYPE_1__* pcm; } ;
struct snd_pcm_runtime {TYPE_2__* status; } ;
struct snd_card {int dummy; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {struct snd_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (struct snd_pcm_substream*,int const) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_card*) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (struct snd_card*,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3)
{
 struct snd_card *VAR_4 = VAR_3->pcm->card;
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 int VAR_6;

 FUNC_3(VAR_4);
 if (VAR_5->status->state == VAR_2) {
  VAR_6 = FUNC_5(VAR_4, VAR_1);
  if (VAR_6 < 0)
   goto _unlock;
 }

 FUNC_1(VAR_3);
 switch (VAR_5->status->state) {
 case 128:
  VAR_6 = 0;
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_3, 128);
  break;
 default:
  VAR_6 = -VAR_0;
 }
 FUNC_2(VAR_3);
 _unlock:
 FUNC_4(VAR_4);
 return VAR_6;
}
