
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {int dummy; } ;
struct fsi_priv {int chan; int dma_chan; TYPE_1__* substream; } ;
struct TYPE_2__ {struct snd_pcm_runtime* runtime; } ;


 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (struct fsi_priv*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct fsi_priv *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct snd_pcm_runtime *VAR_4;

 VAR_4 = VAR_0->substream->runtime;


 VAR_3 = FUNC_0(VAR_4, 1) / VAR_0->chan;

 if (2 == VAR_3)
  VAR_2 = FUNC_1(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_2(VAR_0->dma_chan);

 return VAR_2;
}
