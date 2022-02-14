
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_emu8000 {unsigned int last_reg; int reg_lock; } ;


 int FUNC_0 (struct snd_emu8000*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned short,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

unsigned int FUNC_5(struct snd_emu8000 *VAR_0, unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned short VAR_3;
 unsigned int VAR_4;
 unsigned long VAR_5;
 FUNC_3(&VAR_0->reg_lock, VAR_5);
 if (VAR_2 != VAR_0->last_reg) {
  FUNC_2((unsigned short)VAR_2, FUNC_0(VAR_0));
  VAR_0->last_reg = VAR_2;
 }
 VAR_3 = FUNC_1(VAR_1);
 VAR_4 = VAR_3 + (FUNC_1(VAR_1+2) << 16);
 FUNC_4(&VAR_0->reg_lock, VAR_5);
 return VAR_4;
}
