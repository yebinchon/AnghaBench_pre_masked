
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {int formats_ok; int freqs_ok; } ;
struct snd_pcm_substream {int dummy; } ;
struct pmac_stream {int cur_formats; int cur_freqs; int stream; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pmac_stream*) ;
 struct pmac_stream* FUNC_2 (struct snd_pmac*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pmac *VAR_1, struct pmac_stream *VAR_2,
         struct snd_pcm_substream *VAR_3)
{
 struct pmac_stream *VAR_4;

 FUNC_1(VAR_2);

 VAR_4 = FUNC_2(VAR_1, FUNC_0(VAR_2->stream));
 if (! VAR_4)
  return -VAR_0;


 VAR_4->cur_freqs = VAR_1->freqs_ok;
 VAR_4->cur_formats = VAR_1->formats_ok;

 return 0;
}
