
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {scalar_t__ num; struct cs4281* private_data; } ;
struct cs4281 {int * ac97; int * ac97_secondary; } ;



__attribute__((used)) static void FUNC_0(struct snd_ac97 *VAR_0)
{
 struct cs4281 *VAR_1 = VAR_0->private_data;
 if (VAR_0->num)
  VAR_1->ac97_secondary = ((void*)0);
 else
  VAR_1->ac97 = ((void*)0);
}
