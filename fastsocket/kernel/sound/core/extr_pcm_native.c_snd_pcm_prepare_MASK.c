
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int f_flags; TYPE_1__* pcm; } ;
struct snd_card {int dummy; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {struct snd_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct snd_pcm_substream*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct snd_card*) ;
 int FUNC_2 (struct snd_card*) ;
 int FUNC_3 (struct snd_card*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
      struct file *VAR_3)
{
 int VAR_4;
 struct snd_card *VAR_5 = VAR_2->pcm->card;
 int VAR_6;

 if (VAR_3)
  VAR_6 = VAR_3->f_flags;
 else
  VAR_6 = VAR_2->f_flags;

 FUNC_1(VAR_5);
 if ((VAR_4 = FUNC_3(VAR_5, VAR_0)) >= 0)
  VAR_4 = FUNC_0(&VAR_1,
            VAR_2, VAR_6);
 FUNC_2(VAR_5);
 return VAR_4;
}
