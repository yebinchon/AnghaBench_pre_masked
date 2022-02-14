
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {unsigned int internal_clock; } ;
struct snd_emu10k1 {TYPE_3__ emu1010; } ;
struct TYPE_4__ {unsigned int* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_emu10k1*,int ,int) ;
 struct snd_emu10k1* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_18,
     struct snd_ctl_elem_value *VAR_19)
{
 struct snd_emu10k1 *VAR_20 = FUNC_2(VAR_18);
 unsigned int VAR_21;
 int VAR_22 = 0;

 VAR_21 = VAR_19->value.enumerated.item[0] ;

 if (VAR_21 >= 4)
  return -VAR_0;
 VAR_22 = (VAR_20->emu1010.internal_clock != VAR_21);
 if (VAR_22) {
  VAR_20->emu1010.internal_clock = VAR_21;
  switch (VAR_21) {
  case 0:


   FUNC_1(VAR_20, VAR_9, VAR_16 );

   FUNC_1(VAR_20, VAR_1, VAR_2 );

   FUNC_1(VAR_20, VAR_10,
   VAR_14 | VAR_11 );

   FUNC_1(VAR_20, VAR_4,
    VAR_5 | VAR_8 );

   FUNC_0(10);

   FUNC_1(VAR_20, VAR_9, VAR_17 );
   break;
  case 1:


   FUNC_1(VAR_20, VAR_9, VAR_16 );

   FUNC_1(VAR_20, VAR_1, VAR_3 );

   FUNC_1(VAR_20, VAR_10,
    VAR_15 | VAR_11 );

   FUNC_1(VAR_20, VAR_4,
    VAR_6 | VAR_8 );

   FUNC_0(10);

   FUNC_1(VAR_20, VAR_9, VAR_17 );
   break;

  case 2:

   FUNC_1(VAR_20, VAR_9, VAR_16 );

   FUNC_1(VAR_20, VAR_1, VAR_3 );

   FUNC_1(VAR_20, VAR_10,
    VAR_13 | VAR_11 );

   FUNC_1(VAR_20, VAR_4,
    VAR_7 | VAR_8 );


   FUNC_0(10);

   FUNC_1(VAR_20, VAR_9, VAR_17 );
   break;

  case 3:


   FUNC_1(VAR_20, VAR_9, VAR_16 );

   FUNC_1(VAR_20, VAR_1, VAR_3 );

   FUNC_1(VAR_20, VAR_10,
    VAR_12 | VAR_11 );

   FUNC_1(VAR_20, VAR_4, VAR_7 | VAR_8 );


   FUNC_0(10);

   FUNC_1(VAR_20, VAR_9, VAR_17 );


   break;
  }
 }
        return VAR_22;
}
