
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {unsigned int last_reg; int reg_lock; } ;


 unsigned int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (unsigned short,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct snd_emu8000 *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;
 FUNC_2(&VAR_0->reg_lock, VAR_4);
 if (VAR_2 != VAR_0->last_reg) {
  FUNC_1((unsigned short)VAR_2, FUNC_0(VAR_0));
  VAR_0->last_reg = VAR_2;
 }
 FUNC_1((unsigned short)VAR_3, VAR_1);
 FUNC_1((unsigned short)(VAR_3>>16), VAR_1+2);
 FUNC_3(&VAR_0->reg_lock, VAR_4);
}
