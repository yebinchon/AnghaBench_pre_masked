
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int cs8403_bits; int cs8403_stream_bits; } ;
struct snd_ice1712 {TYPE_1__ spdif; } ;



__attribute__((used)) static void FUNC_0(struct snd_ice1712 *VAR_0, struct snd_pcm_substream *VAR_1)
{
 VAR_0->spdif.cs8403_stream_bits = VAR_0->spdif.cs8403_bits;
}
