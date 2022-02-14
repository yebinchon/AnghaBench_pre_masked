
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int flags; int* regs; int scaps; int ext_id; TYPE_1__* bus; } ;
struct TYPE_2__ {unsigned int clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;





 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int FUNC_0 (struct snd_ac97*,unsigned int) ;
 int FUNC_1 (struct snd_ac97*,int) ;
 int FUNC_2 (struct snd_ac97*,int,unsigned int) ;
 int FUNC_3 (struct snd_ac97*,int,int ,int ) ;
 int FUNC_4 (struct snd_ac97*,int,int) ;

int FUNC_5(struct snd_ac97 *VAR_12, int VAR_13, unsigned int VAR_14)
{
 int VAR_15;
 unsigned int VAR_16;

 VAR_15 = VAR_14 > 48000;
 if (VAR_15) {
  if (!(VAR_12->flags & VAR_0))
   return -VAR_11;
  if (VAR_13 != 133)
   return -VAR_11;
 }

 FUNC_4(VAR_12, VAR_13, 1);
 switch (VAR_13) {
 case 130:
  if ((VAR_12->regs[VAR_5] & VAR_3) == 0)
   if (VAR_14 != 48000)
    return -VAR_11;
  break;
 case 133:
 case 131:
  if ((VAR_12->regs[VAR_5] & VAR_2) == 0)
   if (VAR_14 != 48000 && VAR_14 != 96000)
    return -VAR_11;
  break;
 case 129:
  if (! (VAR_12->scaps & VAR_10))
   return -VAR_11;
  break;
 case 132:
  if (! (VAR_12->scaps & VAR_9))
   return -VAR_11;
  break;
 case 128:

  return FUNC_0(VAR_12, VAR_14);
 default:
  return -VAR_11;
 }
 if (VAR_15)
  VAR_14 /= 2;
 VAR_16 = (VAR_14 * VAR_12->bus->clock) / 48000;
 if (VAR_16 > 65535)
  return -VAR_11;
 if ((VAR_12->ext_id & VAR_4) && VAR_13 == 133)
  FUNC_3(VAR_12, VAR_5,
         VAR_1, VAR_15 ? VAR_1 : 0);
 FUNC_2(VAR_12, VAR_13, VAR_16 & 0xffff);
 FUNC_1(VAR_12, VAR_13);
 if ((VAR_12->ext_id & VAR_4) && VAR_13 == 133) {



  FUNC_3(VAR_12, VAR_6,
         VAR_8,
         VAR_15 ? VAR_7 : 0);
  FUNC_1(VAR_12, VAR_6);
 }
 return 0;
}
