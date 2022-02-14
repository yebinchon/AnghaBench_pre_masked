
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct sport_device* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct sport_device*) ;
 int FUNC_1 (struct sport_device*) ;
 int FUNC_2 (struct sport_device*) ;
 int FUNC_3 (struct sport_device*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct sport_device *VAR_5 = VAR_4->private_data;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 130:
  if (VAR_2->stream == VAR_1)
   FUNC_2(VAR_5);
  else
   FUNC_0(VAR_5);
  break;
 case 129:
 case 128:
 case 131:
  if (VAR_2->stream == VAR_1)
   FUNC_3(VAR_5);
  else
   FUNC_1(VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
