
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* levels; } ;
typedef TYPE_1__ wavnc_info ;
struct mix_ent {int reg_l; int reg_r; unsigned int max; unsigned int shift; } ;


 unsigned int FUNC_0 (unsigned int,int) ;

 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 () ;
 struct mix_ent* VAR_5 ;
 unsigned int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_4(wavnc_info *VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9;

 VAR_8 = VAR_6->levels[VAR_7] & 0xff;
 VAR_9 = VAR_6->levels[VAR_7] >> 8;

 if (VAR_8 > 100)
  VAR_8 = 100;
 if (VAR_9 > 100)
  VAR_9 = 100;



 if (FUNC_1() && VAR_7 == VAR_0)
  VAR_7 = VAR_1;

 if (VAR_5[VAR_7].reg_l || VAR_5[VAR_7].reg_r) {
  const struct mix_ent *VAR_10 = VAR_5 + VAR_7;
  unsigned int VAR_11, VAR_12, VAR_13;

  VAR_11 = VAR_10->max << VAR_10->shift;
  VAR_8 = ((VAR_8) * (VAR_10->max) / 100) << VAR_10->shift;
  VAR_9 = ((VAR_9) * (VAR_10->max) / 100) << VAR_10->shift;


  VAR_12 = FUNC_2(VAR_6, VAR_2 |
            VAR_10->reg_l << 8);


  VAR_13 = FUNC_2(VAR_6, VAR_2 |
      VAR_10->reg_r << 8);

  VAR_12 = (VAR_12 & ~VAR_11) | (VAR_8 & VAR_11);
  VAR_13 = (VAR_13 & ~VAR_11) | (VAR_9 & VAR_11);


  FUNC_3(VAR_6, VAR_4, VAR_12, VAR_13);
 } else {
  switch(VAR_7) {
  case 129:
   FUNC_3(VAR_6, VAR_3,
     ((VAR_8) * (32767) / 100),
     ((VAR_9) * (32767) / 100));
   break;

  case 128:
   FUNC_3(VAR_6, 0x0100 | VAR_3,
     ((VAR_8) * (32767) / 100),
     ((VAR_9) * (32767) / 100));
   break;
  }
 }
}
