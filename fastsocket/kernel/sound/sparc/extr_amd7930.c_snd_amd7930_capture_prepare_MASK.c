
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ format; int dma_area; } ;
struct TYPE_2__ {int mmr1; } ;
struct snd_amd7930 {unsigned int c_left; int lock; TYPE_1__ map; int c_cur; int c_orig; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_amd7930*) ;
 unsigned int FUNC_1 (struct snd_pcm_substream*) ;
 struct snd_amd7930* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3)
{
 struct snd_amd7930 *VAR_4 = FUNC_2(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 unsigned int VAR_6 = FUNC_1(VAR_3);
 unsigned long VAR_7;
 u8 VAR_8;

 FUNC_3(&VAR_4->lock, VAR_7);

 VAR_4->flags |= VAR_0;


 VAR_4->c_orig = VAR_4->c_cur = VAR_5->dma_area;
 VAR_4->c_left = VAR_6;


 VAR_8 = VAR_4->map.mmr1;
 if (VAR_5->format == VAR_2)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;
 if (VAR_8 != VAR_4->map.mmr1) {
  VAR_4->map.mmr1 = VAR_8;
  FUNC_0(VAR_4);
 }

 FUNC_4(&VAR_4->lock, VAR_7);

 return 0;
}
