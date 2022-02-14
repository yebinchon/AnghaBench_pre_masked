
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct obj_section {int * objfile; } ;
struct minimal_symbol {int dummy; } ;
struct gdbarch_tdep {int wordsize; int ppc_gp0_regnum; scalar_t__ ppc_vr0_regnum; int ppc_lr_regnum; } ;
struct gdbarch {int dummy; } ;
typedef int ULONGEST ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct minimal_symbol*) ;
 int FUNC_1 (struct minimal_symbol*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;
 char* FUNC_5 (struct value*) ;
 int FUNC_6 (struct value*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 struct type* FUNC_9 (int ) ;
 int FUNC_10 (char*,struct type*,char*,struct type*) ;
 int VAR_7 ;
 struct obj_section* FUNC_11 (int) ;
 int FUNC_12 (int) ;
 struct gdbarch_tdep* FUNC_13 (int ) ;
 struct minimal_symbol* FUNC_14 (char*,int *,int *) ;
 struct minimal_symbol* FUNC_15 (int) ;
 int FUNC_16 (char*,char*,int) ;
 int FUNC_17 (char*,int ,int) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int,int) ;
 int FUNC_20 () ;
 int FUNC_21 (struct regcache*,int,char*) ;
 int FUNC_22 (struct regcache*,int,int) ;
 int FUNC_23 (struct regcache*,int,int) ;
 struct type* FUNC_24 (struct gdbarch*,int) ;
 int FUNC_25 (struct type*,char*) ;
 int FUNC_26 (int,char*,int) ;
 int FUNC_27 (int,int,int const) ;
 int FUNC_28 (int,int,int) ;

CORE_ADDR
FUNC_29 (struct gdbarch *VAR_8, CORE_ADDR VAR_9,
    struct regcache *VAR_10, CORE_ADDR VAR_11,
    int VAR_12, struct value **VAR_13, CORE_ADDR VAR_14,
    int VAR_15, CORE_ADDR VAR_16)
{
  struct gdbarch_tdep *VAR_17 = FUNC_13 (VAR_7);



  const CORE_ADDR VAR_18 = FUNC_20 ();

  int VAR_19;


  LONGEST VAR_20 = 0;


  LONGEST VAR_21 = 0;







  FUNC_12 (VAR_17->wordsize == 8);
  for (VAR_19 = 0; VAR_19 < 2; VAR_19++)
    {
      int VAR_22;


      int VAR_23 = 1;


      int VAR_24 = 3;

      int VAR_25 = 2;


      CORE_ADDR VAR_26;


      CORE_ADDR VAR_27;

      if (!VAR_19)
 {




   VAR_26 = 0;
   VAR_27 = 0;
 }
      else
 {



   VAR_27 = FUNC_7 (VAR_14 - VAR_20, 16);
   VAR_26 = FUNC_7 (VAR_27 - VAR_21, 16);


   VAR_14 = FUNC_7 (VAR_26 - 48, 16);
 }






      if (VAR_15)
 {
   if (VAR_19)
     FUNC_22 (VAR_10,
       VAR_17->ppc_gp0_regnum + VAR_24,
       VAR_16);
   VAR_24++;
   VAR_26 = FUNC_8 (VAR_26 + VAR_17->wordsize, VAR_17->wordsize);
 }

      for (VAR_22 = 0; VAR_22 < VAR_12; VAR_22++)
 {
   struct value *VAR_28 = VAR_13[VAR_22];
   struct type *VAR_29 = FUNC_9 (FUNC_6 (VAR_28));
   char *VAR_30 = FUNC_5 (VAR_28);
   if (FUNC_2 (VAR_29) == VAR_5 && FUNC_3 (VAR_29) <= 8)
     {



       if (VAR_19)
  {
    if (FUNC_18 (VAR_7)
        && VAR_23 <= 13)
      {
        char VAR_31[VAR_1];
        struct type *VAR_32 = FUNC_24 (VAR_8,
           VAR_0);
        FUNC_10 (VAR_30, VAR_29, VAR_31, VAR_32);
        FUNC_21 (VAR_10, VAR_0 + VAR_23,
          VAR_31);
      }
    if (VAR_24 <= 10)
      {
        char VAR_33[VAR_1];
        FUNC_17 (VAR_33, 0, sizeof VAR_33);
        FUNC_16 (VAR_33, VAR_30, FUNC_3 (VAR_29));
        FUNC_21 (VAR_10,
          VAR_17->ppc_gp0_regnum + VAR_24,
          VAR_33);
      }
    FUNC_26 (VAR_26, VAR_30, FUNC_3 (VAR_29));
  }

       VAR_23++;
       VAR_24++;
       VAR_26 = FUNC_8 (VAR_26 + FUNC_3 (VAR_29), VAR_17->wordsize);
     }
   else if (FUNC_3 (VAR_29) == 16 && FUNC_4 (VAR_29)
     && FUNC_2 (VAR_29) == VAR_3
     && VAR_17->ppc_vr0_regnum >= 0)
     {





       if (VAR_25 <= 13)
  {
    if (VAR_19)
      FUNC_21 (VAR_10,
        VAR_17->ppc_vr0_regnum + VAR_25, VAR_30);
    VAR_25++;
  }
       else
  {
    if (VAR_19)
      FUNC_26 (VAR_27, VAR_30, FUNC_3 (VAR_29));
    VAR_27 = FUNC_8 (VAR_27 + FUNC_3 (VAR_29), 16);
  }
     }
   else if ((FUNC_2 (VAR_29) == VAR_6
      || FUNC_2 (VAR_29) == VAR_4)
     && FUNC_3 (VAR_29) <= 8)
     {


       if (VAR_19)
  {

    ULONGEST VAR_34 = FUNC_25 (VAR_29, VAR_30);
    if (VAR_24 <= 10)
      FUNC_23 (VAR_10,
          VAR_17->ppc_gp0_regnum +
          VAR_24, VAR_34);
    FUNC_28 (VAR_26, VAR_17->wordsize,
       VAR_34);
  }
       VAR_24++;
       VAR_26 = FUNC_8 (VAR_26 + FUNC_3 (VAR_29), VAR_17->wordsize);
     }
   else
     {
       int VAR_35;
       for (VAR_35 = 0; VAR_35 < FUNC_3 (VAR_29);
     VAR_35 += VAR_17->wordsize)
  {
    if (VAR_19 && VAR_24 <= 10)
      {
        char VAR_36[VAR_1];
        int VAR_37 = FUNC_3 (VAR_29) - VAR_35;
        if (VAR_37 > VAR_17->wordsize)
   VAR_37 = VAR_17->wordsize;
        FUNC_17 (VAR_36, 0, sizeof VAR_36);
        FUNC_16 (VAR_36, VAR_30 + VAR_35, VAR_37);

        if (VAR_37 == 1 || VAR_37 == 2 || VAR_37 == 4)
   FUNC_16 (VAR_36 + VAR_17->wordsize - VAR_37,
    VAR_30 + VAR_35, VAR_37);
        FUNC_21 (VAR_10, VAR_24, VAR_36);
      }
    VAR_24++;
  }
       if (VAR_19)







  FUNC_26 (VAR_26, VAR_30, FUNC_3 (VAR_29));

       VAR_26 = FUNC_8 (VAR_26 + FUNC_3 (VAR_29), VAR_17->wordsize);
     }
 }

      if (!VAR_19)
 {

   VAR_20 = VAR_27;


   if (VAR_24 < 8)
     VAR_21 = 8 * VAR_17->wordsize;
   else
     VAR_21 = VAR_26;
 }
    }


  FUNC_22 (VAR_10, VAR_2, VAR_14);


  FUNC_27 (VAR_14, VAR_17->wordsize, VAR_18);



  FUNC_22 (VAR_10, VAR_17->ppc_lr_regnum, VAR_11);







  {


    struct minimal_symbol *VAR_38 = FUNC_15 (VAR_9);
    if (VAR_38 != ((void*)0) && FUNC_0 (VAR_38)[0] == '.')
      {


 struct obj_section *VAR_39 = FUNC_11 (VAR_9);
 if (VAR_39 != ((void*)0) && VAR_39->objfile != ((void*)0))
   {





     struct minimal_symbol *VAR_40 =
       FUNC_14 (FUNC_0 (VAR_38) + 1, ((void*)0),
         VAR_39->objfile);
     if (VAR_40 != ((void*)0))
       {


  CORE_ADDR VAR_41 =
    FUNC_19 (FUNC_1 (VAR_40)
      + VAR_17->wordsize,
      VAR_17->wordsize);
  FUNC_23 (VAR_10,
      VAR_17->ppc_gp0_regnum + 2, VAR_41);
       }
   }
      }
  }

  return VAR_14;
}
