
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_sb_csp {int running; int acc_format; int mode; int acc_channels; int acc_width; int acc_rates; TYPE_1__* chip; } ;
struct TYPE_2__ {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;



 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (struct snd_sb_csp*,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_sb_csp * VAR_21, int VAR_22, int VAR_23)
{
 unsigned long VAR_24;
 int VAR_25 = 0;


 if (VAR_21->running & (VAR_20 | VAR_19))
  return -VAR_5;


 if (((1 << VAR_22) & VAR_21->acc_format) && (VAR_23 & VAR_21->mode)) {
  VAR_21->running = VAR_18;
 } else {
  switch (VAR_22) {
  case 128:
   VAR_25 = FUNC_1(VAR_21, VAR_4, 0);
   VAR_21->acc_format = VAR_10;
   VAR_21->mode = VAR_12 | VAR_13;
   break;
  case 130:
   VAR_25 = FUNC_1(VAR_21, VAR_3, 0);
   VAR_21->acc_format = VAR_8;
   VAR_21->mode = VAR_12 | VAR_13;
   break;
  case 129:
   VAR_25 = FUNC_1(VAR_21, VAR_1,
             VAR_11);
   if (VAR_25)
    break;
   if (VAR_23 == VAR_13) {
    VAR_25 = FUNC_1
     (VAR_21, VAR_2, 0);
    VAR_21->mode = VAR_13;
   } else {
    VAR_25 = FUNC_1
     (VAR_21, VAR_0, 0);
    VAR_21->mode = VAR_12;
   }
   VAR_21->acc_format = VAR_9;
   break;
  default:

   if (VAR_21->running & VAR_18) {
    FUNC_2(&VAR_21->chip->reg_lock, VAR_24);
    FUNC_0(VAR_21->chip, 0xfc);
    FUNC_0(VAR_21->chip, 0x00);
    FUNC_3(&VAR_21->chip->reg_lock, VAR_24);
    VAR_21->running = 0;
   }
   return -VAR_6;
  }
  if (VAR_25) {
   VAR_21->acc_format = 0;
   VAR_21->acc_channels = VAR_21->acc_width = VAR_21->acc_rates = 0;

   VAR_21->running = 0;
   VAR_21->mode = 0;
   return (VAR_25);
  } else {
   VAR_21->running = VAR_18;
   VAR_21->acc_width = VAR_16;
   VAR_21->acc_channels = VAR_14 | VAR_17;
   VAR_21->acc_rates = VAR_15;
  }

 }
 return (VAR_21->running & VAR_18) ? 0 : -VAR_7;
}
