
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct insn_chain {void* insn; } ;
typedef void* rtx ;
struct TYPE_4__ {void* reg_rtx; scalar_t__ in_reg; scalar_t__ out; void* out_reg; scalar_t__ in; size_t mode; int when_needed; int opnum; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (void*) ;
 size_t FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (int,size_t) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (void*) ;
 void* VAR_1 ;
 int FUNC_8 (void*) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (int *,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (void*) ;
 scalar_t__ FUNC_12 (void*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int *,int) ;
 void* FUNC_15 (void*) ;
 scalar_t__ VAR_3 ;
 void* FUNC_16 (void*) ;
 void* FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct insn_chain*,TYPE_1__*,int) ;
 int FUNC_20 (struct insn_chain*,TYPE_1__*,int) ;
 scalar_t__ VAR_4 ;
 void* FUNC_21 (scalar_t__,void*) ;
 int FUNC_22 (scalar_t__,void*) ;
 void* FUNC_23 (void*,int ,int) ;
 int FUNC_24 (scalar_t__,char*,int) ;
 int** VAR_5 ;
 scalar_t__ FUNC_25 (int,int) ;
 scalar_t__* VAR_6 ;
 scalar_t__* VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 void** VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__* VAR_15 ;
 scalar_t__* VAR_16 ;
 scalar_t__* VAR_17 ;
 scalar_t__* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void** VAR_21 ;
 int VAR_22 ;
 int* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void** VAR_26 ;
 int VAR_27 ;
 int FUNC_26 (void*,int ) ;
 void** VAR_28 ;
 scalar_t__* VAR_29 ;
 int VAR_30 ;
 int* VAR_31 ;
 scalar_t__* VAR_32 ;
 scalar_t__ FUNC_27 (int,int ,int ) ;
 int* VAR_33 ;
 TYPE_1__* VAR_34 ;
 void* FUNC_28 (void*) ;
 void** VAR_35 ;
 void** VAR_36 ;

__attribute__((used)) static void
FUNC_29 (struct insn_chain *VAR_37)
{
  rtx VAR_38 = VAR_37->insn;

  int VAR_39;

  FUNC_1 (VAR_25);

  for (VAR_39 = 0; VAR_39 < VAR_30; VAR_39++)
    VAR_8[VAR_39] = VAR_7[VAR_39]
      = VAR_6[VAR_39]
      = VAR_18[VAR_39] = VAR_17[VAR_39]
      = VAR_16[VAR_39]
      = VAR_15[VAR_39] = 0;
  VAR_12 = 0;
  VAR_13 = 0;
  VAR_11 = 0;
  VAR_14 = 0;


  if (VAR_4)
    {
      FUNC_24 (VAR_4, "\nReloads for insn # %d\n", FUNC_5 (VAR_38));
      FUNC_18 (VAR_4);
    }






  for (VAR_39 = 0; VAR_39 < VAR_9; VAR_39++)
    {
      if (VAR_34[VAR_39].reg_rtx
   && FUNC_9 (VAR_34[VAR_39].reg_rtx) < VAR_0)
 VAR_10[FUNC_9 (VAR_34[VAR_39].reg_rtx)] = 0;

      FUNC_19 (VAR_37, VAR_34 + VAR_39, VAR_39);
      FUNC_20 (VAR_37, VAR_34 + VAR_39, VAR_39);
    }
  FUNC_22 (VAR_12, VAR_38);
  FUNC_22 (VAR_13, VAR_38);

  for (VAR_39 = 0; VAR_39 < VAR_30; VAR_39++)
    {
      FUNC_22 (VAR_6[VAR_39], VAR_38);
      FUNC_22 (VAR_7[VAR_39], VAR_38);
      FUNC_22 (VAR_8[VAR_39], VAR_38);
    }

  FUNC_22 (VAR_14, VAR_38);
  FUNC_22 (VAR_11, VAR_38);

  for (VAR_39 = 0; VAR_39 < VAR_30; VAR_39++)
    {
      rtx VAR_40 = FUNC_21 (VAR_16[VAR_39], VAR_38);
      VAR_40 = FUNC_21 (VAR_17[VAR_39], VAR_40);
      VAR_40 = FUNC_21 (VAR_18[VAR_39], VAR_40);
      FUNC_21 (VAR_15[VAR_39], VAR_40);
    }
  for (VAR_39 = 0; VAR_39 < VAR_9; VAR_39++)
    {
      int VAR_41 = VAR_31[VAR_39];
      int VAR_42 = VAR_33[VAR_41];





      if (VAR_34[VAR_41].in_reg != 0
   && ! (VAR_29[VAR_41] || VAR_32[VAR_41]))
 {
   rtx VAR_43 = VAR_34[VAR_41].in_reg;

   if (FUNC_2 (VAR_43) == VAR_3)
     VAR_43 = FUNC_16 (VAR_43);

   if (FUNC_11 (VAR_43)
       && FUNC_9 (VAR_43) >= VAR_0
       && !FUNC_10 (&VAR_19, FUNC_9 (VAR_43)))
     {
       int VAR_44 = FUNC_9 (VAR_43);

       if (VAR_21[VAR_44])
  {
    int VAR_45 = FUNC_9 (VAR_21[VAR_44]);

    if (VAR_23[VAR_45] == VAR_44)
      VAR_35[VAR_45] = 0;
  }
     }
 }





      if (VAR_42 >= 0 && VAR_34[VAR_41].reg_rtx != 0)
 {
   int VAR_46 = VAR_5[VAR_42][FUNC_3 (VAR_34[VAR_41].reg_rtx)];
   int VAR_47;
   int VAR_48 = 0;
   int VAR_49 = 1;



   for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47++)
     {
       if (FUNC_27 (VAR_42 + VAR_47, VAR_34[VAR_41].opnum,
         VAR_34[VAR_41].when_needed))
  VAR_48 = 1;
       else
  VAR_49 = 0;
     }



   if (VAR_49)
     {



       for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47++)
           {
  FUNC_0 (VAR_27, VAR_42 + VAR_47);
      FUNC_0 (VAR_22, VAR_42 + VAR_47);
    }


       if (VAR_34[VAR_41].out != 0
    && (FUNC_11 (VAR_34[VAR_41].out)



        || FUNC_11 (VAR_34[VAR_41].out_reg)))
  {
    rtx VAR_50 = (FUNC_11 (VAR_34[VAR_41].out)
        ? VAR_34[VAR_41].out
        : VAR_34[VAR_41].out_reg
        ? VAR_34[VAR_41].out_reg
                     : FUNC_17 (VAR_34[VAR_41].in_reg, 0));
    int VAR_51 = FUNC_9 (VAR_50);
    int VAR_52 = (VAR_51 >= VAR_0 ? 1
        : VAR_5[VAR_51]
            [FUNC_3 (VAR_34[VAR_41].reg_rtx)]);
    bool VAR_53;

    VAR_35[VAR_42] = VAR_10[VAR_42];
    VAR_36[VAR_42] = VAR_50;
    VAR_21[VAR_51] = VAR_34[VAR_41].reg_rtx;

    VAR_53 = (VAR_51 < VAR_0
          && VAR_46 == VAR_52
          && FUNC_25 (VAR_41, VAR_51));







    if (VAR_51 < VAR_0)
      for (VAR_47 = 1; VAR_47 < VAR_52; VAR_47++)
        VAR_21[VAR_51 + VAR_47]
   = (VAR_53
      ? VAR_28[FUNC_9 (VAR_34[VAR_41].reg_rtx) + VAR_47]
      : 0);


    for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47++)
      {
        FUNC_0 (VAR_24, VAR_42 + VAR_47);
        VAR_23[VAR_42 + VAR_47]
   = (VAR_51 >= VAR_0 || !VAR_53
      ? VAR_51
      : VAR_51 + VAR_47);
        VAR_26[VAR_42 + VAR_47] = VAR_38;
        FUNC_13 (VAR_27, VAR_42 + VAR_47);
        if (FUNC_4 (VAR_42 + VAR_47, FUNC_3 (VAR_50)))
   FUNC_13 (VAR_22, VAR_42 + VAR_47);
      }
  }




       else if (VAR_34[VAR_41].out_reg == 0
         && VAR_34[VAR_41].in != 0
         && ((FUNC_11 (VAR_34[VAR_41].in)
       && FUNC_9 (VAR_34[VAR_41].in) >= VAR_0
                     && !FUNC_10 (&VAR_19,
             FUNC_9 (VAR_34[VAR_41].in)))
      || (FUNC_11 (VAR_34[VAR_41].in_reg)
          && !FUNC_10 (&VAR_19,
          FUNC_9 (VAR_34[VAR_41].in_reg))))
         && ! FUNC_26 (VAR_34[VAR_41].reg_rtx, FUNC_8 (VAR_38)))
  {
    int VAR_54;
    int VAR_55;
    rtx VAR_56;
    bool VAR_57;

    if (FUNC_11 (VAR_34[VAR_41].in)
        && FUNC_9 (VAR_34[VAR_41].in) >= VAR_0)
      VAR_56 = VAR_34[VAR_41].in;
    else if (FUNC_11 (VAR_34[VAR_41].in_reg))
      VAR_56 = VAR_34[VAR_41].in_reg;
    else
      VAR_56 = FUNC_17 (VAR_34[VAR_41].in_reg, 0);
    VAR_54 = FUNC_9 (VAR_56);

    VAR_55 = (VAR_54 >= VAR_0 ? 1
    : VAR_5[VAR_54]
        [FUNC_3 (VAR_34[VAR_41].reg_rtx)]);

    VAR_21[VAR_54] = VAR_34[VAR_41].reg_rtx;

    VAR_57 = (VAR_54 < VAR_0
          && VAR_46 == VAR_55
          && FUNC_25 (VAR_41, VAR_54));

    if (VAR_54 < VAR_0)
      for (VAR_47 = 1; VAR_47 < VAR_55; VAR_47++)
        VAR_21[VAR_54 + VAR_47]
   = (VAR_57
      ? VAR_28[FUNC_9 (VAR_34[VAR_41].reg_rtx) + VAR_47]
      : 0);





    if (! VAR_29[VAR_41]
        || (VAR_34[VAR_41].out && ! VAR_34[VAR_41].out_reg))
      VAR_35[VAR_42] = 0;

    for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47++)
      {
        FUNC_0 (VAR_24, VAR_42 + VAR_47);
        VAR_23[VAR_42 + VAR_47]
   = (VAR_54 >= VAR_0 || !VAR_57
      ? VAR_54
      : VAR_54 + VAR_47);
        VAR_26[VAR_42 + VAR_47] = VAR_38;
        FUNC_13 (VAR_27, VAR_42 + VAR_47);
        if (FUNC_4 (VAR_42 + VAR_47, FUNC_3 (VAR_56)))
   FUNC_13 (VAR_22, VAR_42 + VAR_47);
      }
  }
     }



   else if (VAR_48)
     {
       for (VAR_47 = 0; VAR_47 < VAR_46; VAR_47++)
  if (FUNC_27 (VAR_42 + VAR_47,
           VAR_34[VAR_41].opnum,
           VAR_34[VAR_41].when_needed))
    FUNC_0 (VAR_27, VAR_42 + VAR_47);
     }
 }
      if (VAR_42 < 0
   && ((VAR_34[VAR_41].out != 0
        && (FUNC_11 (VAR_34[VAR_41].out)
     || (FUNC_7 (VAR_34[VAR_41].out)
         && FUNC_11 (VAR_34[VAR_41].out_reg))))
       || (VAR_34[VAR_41].out == 0 && VAR_34[VAR_41].out_reg
    && FUNC_11 (VAR_34[VAR_41].out_reg))))
 {
   rtx VAR_58 = ((VAR_34[VAR_41].out && FUNC_11 (VAR_34[VAR_41].out))
       ? VAR_34[VAR_41].out : VAR_34[VAR_41].out_reg);
   int VAR_59 = FUNC_9 (VAR_58);
   if (VAR_59 >= VAR_0)
     {
       rtx VAR_60, VAR_61 = VAR_1;

       VAR_21[VAR_59] = 0;




       VAR_60 = VAR_34[VAR_41].reg_rtx;



       if (! VAR_60)
  {
    rtx VAR_62 = FUNC_28 (VAR_38);
    if (VAR_62 && FUNC_12 (VAR_62) == VAR_34[VAR_41].out)
      {
        int VAR_63;

        VAR_60 = FUNC_15 (VAR_62);
        VAR_61 = VAR_38;
        for (VAR_63 = 0; VAR_63 < VAR_9; VAR_63++)
   {
     if (VAR_34[VAR_63].in == VAR_60)
       {
         VAR_60 = VAR_34[VAR_63].reg_rtx;
         break;
       }
   }
      }
  }
       else
  VAR_61 = VAR_10[FUNC_9 (VAR_60)];
       if (VAR_60 && FUNC_11 (VAR_60)
    && FUNC_9 (VAR_60) < VAR_0)
  {
    int VAR_64 = FUNC_9 (VAR_60);
    int VAR_65 = VAR_5[VAR_64][VAR_34[VAR_41].mode];




    rtx VAR_66 = FUNC_23 (VAR_38, VAR_2, VAR_64);
    if (! VAR_66 && VAR_61)
      VAR_66 = FUNC_23 (VAR_61, VAR_2, VAR_64);
    while (VAR_65-- > 0)
      {
        VAR_35[VAR_64 + VAR_65] = VAR_61;
        VAR_36[VAR_64 + VAR_65] = VAR_58;
        VAR_23[VAR_64 + VAR_65] = VAR_59;
        VAR_26[VAR_64 + VAR_65] = VAR_61;
        FUNC_0 (VAR_24, VAR_64 + VAR_65);
        FUNC_13 (VAR_27, VAR_64 + VAR_65);
        if (FUNC_4 (VAR_64 + VAR_65,
         FUNC_3 (VAR_60)))
   FUNC_13 (VAR_22,
       VAR_64 + VAR_65);
        FUNC_13 (VAR_20, VAR_64 + VAR_65);
        if (VAR_66)
   FUNC_13 (VAR_25, VAR_64);
        else
   FUNC_0 (VAR_25, VAR_64);
      }
    VAR_21[VAR_59] = VAR_60;



    FUNC_14 (&VAR_19,
         VAR_59);
  }
     }
   else
     {
       int VAR_67 = VAR_5[VAR_59][FUNC_3 (VAR_58)];

       while (VAR_67-- > 0)
  VAR_21[VAR_59 + VAR_67] = 0;
     }
 }
    }
  FUNC_6 (VAR_24, VAR_25);
}
