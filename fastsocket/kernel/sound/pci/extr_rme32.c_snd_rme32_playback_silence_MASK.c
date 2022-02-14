
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct rme32 {scalar_t__ iobase; int playback_frlog; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 struct rme32* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2,
          snd_pcm_uframes_t VAR_3,
          snd_pcm_uframes_t VAR_4)
{
 struct rme32 *VAR_5 = FUNC_1(VAR_1);
 VAR_4 <<= VAR_5->playback_frlog;
 VAR_3 <<= VAR_5->playback_frlog;
 FUNC_0(VAR_5->iobase + VAR_0 + VAR_3, 0, VAR_4);
 return 0;
}
