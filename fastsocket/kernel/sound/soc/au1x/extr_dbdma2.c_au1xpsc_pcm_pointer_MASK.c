
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_2__ {int pos; } ;


 size_t FUNC_0 (struct snd_pcm_substream*) ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_1)
{
 return FUNC_1(VAR_1->runtime,
  VAR_0[FUNC_0(VAR_1)]->pos);
}
