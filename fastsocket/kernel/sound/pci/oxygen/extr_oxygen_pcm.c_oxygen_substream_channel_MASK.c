
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {scalar_t__ private_data; } ;



__attribute__((used)) static inline unsigned int
FUNC_0(struct snd_pcm_substream *VAR_0)
{
 return (unsigned int)(uintptr_t)VAR_0->runtime->private_data;
}
