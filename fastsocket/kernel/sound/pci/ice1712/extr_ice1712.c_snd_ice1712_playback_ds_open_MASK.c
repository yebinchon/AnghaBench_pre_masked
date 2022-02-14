
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {size_t number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct snd_ice1712 {int reg_lock; struct snd_pcm_substream** playback_con_substream_ds; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_1 ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_ice1712 *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5;

 VAR_4->playback_con_substream_ds[VAR_2->number] = VAR_2;
 VAR_3->hw = VAR_1;
 FUNC_4(&VAR_4->reg_lock);
 VAR_5 = FUNC_1(FUNC_0(VAR_4, VAR_0)) & ~(1 << (VAR_2->number * 2));
 FUNC_2(VAR_5, FUNC_0(VAR_4, VAR_0));
 FUNC_5(&VAR_4->reg_lock);
 return 0;
}
