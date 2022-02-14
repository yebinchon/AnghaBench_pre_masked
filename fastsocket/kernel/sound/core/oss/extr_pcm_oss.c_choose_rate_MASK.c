
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {unsigned int max; unsigned int min; int openmin; scalar_t__ openmax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 struct snd_pcm_hw_params* FUNC_2 (int,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int ,unsigned int,int *) ;
 int FUNC_4 (struct snd_pcm_substream*,struct snd_pcm_hw_params*,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
         struct snd_pcm_hw_params *VAR_4, unsigned int VAR_5)
{
 struct snd_interval *VAR_6;
 struct snd_pcm_hw_params *VAR_7;
 unsigned int VAR_8, VAR_9;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_1);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 *VAR_7 = *VAR_4;
 VAR_6 = FUNC_0(VAR_7, VAR_2);


 VAR_8 = VAR_5;
 for (;;) {
  if (VAR_6->max < VAR_8 || (VAR_6->max == VAR_8 && VAR_6->openmax))
   break;
  if (VAR_6->min < VAR_8 || (VAR_6->min == VAR_8 && !VAR_6->openmin)) {
   int VAR_10;
   VAR_10 = FUNC_4(VAR_3, VAR_4,
         VAR_2,
         VAR_8, 0);
   if (VAR_10 == (int)VAR_8) {
    FUNC_1(VAR_7);
    return VAR_8;
   }
   *VAR_4 = *VAR_7;
  }
  VAR_9 = VAR_8;
  VAR_8 += VAR_5;
  if (VAR_8 <= VAR_9)
   break;
 }


 FUNC_1(VAR_7);
 return FUNC_3(VAR_3, VAR_4, VAR_2, VAR_5, ((void*)0));
}
