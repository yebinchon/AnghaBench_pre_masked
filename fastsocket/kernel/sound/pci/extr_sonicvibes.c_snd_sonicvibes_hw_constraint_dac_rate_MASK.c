
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {unsigned int rate_num; int rate_den; } ;
struct TYPE_2__ {unsigned int min; unsigned int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int,unsigned int*,unsigned int*,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_hw_params *VAR_3,
       struct snd_pcm_hw_rule *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;

 if (FUNC_0(VAR_3, VAR_0)->min ==
     FUNC_0(VAR_3, VAR_0)->max) {
  VAR_5 = FUNC_0(VAR_3, VAR_0)->min;
  VAR_6 = 48000 / VAR_5;
  if (VAR_6 > 8)
   VAR_6 = 8;
  if ((48000 / VAR_6) == VAR_5) {
   VAR_3->rate_num = VAR_5;
   VAR_3->rate_den = 1;
  } else {
   FUNC_2(VAR_5, &VAR_7, &VAR_8, &VAR_9);
   FUNC_1(VAR_2 % 16);
   FUNC_1(VAR_1 % 512);
   VAR_3->rate_num = (VAR_2/16) * (VAR_9+2) * VAR_7;
   VAR_3->rate_den = (VAR_1/512) * (VAR_8+2);
  }
 }
 return 0;
}
