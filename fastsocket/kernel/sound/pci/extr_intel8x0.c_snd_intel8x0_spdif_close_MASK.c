
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct intel8x0 {scalar_t__ device_type; TYPE_1__* ichd; } ;
struct TYPE_2__ {int * substream; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct intel8x0* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_3)
{
 struct intel8x0 *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_4->device_type == VAR_0 ? VAR_2 : VAR_1;

 VAR_4->ichd[VAR_5].substream = ((void*)0);
 return 0;
}
