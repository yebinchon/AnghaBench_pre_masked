
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97_bus {int (* private_free ) (struct snd_ac97_bus*) ;struct snd_ac97_bus* pcms; } ;


 int FUNC_0 (struct snd_ac97_bus*) ;
 int FUNC_1 (struct snd_ac97_bus*) ;
 int FUNC_2 (struct snd_ac97_bus*) ;

__attribute__((used)) static int FUNC_3(struct snd_ac97_bus *VAR_0)
{
 if (VAR_0) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_0->pcms);
  if (VAR_0->private_free)
   VAR_0->private_free(VAR_0);
  FUNC_0(VAR_0);
 }
 return 0;
}
