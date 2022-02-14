
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_util_memhdr {int dummy; } ;
struct snd_sf_sample {int dummy; } ;
struct TYPE_2__ {int (* sample_free ) (struct snd_emux*,struct snd_sf_sample*,struct snd_util_memhdr*) ;} ;
struct snd_emux {TYPE_1__ ops; } ;


 int FUNC_0 (struct snd_emux*,struct snd_sf_sample*,struct snd_util_memhdr*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct snd_sf_sample *VAR_1,
       struct snd_util_memhdr *VAR_2)
{
 struct snd_emux *VAR_3 = VAR_0;
 return VAR_3->ops.sample_free(VAR_3, VAR_1, VAR_2);

}
