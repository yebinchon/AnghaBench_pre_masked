
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm* pcm; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct snd_pcm {TYPE_1__* card; int open_wait; int open_mutex; } ;
struct inode {int dummy; } ;
struct file {struct snd_pcm_file* private_data; } ;
struct TYPE_2__ {int module; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_file*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,struct file*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_1, struct file *VAR_2)
{
 struct snd_pcm *VAR_3;
 struct snd_pcm_substream *VAR_4;
 struct snd_pcm_file *VAR_5;

 VAR_5 = VAR_2->private_data;
 VAR_4 = VAR_5->substream;
 if (FUNC_4(!VAR_4))
  return -VAR_0;
 VAR_3 = VAR_4->pcm;
 FUNC_2(&VAR_3->open_mutex);
 FUNC_6(VAR_4);
 FUNC_0(VAR_5);
 FUNC_3(&VAR_3->open_mutex);
 FUNC_7(&VAR_3->open_wait);
 FUNC_1(VAR_3->card->module);
 FUNC_5(VAR_3->card, VAR_2);
 return 0;
}
