
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ rate_num; int rate_den; int rate; } ;
struct snd_es18xx {int caps; } ;
struct TYPE_4__ {scalar_t__ num; } ;
struct TYPE_3__ {scalar_t__ num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (struct snd_es18xx*,int,unsigned int) ;
 int FUNC_1 (struct snd_es18xx*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct snd_es18xx *VAR_5,
    struct snd_pcm_substream *VAR_6,
    int VAR_7)
{
 unsigned int VAR_8, VAR_9;
 struct snd_pcm_runtime *VAR_10 = VAR_6->runtime;
 if (VAR_5->caps & VAR_1) {
  if (VAR_10->rate_num == VAR_3[0].num)
   VAR_8 = 128 - VAR_10->rate_den;
  else
   VAR_8 = 256 - VAR_10->rate_den;
 } else {
  if (VAR_10->rate_num == VAR_4[0].num)
   VAR_8 = 256 - VAR_10->rate_den;
  else
   VAR_8 = 128 - VAR_10->rate_den;
 }


 VAR_9 = 256 - 7160000*20/(8*82*VAR_10->rate);

 if ((VAR_5->caps & VAR_2) && VAR_7 == VAR_0) {
  FUNC_0(VAR_5, 0x70, VAR_8);




  FUNC_1(VAR_5, 0xA2, VAR_9);
  FUNC_0(VAR_5, 0x72, VAR_9);
 } else {
  FUNC_1(VAR_5, 0xA1, VAR_8);
  FUNC_1(VAR_5, 0xA2, VAR_9);
 }
}
