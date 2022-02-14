
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int periods; } ;
struct fsi_priv {int byte_offset; int period_len; int periods; int chan; int buffer_len; int fifo_max; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (struct fsi_priv*,struct snd_pcm_runtime*,int) ;
 int FUNC_2 (struct fsi_priv*,struct snd_pcm_runtime*,int) ;
 int FUNC_3 (struct fsi_priv*,int) ;
 int FUNC_4 (struct fsi_priv*,int) ;
 int FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct fsi_priv *VAR_1)
{
 struct snd_pcm_runtime *VAR_2;
 struct snd_pcm_substream *VAR_3 = ((void*)0);
 int VAR_4;
 int VAR_5;
 int VAR_6;

 if (!VAR_1 ||
     !VAR_1->substream ||
     !VAR_1->substream->runtime)
  return -VAR_0;

 VAR_2 = VAR_1->substream->runtime;




 if (VAR_1->byte_offset >=
     VAR_1->period_len * (VAR_1->periods + 1)) {

  VAR_3 = VAR_1->substream;
  VAR_1->periods = (VAR_1->periods + 1) % VAR_2->periods;

  if (0 == VAR_1->periods)
   VAR_1->byte_offset = 0;
 }


 VAR_6 = FUNC_0(VAR_2, 1) / VAR_1->chan;


 VAR_4 = (VAR_1->buffer_len - VAR_1->byte_offset) / VAR_6;


 VAR_5 = (VAR_1->fifo_max * VAR_1->chan) - FUNC_3(VAR_1, 1);


 if (VAR_5 < VAR_4)
  VAR_4 = VAR_5;

 if (2 == VAR_6)
  FUNC_1(VAR_1, VAR_2, VAR_4);
 else if (4 == VAR_6)
  FUNC_2(VAR_1, VAR_2, VAR_4);
 else
  return -VAR_0;

 VAR_1->byte_offset += VAR_4 * VAR_6;

 FUNC_4(VAR_1, 1);

 if (VAR_3)
  FUNC_5(VAR_3);

 return 0;
}
