
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct snd_amd7930 {int flags; size_t c_cur; size_t c_orig; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (int ,size_t) ;
 struct snd_amd7930* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_amd7930 *VAR_2 = FUNC_1(VAR_1);
 size_t VAR_3;

 if (!(VAR_2->flags & VAR_0))
  return 0;

 VAR_3 = VAR_2->c_cur - VAR_2->c_orig;
 return FUNC_0(VAR_1->runtime, VAR_3);
}
