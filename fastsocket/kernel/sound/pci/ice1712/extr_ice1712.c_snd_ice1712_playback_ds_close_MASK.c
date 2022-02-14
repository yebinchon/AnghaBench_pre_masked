
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {int number; } ;
struct snd_ice1712 {int ** playback_con_substream_ds; int reg_lock; } ;


 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3;

 FUNC_4(&VAR_2->reg_lock);
 VAR_3 = FUNC_1(FUNC_0(VAR_2, VAR_0)) | (3 << (VAR_1->number * 2));
 FUNC_2(VAR_3, FUNC_0(VAR_2, VAR_0));
 FUNC_5(&VAR_2->reg_lock);
 VAR_2->playback_con_substream_ds[VAR_1->number] = ((void*)0);
 return 0;
}
