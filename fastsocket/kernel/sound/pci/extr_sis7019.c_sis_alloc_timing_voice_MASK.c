
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct voice {TYPE_1__* timing; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct voice* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct sis7019 {int voice_lock; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sis7019*) ;
 int FUNC_1 (struct sis7019*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct sis7019*,struct voice*) ;
 struct sis7019* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 struct sis7019 *VAR_3 = FUNC_5(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct voice *VAR_5 = VAR_4->private_data;
 unsigned int VAR_6, VAR_7;
 unsigned long VAR_8;
 int VAR_9;





 VAR_6 = FUNC_3(VAR_2);
 VAR_7 = FUNC_2(VAR_2);
 VAR_9 = (VAR_6 != VAR_7 &&
   VAR_6 != (VAR_7 / 2));

 if (VAR_9 && !VAR_5->timing) {
  FUNC_6(&VAR_3->voice_lock, VAR_8);
  VAR_5->timing = FUNC_0(VAR_3);
  if (VAR_5->timing)
   FUNC_1(VAR_3);
  FUNC_7(&VAR_3->voice_lock, VAR_8);
  if (!VAR_5->timing)
   return -VAR_0;
  VAR_5->timing->substream = VAR_1;
 } else if (!VAR_9 && VAR_5->timing) {
  FUNC_4(VAR_3, VAR_5);
  VAR_5->timing = ((void*)0);
 }

 return 0;
}
