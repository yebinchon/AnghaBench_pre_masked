
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int period_size; int buffer_size; } ;
struct fsi_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct fsi_priv*) ;
 struct fsi_priv* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct fsi_priv*,int) ;
 int FUNC_4 (struct fsi_priv*) ;
 int FUNC_5 (struct fsi_priv*,struct snd_pcm_substream*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2, int VAR_3,
      struct snd_soc_dai *VAR_4)
{
 struct fsi_priv *VAR_5 = FUNC_2(VAR_2);
 struct snd_pcm_runtime *VAR_6 = VAR_2->runtime;
 int VAR_7 = VAR_2->stream == VAR_1;
 int VAR_8 = 0;


 if (!VAR_7)
  return -VAR_0;

 switch (VAR_3) {
 case 129:
  FUNC_5(VAR_5, VAR_2,
    FUNC_0(VAR_6, VAR_6->buffer_size),
    FUNC_0(VAR_6, VAR_6->period_size));
  VAR_8 = FUNC_1(VAR_5);
  break;
 case 128:
  FUNC_3(VAR_5, VAR_7);
  FUNC_4(VAR_5);
  break;
 }

 return VAR_8;
}
