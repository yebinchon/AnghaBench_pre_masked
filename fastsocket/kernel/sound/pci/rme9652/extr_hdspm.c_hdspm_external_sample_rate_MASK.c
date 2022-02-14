
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdspm {scalar_t__ is_aes32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;






 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_1 (struct hdspm*) ;
 unsigned int FUNC_2 (struct hdspm*,int ) ;

__attribute__((used)) static int FUNC_3(struct hdspm *VAR_16)
{
 if (VAR_16->is_aes32) {
  unsigned int VAR_17 = FUNC_2(VAR_16, VAR_12);
  unsigned int VAR_18 = FUNC_2(VAR_16, VAR_11);
  unsigned int VAR_19 =
   FUNC_2(VAR_16, VAR_13);

  int VAR_20 = FUNC_1(VAR_16);

  if (VAR_20 == VAR_2 &&
    VAR_18 & VAR_4)
   return FUNC_0((VAR_18 >> VAR_3)
           & 0xF);
  if (VAR_20 >= VAR_0 &&
   VAR_20 <= VAR_1 &&
   VAR_17 & (VAR_5 >>
             (VAR_20 - VAR_0)))
   return FUNC_0((VAR_19 >>
     (4*(VAR_20-VAR_0))) & 0xF);
  return 0;
 } else {
  unsigned int VAR_21 = FUNC_2(VAR_16, VAR_12);
  unsigned int VAR_22 = FUNC_2(VAR_16, VAR_11);
  unsigned int VAR_23;
  int VAR_24 = 0;


  if ((VAR_21 & VAR_15) != 0 &&
    (VAR_22 & VAR_6) == 0) {

   VAR_23 = VAR_21 & VAR_14;

   switch (VAR_23) {
   case 133:
    VAR_24 = 32000;
    break;
   case 132:
    VAR_24 = 44100;
    break;
   case 131:
    VAR_24 = 48000;
    break;
   case 130:
    VAR_24 = 64000;
    break;
   case 129:
    VAR_24 = 88200;
    break;
   case 128:
    VAR_24 = 96000;
    break;

   default:
    VAR_24 = 0;
    break;
   }
  }




  if (VAR_24 != 0 &&
             (VAR_21 & VAR_7) == VAR_8)
   return VAR_24;


  if (VAR_22 & VAR_10) {
   VAR_23 = VAR_22 & VAR_9;

   switch (VAR_23) {
   case 139:
    VAR_24 = 32000;
    break;
   case 138:
    VAR_24 = 44100;
    break;
   case 137:
    VAR_24 = 48000;
    break;
   case 136:
    VAR_24 = 64000;
    break;
   case 135:
    VAR_24 = 88200;
    break;
   case 134:
    VAR_24 = 96000;
    break;
   case 142:
    VAR_24 = 128000;
    break;
   case 141:
    VAR_24 = 176400;
    break;
   case 140:
    VAR_24 = 192000;
    break;
   default:
    VAR_24 = 0;
    break;
   }
  }
  return VAR_24;
 }
}
