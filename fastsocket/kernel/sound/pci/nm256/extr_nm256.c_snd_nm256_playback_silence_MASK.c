
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct nm256_stream* private_data; } ;
struct nm256_stream {scalar_t__ bufptr; } ;
typedef scalar_t__ snd_pcm_uframes_t ;


 scalar_t__ FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct snd_pcm_substream *VAR_0,
      int VAR_1,
      snd_pcm_uframes_t VAR_2,
      snd_pcm_uframes_t VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_0->runtime;
 struct nm256_stream *VAR_5 = VAR_4->private_data;
 VAR_3 = FUNC_0(VAR_4, VAR_3);
 VAR_2 = FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_5->bufptr + VAR_2, 0, VAR_3);
 return 0;
}
