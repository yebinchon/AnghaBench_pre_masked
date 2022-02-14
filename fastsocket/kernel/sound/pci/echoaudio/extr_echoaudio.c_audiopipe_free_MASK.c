
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_runtime {struct audiopipe* private_data; } ;
struct TYPE_2__ {scalar_t__ area; } ;
struct audiopipe {TYPE_1__ sgpage; } ;


 int FUNC_0 (struct audiopipe*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_runtime *VAR_0)
{
 struct audiopipe *VAR_1 = VAR_0->private_data;

 if (VAR_1->sgpage.area)
  FUNC_1(&VAR_1->sgpage);
 FUNC_0(VAR_1);
}
