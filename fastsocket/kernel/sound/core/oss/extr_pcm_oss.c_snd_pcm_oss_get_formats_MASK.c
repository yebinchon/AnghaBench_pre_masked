
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {int mmap_count; } ;
struct snd_pcm_oss_file {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct TYPE_4__ {int direct; } ;
struct TYPE_5__ {TYPE_1__ setup; } ;
struct TYPE_6__ {TYPE_2__ oss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_1 (int *) ;
 struct snd_mask* FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct snd_pcm_hw_params* FUNC_4 (int,int ) ;
 TYPE_3__* FUNC_5 (struct snd_pcm_substream*) ;
 scalar_t__ FUNC_6 (struct snd_mask*,int) ;
 int FUNC_7 (struct snd_pcm_substream*,struct snd_pcm_hw_params*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct snd_pcm_oss_file*,struct snd_pcm_substream**) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_oss_file *VAR_15)
{
 struct snd_pcm_substream *VAR_16;
 int VAR_17;
 int VAR_18;
 struct snd_pcm_hw_params *VAR_19;
 unsigned int VAR_20 = 0;
 struct snd_mask VAR_21;
 int VAR_22;

 if ((VAR_17 = FUNC_9(VAR_15, &VAR_16)) < 0)
  return VAR_17;
 if (FUNC_1(&VAR_16->mmap_count))
  VAR_18 = 1;
 else
  VAR_18 = FUNC_5(VAR_16)->oss.setup.direct;
 if (!VAR_18)
  return VAR_0 | VAR_11 |
         VAR_2 | VAR_1 |
         VAR_8 | VAR_10 |
         VAR_9 |
   VAR_7 | VAR_6 |
   VAR_4 | VAR_3 |
   VAR_5;
 VAR_19 = FUNC_4(sizeof(*VAR_19), VAR_13);
 if (!VAR_19)
  return -VAR_12;
 FUNC_0(VAR_19);
 VAR_17 = FUNC_7(VAR_16, VAR_19);
 VAR_21 = *FUNC_2(VAR_19, VAR_14);
 FUNC_3(VAR_19);
 if (VAR_17 < 0)
  return VAR_17;
 for (VAR_22 = 0; VAR_22 < 32; ++VAR_22) {
  if (FUNC_6(&VAR_21, VAR_22)) {
   int VAR_23 = FUNC_8(VAR_22);
   if (VAR_23 >= 0)
    VAR_20 |= VAR_23;
  }
 }
 return VAR_20;
}
