
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 int VAR_5;

 FUNC_0(VAR_3);
 switch (VAR_4->status->state) {
 case 132:
  if (VAR_3->stream == VAR_2)
   goto __badfd;
 case 130:
  if ((VAR_5 = FUNC_2(VAR_3)) < 0)
   break;

 case 131:
 case 129:
  VAR_5 = 0;
  break;
 case 128:
  VAR_5 = -VAR_1;
  break;
 default:
       __badfd:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_1(VAR_3);
 return VAR_5;
}
