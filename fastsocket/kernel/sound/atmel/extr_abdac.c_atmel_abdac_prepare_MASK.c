
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atmel_abdac {int flags; int sample_clk; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atmel_abdac*,struct snd_pcm_substream*,int ) ;
 int FUNC_1 (int ,int) ;
 struct atmel_abdac* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct atmel_abdac *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->sample_clk, 256 * VAR_2->runtime->rate);
 if (VAR_4)
  return VAR_4;

 if (!FUNC_3(VAR_0, &VAR_3->flags))
  VAR_4 = FUNC_0(VAR_3, VAR_2, VAR_1);

 return VAR_4;
}
