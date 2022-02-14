
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct unwind_state {unsigned int* registers; scalar_t__ entries; int update_mask; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 int FUNC_0 (char*,int,...) ;
 unsigned int FUNC_1 (struct unwind_state*) ;

__attribute__((used)) static int
FUNC_2(struct unwind_state *VAR_19)
{
 unsigned int VAR_20;
 uint32_t *VAR_21 = (uint32_t *)VAR_19->registers[VAR_18];
 int VAR_22 = 0;


 if (VAR_19->entries == 0)
  return 1;


 VAR_20 = FUNC_1(VAR_19);

 if ((VAR_20 & VAR_13) == VAR_10) {
  VAR_19->registers[VAR_18] += ((VAR_20 & VAR_15) << 2) + 4;

 } else if ((VAR_20 & VAR_13) == VAR_9) {
  VAR_19->registers[VAR_18] -= ((VAR_20 & VAR_15) << 2) + 4;

 } else if ((VAR_20 & VAR_8) == VAR_4) {
  unsigned int VAR_23, VAR_24;


  VAR_23 = FUNC_1(VAR_19);
  VAR_23 |= (VAR_20 & VAR_7) << 8;


  if (VAR_23 == 0)
   return 1;


  VAR_22 = 1;


  for (VAR_24 = 4; VAR_23 && VAR_24 < 16; VAR_23 >>= 1, VAR_24++) {
   if (VAR_23 & 1) {
    VAR_19->registers[VAR_24] = *VAR_21++;
    VAR_19->update_mask |= 1 << VAR_24;


    if (VAR_24 == VAR_18)
     VAR_22 = 0;
   }
  }

 } else if ((VAR_20 & VAR_8) == VAR_14 &&
     ((VAR_20 & VAR_7) != 13) &&
     ((VAR_20 & VAR_7) != 15)) {

  VAR_19->registers[VAR_18] =
      VAR_19->registers[VAR_20 & VAR_7];

 } else if ((VAR_20 & VAR_8) == VAR_2) {
  unsigned int VAR_25, VAR_26;


  VAR_25 = VAR_20 & VAR_3;


  VAR_22 = 1;


  for (VAR_26 = 4; VAR_26 <= 4 + VAR_25; VAR_26++) {
   VAR_19->registers[VAR_26] = *VAR_21++;
   VAR_19->update_mask |= 1 << VAR_26;
  }


  if ((VAR_20 & VAR_6) != 0) {
   VAR_19->registers[14] = *VAR_21++;
  }

 } else if (VAR_20 == VAR_1) {

  VAR_19->entries = 0;

 } else if (VAR_20 == VAR_5) {
  unsigned int VAR_27, VAR_28;

  VAR_27 = FUNC_1(VAR_19);
  if (VAR_27 == 0 || (VAR_27 & 0xf0) != 0)
   return 1;


  VAR_22 = 1;


  for (VAR_28 = 0; VAR_27 && VAR_28 < 4; VAR_27 >>= 1, VAR_28++) {
   if (VAR_27 & 1) {
    VAR_19->registers[VAR_28] = *VAR_21++;
    VAR_19->update_mask |= 1 << VAR_28;
   }
  }

 } else if ((VAR_20 & VAR_12) == VAR_11) {
  unsigned int VAR_29;


  VAR_29 = FUNC_1(VAR_19);

  VAR_19->registers[VAR_18] += 0x204 + (VAR_29 << 2);

 } else {




  return 1;
 }

 if (VAR_22) {
  VAR_19->registers[VAR_18] = (uint32_t)VAR_21;
 }







 return 0;
}
