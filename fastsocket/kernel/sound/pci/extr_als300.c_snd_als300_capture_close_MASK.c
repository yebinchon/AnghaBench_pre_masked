
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_als300_substream_data {int dummy; } ;
struct snd_als300 {int * capture_substream; } ;
struct TYPE_2__ {struct snd_als300_substream_data* private_data; } ;


 int FUNC_0 (struct snd_als300_substream_data*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_als300* FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct snd_als300 *VAR_1 = FUNC_4(VAR_0);
 struct snd_als300_substream_data *VAR_2;

 VAR_2 = VAR_0->runtime->private_data;
 FUNC_1();
 FUNC_0(VAR_2);
 VAR_1->capture_substream = ((void*)0);
 FUNC_3(VAR_0);
 FUNC_2();
 return 0;
}
