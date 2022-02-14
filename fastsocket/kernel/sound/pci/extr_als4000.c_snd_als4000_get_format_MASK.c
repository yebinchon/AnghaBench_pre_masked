
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int channels; int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_runtime *VAR_3)
{
 int VAR_4;

 VAR_4 = 0;
 if (FUNC_1(VAR_3->format))
  VAR_4 |= VAR_1;
 if (FUNC_0(VAR_3->format) == 16)
  VAR_4 |= VAR_0;
 if (VAR_3->channels > 1)
  VAR_4 |= VAR_2;
 return VAR_4;
}
