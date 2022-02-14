
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {scalar_t__ num; struct fm801* private_data; } ;
struct fm801 {int * ac97_sec; int * ac97; } ;



__attribute__((used)) static void FUNC_0(struct snd_ac97 *VAR_0)
{
 struct fm801 *VAR_1 = VAR_0->private_data;
 if (VAR_0->num == 0) {
  VAR_1->ac97 = ((void*)0);
 } else {
  VAR_1->ac97_sec = ((void*)0);
 }
}
