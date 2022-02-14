
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int rate; int format; } ;
struct nm256_stream {scalar_t__ shift; } ;
struct nm256 {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;


 int * VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nm256*,int,int) ;
 int FUNC_2 (struct nm256*,scalar_t__,unsigned char) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct nm256 *VAR_7, struct nm256_stream *VAR_8,
       struct snd_pcm_substream *VAR_9)
{
 struct snd_pcm_runtime *VAR_10 = VAR_9->runtime;
 int VAR_11 = FUNC_0(VAR_10->rate);
 unsigned char VAR_12 = (VAR_11 << 4) & VAR_2;

 VAR_8->shift = 0;
 if (FUNC_3(VAR_10->format) == 16) {
  VAR_12 |= VAR_1;
  VAR_8->shift++;
 }
 if (VAR_10->channels > 1) {
  VAR_12 |= VAR_4;
  VAR_8->shift++;
 }

 VAR_10->rate = VAR_6[VAR_11];

 switch (VAR_9->stream) {
 case 128:
  FUNC_1(VAR_7, 0, VAR_11);
  FUNC_2(VAR_7,
     VAR_0 + VAR_3,
     VAR_12);
  break;
 case 129:
  FUNC_1(VAR_7, 1, VAR_11);
  FUNC_2(VAR_7,
     VAR_5 + VAR_3,
     VAR_12);
  break;
 }
}
