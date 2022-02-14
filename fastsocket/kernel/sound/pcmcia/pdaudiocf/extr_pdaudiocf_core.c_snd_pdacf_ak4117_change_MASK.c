
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_pdacf {int reg_lock; int * regmap; } ;
struct ak4117 {unsigned char rcs0; struct snd_pdacf* change_callback_private; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_pdacf*,int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ak4117 *VAR_3, unsigned char VAR_4, unsigned char VAR_5)
{
 struct snd_pdacf *VAR_6 = VAR_3->change_callback_private;
 unsigned long VAR_7;
 u16 VAR_8;

 if (!(VAR_4 & VAR_0))
  return;
 FUNC_1(&VAR_6->reg_lock, VAR_7);
 VAR_8 = VAR_6->regmap[VAR_2>>1];
 if (VAR_3->rcs0 & VAR_0)
  VAR_8 |= VAR_1;
 else
  VAR_8 &= ~VAR_1;
 FUNC_0(VAR_6, VAR_2, VAR_8);
 FUNC_2(&VAR_6->reg_lock, VAR_7);
}
