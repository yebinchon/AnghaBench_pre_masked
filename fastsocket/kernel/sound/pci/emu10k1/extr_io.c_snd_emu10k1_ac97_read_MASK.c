
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu10k1 {int emu_lock; scalar_t__ port; } ;
struct snd_ac97 {struct snd_emu10k1* private_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned short FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

unsigned short FUNC_4(struct snd_ac97 *VAR_2, unsigned short VAR_3)
{
 struct snd_emu10k1 *VAR_4 = VAR_2->private_data;
 unsigned long VAR_5;
 unsigned short VAR_6;

 FUNC_2(&VAR_4->emu_lock, VAR_5);
 FUNC_1(VAR_3, VAR_4->port + VAR_0);
 VAR_6 = FUNC_0(VAR_4->port + VAR_1);
 FUNC_3(&VAR_4->emu_lock, VAR_5);
 return VAR_6;
}
