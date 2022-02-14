
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_ice1712 {int playback_pro_size; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {size_t buffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_4(VAR_3);
 size_t VAR_5;

 if (!(FUNC_2(FUNC_0(VAR_4, VAR_1)) & VAR_0))
  return 0;
 VAR_5 = VAR_4->playback_pro_size - (FUNC_3(FUNC_0(VAR_4, VAR_2)) << 2);
 if (VAR_5 == VAR_3->runtime->buffer_size)
  VAR_5 = 0;
 return FUNC_1(VAR_3->runtime, VAR_5);
}
