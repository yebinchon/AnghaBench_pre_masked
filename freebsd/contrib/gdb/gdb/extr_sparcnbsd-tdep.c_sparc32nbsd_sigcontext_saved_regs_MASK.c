
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trad_frame_saved_reg {int realreg; void* addr; } ;
struct frame_info {int dummy; } ;
typedef scalar_t__ ULONGEST ;
typedef void* CORE_ADDR ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 void* FUNC_0 (struct frame_info*,size_t) ;
 scalar_t__ FUNC_1 (struct frame_info*,void*,int) ;
 scalar_t__ FUNC_2 () ;
 struct trad_frame_saved_reg* FUNC_3 (struct frame_info*) ;
 int FUNC_4 (struct trad_frame_saved_reg*,int,scalar_t__) ;

struct trad_frame_saved_reg *
FUNC_5 (struct frame_info *VAR_22)
{
  struct trad_frame_saved_reg *VAR_23;
  CORE_ADDR VAR_24, VAR_25;
  int VAR_26, VAR_27;
  ULONGEST VAR_28;

  VAR_23 = FUNC_3 (VAR_22);



  VAR_24 = FUNC_0 (VAR_22, VAR_8);
  VAR_25 = VAR_24 + 64 + 16;






  VAR_23[VAR_21].addr = VAR_25 + 8;
  VAR_23[VAR_3].addr = VAR_25 + 12;
  VAR_23[VAR_2].addr = VAR_25 + 16;
  VAR_23[VAR_4].addr = VAR_25 + 20;
  VAR_23[VAR_10].addr = VAR_25 + 24;
  VAR_23[VAR_17].addr = VAR_25 + 28;



  VAR_27 = VAR_15 - VAR_9;
  for (VAR_26 = VAR_11; VAR_26 <= VAR_12; VAR_26++)
    VAR_23[VAR_26].realreg = VAR_26 + VAR_27;
  VAR_23[VAR_5].realreg = VAR_16;



  VAR_27 = VAR_13 - VAR_17;
  for (VAR_26 = VAR_18; VAR_26 <= VAR_19; VAR_26++)
    VAR_23[VAR_26].realreg = VAR_26 + VAR_27;
  VAR_23[VAR_20].realreg = VAR_14;



  VAR_24 = VAR_23[VAR_21].addr;
  VAR_24 = FUNC_1 (VAR_22, VAR_24, 4);
  for (VAR_26 = VAR_15;
       VAR_26 <= VAR_14; VAR_26++, VAR_24 += 4)
    VAR_23[VAR_26].addr = VAR_24;


  {
    ULONGEST VAR_29 = FUNC_2 ();

    if (VAR_29 != 0)
      {
 ULONGEST VAR_30;

 VAR_24 = VAR_23[VAR_14].addr;
 VAR_30 = FUNC_1 (VAR_22, VAR_24, 4);
 FUNC_4 (VAR_23, VAR_14, VAR_30 ^ VAR_29);
      }
  }






  VAR_24 = VAR_23[VAR_4].addr;
  VAR_28 = FUNC_1 (VAR_22, VAR_24, 4);
  if (VAR_28 & 0x00001000)
    {
      CORE_ADDR VAR_31;

      VAR_31 = FUNC_0 (VAR_22, VAR_21);
      VAR_23[VAR_1].addr = VAR_31 + 96;
      for (VAR_26 = VAR_6, VAR_24 = VAR_31 + 96 + 8;
    VAR_26 <= VAR_7; VAR_26++, VAR_24 += 4)
 VAR_23[VAR_26].addr = VAR_24;
    }

  return VAR_23;
}
