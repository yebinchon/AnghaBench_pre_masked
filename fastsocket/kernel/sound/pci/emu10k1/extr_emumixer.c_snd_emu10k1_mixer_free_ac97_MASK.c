
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int * ac97; } ;
struct snd_ac97 {struct snd_emu10k1* private_data; } ;



__attribute__((used)) static void FUNC_0(struct snd_ac97 *VAR_0)
{
 struct snd_emu10k1 *VAR_1 = VAR_0->private_data;
 VAR_1->ac97 = ((void*)0);
}
