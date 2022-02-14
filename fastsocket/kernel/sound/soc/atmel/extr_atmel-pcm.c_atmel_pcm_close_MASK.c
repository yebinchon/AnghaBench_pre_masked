
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct atmel_runtime_data {int dummy; } ;
struct TYPE_2__ {struct atmel_runtime_data* private_data; } ;


 int FUNC_0 (struct atmel_runtime_data*) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct atmel_runtime_data *VAR_1 = VAR_0->runtime->private_data;

 FUNC_0(VAR_1);
 return 0;
}
