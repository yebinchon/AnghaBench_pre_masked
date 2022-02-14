
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ac97 {int ext_id; int flags; scalar_t__ id; unsigned int spdif_status; int reg_mutex; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 unsigned short VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned short FUNC_2 (struct snd_ac97*,unsigned short) ;
 int FUNC_3 (struct snd_ac97*,unsigned short,unsigned short,int ) ;
 int FUNC_4 (struct snd_ac97*,unsigned short,unsigned short,unsigned short) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 *VAR_23, unsigned short VAR_24)
{
 unsigned short VAR_25, VAR_26, VAR_27, VAR_28;
 unsigned int VAR_29;

 if (! (VAR_23->ext_id & VAR_3))
  return -VAR_13;


 if (VAR_23->flags & VAR_1) {
  switch (VAR_24) {
  case 48000: VAR_26 = 0; break;
  case 44100: VAR_26 = 1 << VAR_10; break;
  default:
   FUNC_3(VAR_23, VAR_4, VAR_2, 0);
   return -VAR_12;
  }
  VAR_27 = VAR_0;
  VAR_28 = 1 << VAR_10;
 } else {
  if (VAR_23->id == VAR_5 && VAR_24 != 48000) {
   FUNC_3(VAR_23, VAR_4, VAR_2, 0);
   return -VAR_12;
  }
  switch (VAR_24) {
  case 44100: VAR_26 = VAR_7; break;
  case 48000: VAR_26 = VAR_8; break;
  case 32000: VAR_26 = VAR_6; break;
  default:
   FUNC_3(VAR_23, VAR_4, VAR_2, 0);
   return -VAR_12;
  }
  VAR_27 = VAR_11;
  VAR_28 = VAR_9;
 }

 FUNC_0(&VAR_23->reg_mutex);
 VAR_25 = FUNC_2(VAR_23, VAR_27) & VAR_28;
 if (VAR_25 != VAR_26) {
  FUNC_4(VAR_23, VAR_4, VAR_2, 0);
  FUNC_4(VAR_23, VAR_27, VAR_28, VAR_26);

  VAR_29 = VAR_23->spdif_status;
  if (VAR_29 & VAR_14) {
   VAR_29 &= ~VAR_15;
   switch (VAR_24) {
   case 44100: VAR_29 |= VAR_17; break;
   case 48000: VAR_29 |= VAR_18; break;
   case 32000: VAR_29 |= VAR_16; break;
   }
  } else {
   VAR_29 &= ~(VAR_19 << 24);
   switch (VAR_24) {
   case 44100: VAR_29 |= VAR_21<<24; break;
   case 48000: VAR_29 |= VAR_22<<24; break;
   case 32000: VAR_29 |= VAR_20<<24; break;
   }
  }
  VAR_23->spdif_status = VAR_29;
 }
 FUNC_4(VAR_23, VAR_4, VAR_2, VAR_2);
 FUNC_1(&VAR_23->reg_mutex);
 return 0;
}
