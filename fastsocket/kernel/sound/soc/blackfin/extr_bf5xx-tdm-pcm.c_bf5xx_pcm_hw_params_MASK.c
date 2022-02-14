
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_2__ {size_t buffer_bytes_max; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_substream*,size_t) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_1,
 struct snd_pcm_hw_params *VAR_2)
{
 size_t VAR_3 = VAR_0.buffer_bytes_max;
 FUNC_0(VAR_1, VAR_3 * 4);

 return 0;
}
