
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct davinci_runtime_data {int lock; } ;
struct TYPE_2__ {struct davinci_runtime_data* private_data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (char*,unsigned int,scalar_t__) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(unsigned VAR_1, u16 VAR_2, void *VAR_3)
{
 struct snd_pcm_substream *VAR_4 = VAR_3;
 struct davinci_runtime_data *VAR_5 = VAR_4->runtime->private_data;

 FUNC_1("davinci_pcm: lch=%d, status=0x%x\n", VAR_1, VAR_2);

 if (FUNC_6(VAR_2 != VAR_0))
  return;

 if (FUNC_3(VAR_4)) {
  FUNC_2(VAR_4);

  FUNC_4(&VAR_5->lock);
  FUNC_0(VAR_4);
  FUNC_5(&VAR_5->lock);
 }
}
