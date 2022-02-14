
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ boundary; TYPE_2__* control; TYPE_1__* status; } ;
typedef scalar_t__ snd_pcm_uframes_t ;
typedef scalar_t__ snd_pcm_sframes_t ;
struct TYPE_4__ {scalar_t__ appl_ptr; } ;
struct TYPE_3__ {int state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;






 scalar_t__ FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_sframes_t FUNC_4(struct snd_pcm_substream *VAR_3,
       snd_pcm_uframes_t VAR_4)
{
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 snd_pcm_sframes_t VAR_6;
 snd_pcm_sframes_t VAR_7;
 snd_pcm_sframes_t VAR_8;

 if (VAR_4 == 0)
  return 0;

 FUNC_1(VAR_3);
 switch (VAR_5->status->state) {
 case 131:
 case 133:
 case 132:
  break;
 case 130:
  if (FUNC_3(VAR_3) >= 0)
   break;

 case 128:
  VAR_7 = -VAR_1;
  goto __end;
 case 129:
  VAR_7 = -VAR_2;
  goto __end;
 default:
  VAR_7 = -VAR_0;
  goto __end;
 }

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 <= 0) {
  VAR_7 = 0;
  goto __end;
 }
 if (VAR_4 > (snd_pcm_uframes_t)VAR_8)
  VAR_4 = VAR_8;
 VAR_6 = VAR_5->control->appl_ptr + VAR_4;
 if (VAR_6 >= (snd_pcm_sframes_t)VAR_5->boundary)
  VAR_6 -= VAR_5->boundary;
 VAR_5->control->appl_ptr = VAR_6;
 VAR_7 = VAR_4;
 __end:
 FUNC_2(VAR_3);
 return VAR_7;
}
