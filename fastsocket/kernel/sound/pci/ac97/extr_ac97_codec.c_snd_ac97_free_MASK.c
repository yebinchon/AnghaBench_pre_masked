
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {size_t num; int (* private_free ) (struct snd_ac97*) ;TYPE_1__* bus; int power_work; } ;
struct TYPE_2__ {int ** codec; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_ac97*) ;
 int FUNC_3 (struct snd_ac97*) ;
 int FUNC_4 (struct snd_ac97*) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 *VAR_0)
{
 if (VAR_0) {




  FUNC_3(VAR_0);
  if (VAR_0->bus)
   VAR_0->bus->codec[VAR_0->num] = ((void*)0);
  if (VAR_0->private_free)
   VAR_0->private_free(VAR_0);
  FUNC_2(VAR_0);
 }
 return 0;
}
