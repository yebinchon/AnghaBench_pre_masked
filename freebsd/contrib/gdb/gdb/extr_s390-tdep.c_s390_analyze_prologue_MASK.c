
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prologue_value {int dummy; } ;
struct s390_prologue_data {int gpr_size; int fpr_size; struct prologue_value back_chain; struct prologue_value* gpr; struct prologue_value* fpr; struct prologue_value* spill; } ;
struct gdbarch {int dummy; } ;
typedef int bfd_byte ;
typedef scalar_t__ CORE_ADDR ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct prologue_value*,struct prologue_value*,int,unsigned int,unsigned int) ;
 int FUNC_1 (struct gdbarch*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,unsigned int*,int*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,unsigned int*,int*) ;
 scalar_t__ FUNC_4 (int *,int ,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_5 (int *,int ,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_6 (int *,int ,unsigned int*,unsigned int*,int*,unsigned int*) ;
 scalar_t__ FUNC_7 (int *,int ,int ,unsigned int*,unsigned int*,int*,unsigned int*) ;
 scalar_t__ FUNC_8 (int *,int ,unsigned int*,int*,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_9 (int *,int ,int ,unsigned int*,int*,unsigned int*,unsigned int*) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int FUNC_10 (struct prologue_value*,struct prologue_value*,struct prologue_value*) ;
 int FUNC_11 (struct prologue_value*,int) ;
 int FUNC_12 (struct prologue_value*,struct prologue_value*) ;
 int FUNC_13 (struct prologue_value*,size_t,int ) ;
 int FUNC_14 (struct prologue_value*,struct prologue_value*,struct prologue_value*) ;
 int FUNC_15 (struct prologue_value*,scalar_t__) ;
 int FUNC_16 (struct prologue_value*,size_t,int ) ;
 int FUNC_17 (struct prologue_value*) ;
 int FUNC_18 (struct prologue_value*,struct prologue_value*,struct prologue_value*) ;
 int FUNC_19 (struct prologue_value*,int,struct prologue_value*,struct s390_prologue_data*) ;
 int FUNC_20 (int *,scalar_t__) ;
 int FUNC_21 (struct prologue_value*,int,struct prologue_value*,struct s390_prologue_data*) ;

__attribute__((used)) static CORE_ADDR
FUNC_22 (struct gdbarch *VAR_67,
         CORE_ADDR VAR_68,
         CORE_ADDR VAR_69,
         struct s390_prologue_data *VAR_70)
{
  int VAR_71 = FUNC_1 (VAR_67) / 8;





  CORE_ADDR VAR_72 = VAR_68;


  CORE_ADDR VAR_73;


  CORE_ADDR VAR_74;


  {
    int VAR_75;




    VAR_70->gpr_size = VAR_71;
    VAR_70->fpr_size = 8;

    for (VAR_75 = 0; VAR_75 < VAR_4; VAR_75++)
      FUNC_16 (&VAR_70->gpr[VAR_75], VAR_6 + VAR_75, 0);

    for (VAR_75 = 0; VAR_75 < VAR_3; VAR_75++)
      FUNC_16 (&VAR_70->fpr[VAR_75], VAR_0 + VAR_75, 0);

    for (VAR_75 = 0; VAR_75 < VAR_5; VAR_75++)
      FUNC_17 (&VAR_70->spill[VAR_75]);

    FUNC_17 (&VAR_70->back_chain);
  }



  for (VAR_73 = VAR_68; VAR_73 > 0 && VAR_73 < VAR_69; VAR_73 = VAR_74)
    {
      bfd_byte VAR_76[VAR_2];
      int VAR_77 = FUNC_20 (VAR_76, VAR_73);


      unsigned int VAR_78, VAR_79, VAR_80, VAR_81, VAR_82;
      int VAR_83, VAR_84;



      struct prologue_value VAR_85, VAR_86, VAR_87;


      if (VAR_77 < 0)
        {
          VAR_72 = 0;
          break;
        }

      VAR_74 = VAR_73 + VAR_77;

      VAR_85 = VAR_70->gpr[VAR_7 - VAR_6];
      VAR_86 = VAR_70->gpr[VAR_1 - VAR_6];
      VAR_87 = VAR_70->back_chain;


      if (VAR_71 == 4
   && FUNC_2 (VAR_76, VAR_20, VAR_40, &VAR_79, &VAR_83))
        FUNC_15 (&VAR_70->gpr[VAR_79], VAR_83);


      else if (VAR_71 == 8
        && FUNC_2 (VAR_76, VAR_19, VAR_39, &VAR_79, &VAR_83))
        FUNC_15 (&VAR_70->gpr[VAR_79], VAR_83);


      else if (VAR_71 == 4
        && FUNC_4 (VAR_76, VAR_58, &VAR_79, &VAR_80))
        VAR_70->gpr[VAR_79] = VAR_70->gpr[VAR_80];


      else if (VAR_71 == 8
               && FUNC_5 (VAR_76, VAR_57, &VAR_79, &VAR_80))
        VAR_70->gpr[VAR_79] = VAR_70->gpr[VAR_80];


      else if (VAR_71 == 4
        && FUNC_8 (VAR_76, VAR_55, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_88;

          FUNC_0 (&VAR_88, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_88, 4, &VAR_70->gpr[VAR_79], VAR_70);
        }


      else if (VAR_71 == 4
        && FUNC_9 (VAR_76, VAR_21, VAR_41, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_89;

          FUNC_0 (&VAR_89, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_89, 4, &VAR_70->gpr[VAR_79], VAR_70);
        }


      else if (VAR_71 == 8
        && FUNC_9 (VAR_76, VAR_18, VAR_38, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_90;

          FUNC_0 (&VAR_90, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_90, 8, &VAR_70->gpr[VAR_79], VAR_70);
        }


      else if (VAR_71 == 4
        && FUNC_8 (VAR_76, VAR_64, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_91;

          FUNC_0 (&VAR_91, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_21 (&VAR_91, 4, &VAR_70->gpr[VAR_79], VAR_70);
        }


      else if (VAR_71 == 4
        && FUNC_9 (VAR_76, VAR_26, VAR_46, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_92;

          FUNC_0 (&VAR_92, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_21 (&VAR_92, 4, &VAR_70->gpr[VAR_79], VAR_70);
        }


      else if (VAR_71 == 8
        && FUNC_9 (VAR_76, VAR_23, VAR_43, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_93;

          FUNC_0 (&VAR_93, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_21 (&VAR_93, 8, &VAR_70->gpr[VAR_79], VAR_70);
        }


      else if (FUNC_8 (VAR_76, VAR_65, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        {
          struct prologue_value VAR_94;

          FUNC_0 (&VAR_94, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
          FUNC_21 (&VAR_94, 8, &VAR_70->fpr[VAR_79], VAR_70);
        }


      else if (VAR_71 == 4
        && FUNC_6 (VAR_76, VAR_66, &VAR_79, &VAR_82, &VAR_84, &VAR_78))
        {
          int VAR_95;
          int VAR_96;
          struct prologue_value VAR_97;

          for (VAR_95 = VAR_79, VAR_96 = 0;
               VAR_95 <= VAR_82;
               VAR_95++, VAR_96 += 4)
            {
              FUNC_0 (&VAR_97, VAR_70->gpr, VAR_84 + VAR_96, 0, VAR_78);
              FUNC_21 (&VAR_97, 4, &VAR_70->gpr[VAR_95], VAR_70);
            }
        }


      else if (VAR_71 == 4
        && FUNC_7 (VAR_76, VAR_25, VAR_45, &VAR_79, &VAR_82, &VAR_84, &VAR_78))
        {
          int VAR_98;
          int VAR_99;
          struct prologue_value VAR_100;

          for (VAR_98 = VAR_79, VAR_99 = 0;
               VAR_98 <= VAR_82;
               VAR_98++, VAR_99 += 4)
            {
              FUNC_0 (&VAR_100, VAR_70->gpr, VAR_84 + VAR_99, 0, VAR_78);
              FUNC_21 (&VAR_100, 4, &VAR_70->gpr[VAR_98], VAR_70);
            }
        }


      else if (VAR_71 == 8
        && FUNC_7 (VAR_76, VAR_24, VAR_44, &VAR_79, &VAR_82, &VAR_84, &VAR_78))
        {
          int VAR_101;
          int VAR_102;
          struct prologue_value VAR_103;

          for (VAR_101 = VAR_79, VAR_102 = 0;
               VAR_101 <= VAR_82;
               VAR_101++, VAR_102 += 8)
            {
              FUNC_0 (&VAR_103, VAR_70->gpr, VAR_84 + VAR_102, 0, VAR_78);
              FUNC_21 (&VAR_103, 8, &VAR_70->gpr[VAR_101], VAR_70);
            }
        }


      else if (VAR_71 == 4
        && FUNC_2 (VAR_76, VAR_10, VAR_30, &VAR_79, &VAR_83))
        FUNC_11 (&VAR_70->gpr[VAR_79], VAR_83);


      else if (VAR_71 == 8
               && FUNC_2 (VAR_76, VAR_9, VAR_29, &VAR_79, &VAR_83))
        FUNC_11 (&VAR_70->gpr[VAR_79], VAR_83);


      else if (VAR_71 == 4
        && FUNC_4 (VAR_76, VAR_50, &VAR_79, &VAR_80))
        FUNC_10 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_80]);


      else if (VAR_71 == 8
        && FUNC_5 (VAR_76, VAR_49, &VAR_79, &VAR_80))
        FUNC_10 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_80]);


      else if (VAR_71 == 4
        && FUNC_8 (VAR_76, VAR_48, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
 {
          struct prologue_value VAR_104;
          struct prologue_value VAR_105;

          FUNC_0 (&VAR_104, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_104, 4, &VAR_105, VAR_70);

   FUNC_10 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_105);
 }


      else if (VAR_71 == 4
        && FUNC_9 (VAR_76, VAR_11, VAR_31, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
 {
          struct prologue_value VAR_106;
          struct prologue_value VAR_107;

          FUNC_0 (&VAR_106, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_106, 4, &VAR_107, VAR_70);

   FUNC_10 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_107);
 }


      else if (VAR_71 == 8
        && FUNC_9 (VAR_76, VAR_8, VAR_28, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
 {
          struct prologue_value VAR_108;
          struct prologue_value VAR_109;

          FUNC_0 (&VAR_108, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_108, 8, &VAR_109, VAR_70);

   FUNC_10 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_109);
 }


      else if (VAR_71 == 4
        && FUNC_4 (VAR_76, VAR_63, &VAR_79, &VAR_80))
        FUNC_18 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_80]);


      else if (VAR_71 == 8
        && FUNC_5 (VAR_76, VAR_62, &VAR_79, &VAR_80))
        FUNC_18 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_80]);


      else if (VAR_71 == 4
        && FUNC_8 (VAR_76, VAR_61, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
 {
          struct prologue_value VAR_110;
          struct prologue_value VAR_111;

          FUNC_0 (&VAR_110, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_110, 4, &VAR_111, VAR_70);

   FUNC_18 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_111);
 }


      else if (VAR_71 == 4
        && FUNC_9 (VAR_76, VAR_27, VAR_47, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
 {
          struct prologue_value VAR_112;
          struct prologue_value VAR_113;

          FUNC_0 (&VAR_112, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_112, 4, &VAR_113, VAR_70);

   FUNC_18 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_113);
 }


      else if (VAR_71 == 8
        && FUNC_9 (VAR_76, VAR_22, VAR_42, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
 {
          struct prologue_value VAR_114;
          struct prologue_value VAR_115;

          FUNC_0 (&VAR_114, VAR_70->gpr, VAR_84, VAR_81, VAR_78);
   FUNC_19 (&VAR_114, 8, &VAR_115, VAR_70);

   FUNC_18 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_115);
 }


      else if (VAR_71 == 4
        && FUNC_4 (VAR_76, VAR_60, &VAR_79, &VAR_80))
        FUNC_14 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_80]);


      else if (VAR_71 == 8
               && FUNC_5 (VAR_76, VAR_59, &VAR_79, &VAR_80))
        FUNC_14 (&VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_79], &VAR_70->gpr[VAR_80]);


      else if (FUNC_8 (VAR_76, VAR_56, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        FUNC_0 (&VAR_70->gpr[VAR_79], VAR_70->gpr, VAR_84, VAR_81, VAR_78);


      else if (FUNC_9 (VAR_76, VAR_17, VAR_37, &VAR_79, &VAR_84, &VAR_81, &VAR_78))
        FUNC_0 (&VAR_70->gpr[VAR_79], VAR_70->gpr, VAR_84, VAR_81, VAR_78);


      else if (FUNC_3 (VAR_76, VAR_16, VAR_36, &VAR_79, &VAR_83))
        FUNC_15 (&VAR_70->gpr[VAR_79], VAR_73 + VAR_83 * 2);



      else if (FUNC_4 (VAR_76, VAR_52, &VAR_79, &VAR_80)
               && VAR_80 == 0)
        FUNC_15 (&VAR_70->gpr[VAR_79], VAR_74);


      else if (FUNC_2 (VAR_76, VAR_12, VAR_32, &VAR_79, &VAR_83))
        {
          FUNC_15 (&VAR_70->gpr[VAR_79], VAR_74);
          VAR_74 = VAR_73 + VAR_83 * 2;



          if (VAR_74 <= VAR_73)
            break;
        }


      else if (FUNC_4 (VAR_76, VAR_52, &VAR_79, &VAR_80)
        || FUNC_8 (VAR_76, VAR_51, &VAR_79, &VAR_84, &VAR_81, &VAR_78)
        || FUNC_4 (VAR_76, VAR_54, &VAR_79, &VAR_80)
        || FUNC_8 (VAR_76, VAR_53, &VAR_79, &VAR_84, &VAR_81, &VAR_78)
        || FUNC_2 (VAR_76, VAR_14, VAR_34, &VAR_79, &VAR_83)
        || FUNC_3 (VAR_76, VAR_15, VAR_35, &VAR_79, &VAR_83)
        || FUNC_3 (VAR_76, VAR_13, VAR_33, &VAR_80, &VAR_83))
 break;

      else






        ;






      {
        struct prologue_value *VAR_116 = &VAR_70->gpr[VAR_7 - VAR_6];
        struct prologue_value *VAR_117 = &VAR_70->gpr[VAR_1 - VAR_6];

        if ((! FUNC_12 (&VAR_85, VAR_116)
             && ! FUNC_13 (VAR_116, VAR_7, 0))
            || (! FUNC_12 (&VAR_86, VAR_117)
                && ! FUNC_13 (VAR_117, VAR_1, 0))
            || ! FUNC_12 (&VAR_87, &VAR_70->back_chain))
          VAR_72 = VAR_74;
      }
    }

  return VAR_72;
}
