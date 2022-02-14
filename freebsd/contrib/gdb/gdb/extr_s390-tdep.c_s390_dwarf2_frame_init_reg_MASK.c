
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_tdep {int abi; } ;
struct gdbarch {int dummy; } ;
struct dwarf2_frame_state_reg {void* how; } ;




 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
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
 struct gdbarch_tdep* FUNC_0 (struct gdbarch*) ;

__attribute__((used)) static void
FUNC_1 (struct gdbarch *VAR_14, int VAR_15,
                            struct dwarf2_frame_state_reg *VAR_16)
{
  struct gdbarch_tdep *VAR_17 = FUNC_0 (VAR_14);

  switch (VAR_17->abi)
    {
    case 129:

      if ((VAR_15 >= VAR_13 && VAR_15 <= VAR_11)
   || VAR_15 == VAR_5
   || VAR_15 == VAR_6)
 VAR_16->how = VAR_1;


      else if ((VAR_15 >= VAR_10 && VAR_15 <= VAR_12)
        || (VAR_15 >= VAR_3 && VAR_15 <= VAR_4
     && VAR_15 != VAR_5 && VAR_15 != VAR_6))
 VAR_16->how = VAR_2;


      else if (VAR_15 == VAR_9)
 VAR_16->how = VAR_0;
      break;

    case 128:

      if ((VAR_15 >= VAR_13 && VAR_15 <= VAR_11)
   || (VAR_15 >= VAR_8 && VAR_15 <= VAR_4))
 VAR_16->how = VAR_1;


      else if ((VAR_15 >= VAR_10 && VAR_15 <= VAR_12)
        || (VAR_15 >= VAR_3 && VAR_15 <= VAR_7))
 VAR_16->how = VAR_2;


      else if (VAR_15 == VAR_9)
 VAR_16->how = VAR_0;
      break;
    }
}
