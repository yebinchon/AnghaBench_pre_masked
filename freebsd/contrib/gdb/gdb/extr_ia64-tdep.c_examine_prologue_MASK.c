
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int tmp ;
struct ia64_frame_cache {scalar_t__ after_prologue; int cfm; scalar_t__* saved_regs; scalar_t__ sor; scalar_t__ sof; scalar_t__ sol; scalar_t__ bsp; int frameless; int mem_stack_frame_size; int fp_reg; scalar_t__ prev_cfm; } ;
struct frame_info {int dummy; } ;
typedef scalar_t__ instruction_type ;
typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__*,long long*) ;
 int FUNC_3 (struct frame_info*,int,char*) ;
 int FUNC_4 (scalar_t__,scalar_t__*,int) ;
 int FUNC_5 (long long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*,int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,int*) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int VAR_12 ;

__attribute__((used)) static CORE_ADDR
FUNC_10 (CORE_ADDR VAR_13, CORE_ADDR VAR_14, struct frame_info *VAR_15, struct ia64_frame_cache *VAR_16)
{
  CORE_ADDR VAR_17;
  CORE_ADDR VAR_18 = VAR_13;
  instruction_type VAR_19;
  long long VAR_20;
  int VAR_21 = 0;
  int VAR_22 = 0;
  int VAR_23 = 0;
  int VAR_24 = 0;
  int VAR_25 = 0;
  int VAR_26 = 0;
  int VAR_27 = 0;
  CORE_ADDR VAR_28 = 0;
  char VAR_29[8];
  char VAR_30[8];
  char VAR_31[256];
  int VAR_32;
  int VAR_33 = 1;
  int VAR_34;
  CORE_ADDR VAR_35;
  char VAR_36[8];
  CORE_ADDR VAR_37, VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;

  FUNC_7 (VAR_29, 0, sizeof VAR_29);
  FUNC_7 (VAR_30, 0, sizeof VAR_30);
  FUNC_7 (VAR_31, 0, sizeof VAR_31);

  if (VAR_16->after_prologue != 0
      && VAR_16->after_prologue <= VAR_14)
    return VAR_16->after_prologue;

  VAR_14 = FUNC_8 (VAR_13, VAR_14, &VAR_32);
  VAR_17 = FUNC_2 (VAR_13, &VAR_19, &VAR_20);



  if (VAR_13 < VAR_14 && VAR_17
      && VAR_19 == VAR_10 && ((VAR_20 & 0x1ee0000003fLL) == 0x02c00000000LL))
    {

      int VAR_43 = (int) ((VAR_20 & 0x00078000000LL) >> 27);
      int VAR_44 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
      int VAR_45 = (int) ((VAR_20 & 0x000000fe000LL) >> 13);
      int VAR_46 = (int) ((VAR_20 & 0x00000001fc0LL) >> 6);






      if (!VAR_15 ||
   (VAR_45 == (VAR_16->cfm & 0x7f) &&
    VAR_44 == ((VAR_16->cfm >> 7) & 0x7f)))
 VAR_33 = 0;

      VAR_21 = VAR_46;
      VAR_18 = VAR_17;
      VAR_13 = VAR_17;
    }
  else
    {

      if (VAR_13 < VAR_14 && VAR_17
   && (VAR_19 == VAR_1 || VAR_19 == VAR_10)
          && ((VAR_20 & 0x1ee00000000LL) == 0x10800000000LL))
 {

   int VAR_47 = (int) ((((VAR_20 & 0x01000000000LL) ? -1 : 0) << 13)
                    | ((VAR_20 & 0x001f8000000LL) >> 20)
             | ((VAR_20 & 0x000000fe000LL) >> 13));
   int VAR_48 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
   int VAR_49 = (int) ((VAR_20 & 0x00000001fc0LL) >> 6);
   int VAR_50 = (int) (VAR_20 & 0x0000000003fLL);
   if (VAR_50 == 0 && VAR_49 == 2 && VAR_47 == 0 && VAR_48 == 12 && VAR_23 == 0)
     {

       VAR_23 = VAR_49;
       VAR_18 = VAR_17;
     }
 }



      if (!VAR_23)
 {
   VAR_13 = VAR_14;
   if (VAR_32)
     VAR_18 = VAR_14;
 }
    }



  while (VAR_13 < VAR_14)
    {
      VAR_17 = FUNC_2 (VAR_13, &VAR_19, &VAR_20);
      if (VAR_17 == 0)
 break;

      if (VAR_19 == VAR_0 && ((VAR_20 & 0x1e1f800003f) != 0x04000000000))
 {

   if (VAR_32)
     VAR_14 = VAR_13;
   break;
 }
      else if (((VAR_20 & 0x3fLL) != 0LL) &&
        (VAR_33 || VAR_22 != 0))
 {


   if (VAR_32)
     VAR_14 = VAR_13;
   break;
 }
      else if (VAR_19 == VAR_1 && ((VAR_20 & 0x1eff8000000LL) == 0x00188000000LL))
        {

   int VAR_51 = (int) ((VAR_20 & 0x0000000e000LL) >> 13);
   int VAR_52 = (int) ((VAR_20 & 0x00000001fc0LL) >> 6);
   int VAR_53 = (int) (VAR_20 & 0x0000000003f);

   if (VAR_53 == 0 && VAR_51 == 0 && VAR_52 >= 32 && VAR_22 == 0)
     {
       VAR_22 = VAR_52;
       VAR_18 = VAR_17;
     }
 }
      else if ((VAR_19 == VAR_1 || VAR_19 == VAR_10)
          && ((VAR_20 & 0x1ee00000000LL) == 0x10800000000LL))
 {

   int VAR_54 = (int) ((((VAR_20 & 0x01000000000LL) ? -1 : 0) << 13)
                    | ((VAR_20 & 0x001f8000000LL) >> 20)
             | ((VAR_20 & 0x000000fe000LL) >> 13));
   int VAR_55 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
   int VAR_56 = (int) ((VAR_20 & 0x00000001fc0LL) >> 6);
   int VAR_57 = (int) (VAR_20 & 0x0000000003fLL);

   if (VAR_57 == 0 && VAR_56 >= 32 && VAR_54 == 0 && VAR_55 == 12 && VAR_23 == 0)
     {

       VAR_23 = VAR_56;
       VAR_18 = VAR_17;
     }
   else if (VAR_57 == 0 && VAR_56 == 12 && VAR_55 == 12)
     {

       VAR_26 -= VAR_54;
       VAR_18 = VAR_17;
     }
   else if (VAR_57 == 0 && VAR_56 == 2
         && ((VAR_55 == VAR_23 && VAR_23 != 0) || VAR_55 == 12))
     {
       char VAR_58[VAR_11];
       CORE_ADDR VAR_59 = 0;
       if (VAR_15)
  {
    FUNC_3 (VAR_15, VAR_12, VAR_58);
    VAR_59 = FUNC_1 (VAR_58, 8);
  }
       VAR_28 = VAR_59
                   + (VAR_55 == 12 ? 0 : VAR_26)
     + VAR_54;
       VAR_27 = VAR_56;
       VAR_18 = VAR_17;
     }
   else if (VAR_57 == 0 && VAR_55 >= 32 && VAR_55 < 40 && !VAR_29[VAR_55] &&
     VAR_56 < 256 && VAR_54 == 0)
     {

       VAR_31[VAR_56] = VAR_55;
       VAR_18 = VAR_17;
     }
   else if (VAR_33 && VAR_57 == 0 && VAR_56 == VAR_23 && VAR_54 == 0 &&
     VAR_55 == 2)
     {

       VAR_18 = VAR_17;
       break;
     }
 }
      else if (VAR_19 == VAR_10
            && ( ((VAR_20 & 0x1efc0000000LL) == 0x0eec0000000LL)
                || ((VAR_20 & 0x1ffc8000000LL) == 0x0cec0000000LL) ))
 {




   int VAR_60 = FUNC_5(VAR_20);
   int VAR_61 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
   int VAR_62 = (int) ((VAR_20 & 0x000000fe000LL) >> 13);
   int VAR_63 = (int) (VAR_20 & 0x0000000003fLL);
   if (VAR_63 == 0 && VAR_61 == VAR_27 && VAR_28 != 0
       && ((2 <= VAR_62 && VAR_62 <= 5) || (16 <= VAR_62 && VAR_62 <= 31)))
     {
       VAR_16->saved_regs[VAR_3 + VAR_62] = VAR_28;

              if ((VAR_20 & 0x1efc0000000) == 0x0eec0000000)
  VAR_28 += VAR_60;
       else
  VAR_28 = 0;
       VAR_18 = VAR_17;
     }
 }
      else if ((VAR_19 == VAR_10 && ((VAR_20 & 0x1eff8000000LL) == 0x02110000000LL))
            || (VAR_19 == VAR_1 && ((VAR_20 & 0x1eff8000000LL) == 0x00050000000LL)) )
 {




   int VAR_64 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
   int VAR_65 = (int) ((VAR_20 & 0x00000001fc0LL) >> 6);
   int VAR_66 = (int) (VAR_20 & 0x0000000003fLL);
   if (VAR_66 == 0 && FUNC_6 (VAR_65) && VAR_64 == 36 )
     {


       VAR_24 = VAR_65;
       VAR_18 = VAR_17;
     }
 }
      else if (VAR_19 == VAR_1 && ((VAR_20 & 0x1eff8000000LL) == 0x00198000000LL))
 {

   int VAR_67 = (int) ((VAR_20 & 0x00000001fc0LL) >> 6);
   int VAR_68 = (int) (VAR_20 & 0x0000000003fLL);
   if (VAR_68 == 0 && FUNC_6 (VAR_67))
     {
       VAR_25 = VAR_67;
       VAR_18 = VAR_17;
     }
 }
      else if (VAR_19 == VAR_10
            && ( ((VAR_20 & 0x1ffc8000000LL) == 0x08cc0000000LL)
         || ((VAR_20 & 0x1efc0000000LL) == 0x0acc0000000LL)))
 {



   int VAR_69 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
   int VAR_70 = (int) ((VAR_20 & 0x000000fe000LL) >> 13);
   int VAR_71 = (int) (VAR_20 & 0x0000000003fLL);
   int VAR_72 = VAR_70 < 256 ? VAR_31[VAR_70] : 0;
   if (VAR_71 == 0 && VAR_69 == VAR_27 && VAR_28 != 0
       && (VAR_70 == VAR_24 || VAR_70 == VAR_25))
     {




       if (VAR_70 == VAR_24)
  {

    VAR_16->saved_regs[VAR_7] = VAR_28;
    VAR_24 = 0;
  }
       else
         {

    VAR_16->saved_regs[VAR_6] = VAR_28;
    VAR_25 = 0;
  }
       if ((VAR_20 & 0x1efc0000000LL) == 0x0acc0000000LL)

  VAR_28 += FUNC_5(VAR_20);
       else
  VAR_28 = 0;
       VAR_18 = VAR_17;
     }
   else if (VAR_71 == 0 && 32 <= VAR_70 && VAR_70 < 40 && !VAR_29[VAR_70-32])
     {

       VAR_29[VAR_70-32] = 1;
       VAR_18 = VAR_17;
     }
   else if (VAR_71 == 0 && 32 <= VAR_72 && VAR_72 < 40 &&
     !VAR_29[VAR_72-32])
     {

       VAR_29[VAR_72-32] = 1;
       VAR_18 = VAR_17;
     }
 }
      else if (VAR_19 == VAR_10 && ((VAR_20 & 0x1ff08000000LL) == 0x08c00000000LL))
 {
   int VAR_73 = (int) ((VAR_20 & 0x000000fe000LL) >> 13);
   int VAR_74 = (int) (VAR_20 & 0x0000000003fLL);
   int VAR_75 = VAR_73 < 256 ? VAR_31[VAR_73] : 0;
   if (VAR_74 == 0 && 32 <= VAR_73 && VAR_73 < 40 && !VAR_29[VAR_73-32])
     {
       VAR_29[VAR_73-32] = 1;
       VAR_18 = VAR_17;
     }
   else if (VAR_74 == 0 && 32 <= VAR_75 && VAR_75 < 40 &&
     !VAR_29[VAR_75-32])
     {

       VAR_29[VAR_75-32] = 1;
       VAR_18 = VAR_17;
     }
 }
      else if (VAR_19 == VAR_10 && ((VAR_20 & 0x1ff88000000LL) == 0x0cc80000000LL))
        {







   int VAR_76 = (int) ((VAR_20 & 0x000000fe000LL) >> 13);
   int VAR_77 = (int) (VAR_20 & 0x0000000003fLL);
   if (VAR_77 == 0 && 8 <= VAR_76 && VAR_76 < 16 && !VAR_30[VAR_76 - 8])
     {
       VAR_30[VAR_76-8] = 1;
       VAR_18 = VAR_17;
     }
 }
      else if (VAR_19 == VAR_10
            && ( ((VAR_20 & 0x1ffc8000000LL) == 0x08ec0000000LL)
         || ((VAR_20 & 0x1efc0000000LL) == 0x0aec0000000LL)))
 {



   int VAR_78 = (int) ((VAR_20 & 0x00007f00000LL) >> 20);
   int VAR_79 = (int) ((VAR_20 & 0x000000fe000LL) >> 13);
   int VAR_80 = (int) (VAR_20 & 0x0000000003fLL);
   if (VAR_80 == 0 && VAR_78 == VAR_27 && 4 <= VAR_79 && VAR_79 <= 7)
     {



       VAR_16->saved_regs[VAR_4 + VAR_79] = VAR_28;
       if ((VAR_20 & 0x1efc0000000LL) == 0x0aec0000000LL)

  VAR_28 += FUNC_5(VAR_20);
       else
  VAR_28 = 0;
       VAR_18 = VAR_17;
     }
 }

      VAR_13 = VAR_17;
    }




  if (!VAR_33 && VAR_15)
    {



      VAR_41 = VAR_16->cfm;
      VAR_38 = VAR_16->sor;
      VAR_40 = VAR_16->sof;
      VAR_39 = VAR_16->sol;
      VAR_42 = (VAR_41 >> 18) & 0x7f;


      VAR_37 = FUNC_9 (VAR_16->bsp, -VAR_40);

      for (VAR_34 = 0, VAR_35 = VAR_37;
    VAR_34 < VAR_40;
    VAR_34++, VAR_35 += 8)
 {
   if (FUNC_0 (VAR_35))
     {
       VAR_35 += 8;
     }
   if (VAR_34+32 == VAR_21)
     VAR_16->saved_regs[VAR_2] = VAR_35;
   if (VAR_34+32 == VAR_22)
     VAR_16->saved_regs[VAR_9] = VAR_35;
   if (VAR_34+32 == VAR_23)
     VAR_16->saved_regs[VAR_8] = VAR_35;
 }



      VAR_41 = 0;
      if (VAR_16->saved_regs[VAR_2] != 0)
 {
   uint64_t VAR_81;
   FUNC_4 (VAR_16->saved_regs[VAR_2], &VAR_81, sizeof(VAR_81));
   VAR_41 = VAR_81;
 }
      else if (VAR_21 != 0)
 {
   FUNC_3 (VAR_15, VAR_21, VAR_36);
   VAR_41 = FUNC_1 (VAR_36, 8);
 }
      VAR_16->prev_cfm = VAR_41;

      if (VAR_41 != 0)
 {
   VAR_38 = ((VAR_41 >> 14) & 0xf) * 8;
   VAR_40 = (VAR_41 & 0x7f);
   VAR_39 = (VAR_41 >> 7) & 0x7f;
   VAR_42 = (VAR_41 >> 18) & 0x7f;



   VAR_37 = FUNC_9 (VAR_37, -VAR_39);

   for (VAR_34 = 0, VAR_35 = VAR_37;
        VAR_34 < VAR_40;
        VAR_34++, VAR_35 += 8)
     {
       if (FUNC_0 (VAR_35))
  {
    VAR_35 += 8;
  }
       if (VAR_34 < VAR_38)
  VAR_16->saved_regs[VAR_5 + ((VAR_34 + (VAR_38 - VAR_42)) % VAR_38)]
    = VAR_35;
       else
  VAR_16->saved_regs[VAR_5 + VAR_34] = VAR_35;
     }

 }
    }


  if (VAR_32 && VAR_14 >= VAR_18)
    VAR_18 = VAR_14;

  VAR_16->frameless = VAR_33;
  VAR_16->after_prologue = VAR_18;
  VAR_16->mem_stack_frame_size = VAR_26;
  VAR_16->fp_reg = VAR_23;

  return VAR_18;
}
