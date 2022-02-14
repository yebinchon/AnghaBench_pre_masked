
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int scaps; unsigned int power_up; int* regs; } ;
struct TYPE_2__ {unsigned int mask; size_t power_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct snd_ac97*) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_11 ;
 int FUNC_2 (struct snd_ac97*,size_t,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_12)
{
 unsigned int VAR_13, VAR_14;
 int VAR_15;

 VAR_13 = (1 << VAR_7) | (1 << VAR_5);
 VAR_13 |= (1 << VAR_8);
 if (VAR_12->scaps & VAR_4)
  VAR_13 |= (1 << VAR_10);
 if (VAR_12->scaps & VAR_3)
  VAR_13 |= (1 << VAR_6);




 if (VAR_13) {
  if (VAR_12->regs[VAR_2] & VAR_0) {

   FUNC_2(VAR_12, VAR_2,
          VAR_1, 0);
   FUNC_1(1);
   FUNC_2(VAR_12, VAR_2,
          VAR_0, 0);
  }
 }
 for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
  if (VAR_13 & (1 << VAR_15))
   VAR_14 = 0;
  else
   VAR_14 = VAR_11[VAR_15].mask;
  FUNC_2(VAR_12, VAR_11[VAR_15].power_reg,
         VAR_11[VAR_15].mask, VAR_14);
 }
 if (! VAR_13) {
  if (! (VAR_12->regs[VAR_2] & VAR_0)) {

   FUNC_2(VAR_12, VAR_2,
          VAR_0, VAR_0);
   FUNC_2(VAR_12, VAR_2,
          VAR_1, VAR_1);
  }
 }
}
