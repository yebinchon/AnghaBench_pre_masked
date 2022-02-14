
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_2__* control; TYPE_1__* status; int sleep; } ;
struct snd_pcm_file {struct snd_pcm_substream* substream; } ;
struct file {struct snd_pcm_file* private_data; } ;
typedef int snd_pcm_uframes_t ;
typedef int poll_table ;
struct TYPE_4__ {int avail_min; } ;
struct TYPE_3__ {int state; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_pcm_substream*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;




 int FUNC_1 (struct file*,int *,int *) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static unsigned int FUNC_5(struct file *VAR_4, poll_table * VAR_5)
{
 struct snd_pcm_file *VAR_6;
 struct snd_pcm_substream *VAR_7;
 struct snd_pcm_runtime *VAR_8;
        unsigned int VAR_9;
 snd_pcm_uframes_t VAR_10;

 VAR_6 = VAR_4->private_data;

 VAR_7 = VAR_6->substream;
 if (FUNC_0(VAR_7))
  return -VAR_0;
 VAR_8 = VAR_7->runtime;

 FUNC_1(VAR_4, &VAR_8->sleep, VAR_5);

 FUNC_3(VAR_7);
 VAR_10 = FUNC_2(VAR_8);
 switch (VAR_8->status->state) {
 case 128:
 case 129:
 case 130:
  if (VAR_10 >= VAR_8->control->avail_min) {
   VAR_9 = VAR_2 | VAR_3;
   break;
  }
  VAR_9 = 0;
  break;
 case 131:
  if (VAR_10 > 0) {
   VAR_9 = VAR_2 | VAR_3;
   break;
  }

 default:
  VAR_9 = VAR_2 | VAR_3 | VAR_1;
  break;
 }
 FUNC_4(VAR_7);
 return VAR_9;
}
