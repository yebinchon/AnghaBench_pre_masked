
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_substream* task_name; struct snd_pcm_substream* next; } ;
struct snd_pcm_str {size_t stream; scalar_t__ pcm; struct snd_pcm_substream* substream; } ;
struct snd_pcm_oss_stream {struct snd_pcm_substream* setup_list; } ;
struct snd_pcm_oss_setup {struct snd_pcm_oss_setup* task_name; struct snd_pcm_oss_setup* next; } ;
struct snd_pcm2 {struct snd_pcm_oss_stream* oss_streams; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct snd_pcm_str*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_str * VAR_0)
{
 struct snd_pcm_substream *VAR_1, *VAR_2;



 VAR_1 = VAR_0->substream;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
 FUNC_1(VAR_0);
}
