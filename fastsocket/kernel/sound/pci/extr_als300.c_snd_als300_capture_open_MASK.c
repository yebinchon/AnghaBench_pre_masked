
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_als300_substream_data* private_data; int hw; } ;
struct snd_als300_substream_data {int block_counter_register; int control_register; } ;
struct snd_als300 {struct snd_pcm_substream* capture_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_als300_substream_data* FUNC_0 (int,int ) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct snd_als300* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_4)
{
 struct snd_als300 *VAR_5 = FUNC_3(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 struct snd_als300_substream_data *VAR_7 = FUNC_0(sizeof(*VAR_7),
        VAR_0);

 FUNC_1();
 VAR_5->capture_substream = VAR_4;
 VAR_6->hw = VAR_3;
 VAR_6->private_data = VAR_7;
 VAR_7->control_register = VAR_2;
 VAR_7->block_counter_register = VAR_1;
 FUNC_2();
 return 0;
}
