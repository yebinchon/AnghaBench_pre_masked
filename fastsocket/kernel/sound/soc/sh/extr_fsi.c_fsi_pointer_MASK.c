
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct fsi_priv {int byte_offset; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,long) ;
 struct fsi_priv* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct fsi_priv*,int) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct fsi_priv *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_1->stream == VAR_0;
 long VAR_5;

 VAR_5 = (VAR_3->byte_offset - 1) - FUNC_2(VAR_3, VAR_4);
 if (VAR_5 < 0)
  VAR_5 = 0;

 return FUNC_0(VAR_2, VAR_5);
}
