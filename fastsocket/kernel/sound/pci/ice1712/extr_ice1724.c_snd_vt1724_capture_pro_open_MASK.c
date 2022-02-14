
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; void* private_data; } ;
struct snd_ice1712 {struct snd_pcm_substream* capture_pro_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ice1712*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_4 (struct snd_pcm_substream*) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5)
{
 struct snd_ice1712 *VAR_6 = FUNC_4(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;

 VAR_7->private_data = (void *)&VAR_4;
 VAR_6->capture_pro_substream = VAR_5;
 VAR_7->hw = VAR_3;
 FUNC_3(VAR_5);
 FUNC_1(VAR_7, 0, 32, 24);
 FUNC_0(VAR_6, VAR_5);
 FUNC_2(VAR_7, 0, VAR_1,
       VAR_2);
 FUNC_2(VAR_7, 0, VAR_0,
       VAR_2);
 return 0;
}
