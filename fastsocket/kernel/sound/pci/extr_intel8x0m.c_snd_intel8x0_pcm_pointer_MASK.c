
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; } ;
struct intel8x0m {size_t pcm_pos_shift; } ;
struct ichdev {size_t fragsize1; size_t size; scalar_t__ position; scalar_t__ roff_picb; scalar_t__ reg_offset; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ,size_t) ;
 struct ichdev* FUNC_1 (struct snd_pcm_substream*) ;
 size_t FUNC_2 (struct intel8x0m*,scalar_t__) ;
 struct intel8x0m* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct intel8x0m *VAR_1 = FUNC_3(VAR_0);
 struct ichdev *VAR_2 = FUNC_1(VAR_0);
 size_t VAR_3, VAR_4;

 VAR_3 = FUNC_2(VAR_1, VAR_2->reg_offset + VAR_2->roff_picb) << VAR_1->pcm_pos_shift;
 if (VAR_3 != 0)
  VAR_4 = VAR_2->fragsize1 - VAR_3;
 else
  VAR_4 = 0;
 VAR_4 += VAR_2->position;
 if (VAR_4 >= VAR_2->size)
  return 0;
 return FUNC_0(VAR_0->runtime, VAR_4);
}
