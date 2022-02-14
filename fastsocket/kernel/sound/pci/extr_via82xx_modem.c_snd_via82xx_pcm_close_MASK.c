
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct viadev {int * substream; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_2__ {struct viadev* private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_0)
{
 struct viadev *VAR_1 = VAR_0->runtime->private_data;

 VAR_1->substream = ((void*)0);
 return 0;
}
