
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int reg; size_t size; scalar_t__ addr; } ;
struct snd_ad1889 {TYPE_1__ ramc; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (struct snd_ad1889*,int ) ;
 int FUNC_1 (int ,size_t) ;
 scalar_t__ FUNC_2 (int) ;
 struct snd_ad1889* FUNC_3 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_5(struct snd_pcm_substream *VAR_2)
{
 size_t VAR_3 = 0;
 struct snd_ad1889 *VAR_4 = FUNC_3(VAR_2);

 if (FUNC_4(!(VAR_4->ramc.reg & VAR_1)))
  return 0;

 VAR_3 = FUNC_0(VAR_4, VAR_0);
 VAR_3 -= VAR_4->ramc.addr;

 if (FUNC_2(VAR_3 >= VAR_4->ramc.size))
  return 0;

 return FUNC_1(VAR_2->runtime, VAR_3);
}
