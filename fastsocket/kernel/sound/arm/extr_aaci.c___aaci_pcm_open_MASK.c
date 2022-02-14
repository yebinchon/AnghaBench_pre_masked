
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {int fifo_size; } ;
struct snd_pcm_runtime {TYPE_2__ hw; struct aaci_runtime* private_data; } ;
struct aaci_runtime {struct snd_pcm_substream* substream; } ;
struct aaci {int fifosize; TYPE_1__* dev; } ;
struct TYPE_3__ {int * irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int,int ,struct aaci*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int ,struct aaci*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct aaci *VAR_8,
      struct snd_pcm_substream *VAR_9,
      struct aaci_runtime *VAR_10)
{
 struct snd_pcm_runtime *VAR_11 = VAR_9->runtime;
 int VAR_12;

 VAR_10->substream = VAR_9;
 VAR_11->private_data = VAR_10;
 VAR_11->hw = VAR_5;
 VAR_11->hw.fifo_size = VAR_8->fifosize * 2;





 VAR_12 = FUNC_1(VAR_11, 0, VAR_4,
      VAR_7, VAR_8,
      VAR_3,
      VAR_4, -1);
 if (VAR_12)
  goto out;

 VAR_12 = FUNC_0(VAR_8->dev->irq[0], VAR_6, VAR_2|VAR_1,
     VAR_0, VAR_8);
 if (VAR_12)
  goto out;

 return 0;

 out:
 return VAR_12;
}
