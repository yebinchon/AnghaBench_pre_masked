
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct mixart_stream {void* status; } ;
struct TYPE_2__ {struct mixart_stream* private_data; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;




 int FUNC_0 (struct mixart_stream*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct mixart_stream *VAR_6 = VAR_4->runtime->private_data;

 switch (VAR_5) {
 case 129:

  FUNC_1("SNDRV_PCM_TRIGGER_START\n");


  if( FUNC_0(VAR_6, 1) )
   return -VAR_0;

  VAR_6->status = VAR_3;

  break;
 case 128:


  if( FUNC_0(VAR_6, 0) )
   return -VAR_0;

  VAR_6->status = VAR_1;

  FUNC_1("SNDRV_PCM_TRIGGER_STOP\n");

  break;

 case 131:

  VAR_6->status = VAR_2;
  FUNC_1("SNDRV_PCM_PAUSE_PUSH\n");
  break;
 case 130:

  VAR_6->status = VAR_3;
  FUNC_1("SNDRV_PCM_PAUSE_RELEASE\n");
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
