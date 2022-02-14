
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct snd_pcm_substream*,struct aaci_runtime*,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_5,
          struct snd_pcm_hw_params *VAR_6)
{
 struct aaci *VAR_7 = VAR_5->private_data;
 struct aaci_runtime *VAR_8 = VAR_5->runtime->private_data;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_6);

 if (VAR_9 >= 0) {
  VAR_8->cr = VAR_1 | VAR_0 | VAR_4;


  VAR_8->cr |= VAR_2 | VAR_3;

  VAR_8->fifosz = VAR_7->fifosize * 4;

  if (VAR_8->cr & VAR_0)
   VAR_8->fifosz >>= 1;
 }
 return VAR_9;
}
