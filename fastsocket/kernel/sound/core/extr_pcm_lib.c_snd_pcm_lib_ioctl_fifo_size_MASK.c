
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct snd_pcm_hw_params {int fifo_size; } ;
typedef int snd_pcm_format_t ;
struct TYPE_3__ {int fifo_size; int info; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1,
           void *VAR_2)
{
 struct snd_pcm_hw_params *VAR_3 = VAR_2;
 snd_pcm_format_t VAR_4;
 int VAR_5, VAR_6;

 VAR_3->fifo_size = VAR_1->runtime->hw.fifo_size;
 if (!(VAR_1->runtime->hw.info & VAR_0)) {
  VAR_4 = FUNC_1(VAR_3);
  VAR_5 = FUNC_0(VAR_3);
  VAR_6 = FUNC_2(VAR_4);
  VAR_3->fifo_size /= VAR_6 * VAR_5;
 }
 return 0;
}
