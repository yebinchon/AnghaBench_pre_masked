
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; } ;
struct lx_stream {int dummy; } ;
struct lx6464es {struct lx_stream playback_stream; struct lx_stream capture_stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct lx6464es*,struct lx_stream*,int) ;
 struct lx6464es* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct lx6464es *VAR_3 = FUNC_1(VAR_1);
 const int VAR_4 = (VAR_1->stream == VAR_0);
 struct lx_stream *VAR_5 = VAR_4 ? &VAR_3->capture_stream :
  &VAR_3->playback_stream;

 FUNC_2("->lx_pcm_trigger\n");

 return FUNC_0(VAR_3, VAR_5, VAR_2);
}
