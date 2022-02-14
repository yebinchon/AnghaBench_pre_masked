
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; struct aaci* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct aaci_runtime {int cr; int fifosz; } ;
struct aaci {int fifosize; } ;
struct TYPE_2__ {struct aaci_runtime* private_data; } ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct snd_pcm_substream*,struct aaci_runtime*,struct snd_pcm_hw_params*) ;
 int* VAR_3 ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4,
           struct snd_pcm_hw_params *VAR_5)
{
 struct aaci *VAR_6 = VAR_4->private_data;
 struct aaci_runtime *VAR_7 = VAR_4->runtime->private_data;
 unsigned int VAR_8 = FUNC_3(VAR_5);
 int VAR_9;

 FUNC_1(VAR_8 >= FUNC_0(VAR_3) ||
  !VAR_3[VAR_8]);

 VAR_9 = FUNC_2(VAR_4, VAR_7, VAR_5);





 if (VAR_9 >= 0) {
  VAR_7->cr = VAR_1 | VAR_0 | VAR_2;
  VAR_7->cr |= VAR_3[VAR_8];

  VAR_7->fifosz = VAR_6->fifosize * 4;
  if (VAR_7->cr & VAR_0)
   VAR_7->fifosz >>= 1;
 }
 return VAR_9;
}
