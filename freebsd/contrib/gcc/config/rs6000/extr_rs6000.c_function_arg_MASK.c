
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ rtx ;
typedef enum rs6000_abi { ____Placeholder_rs6000_abi } rs6000_abi ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_7__ {int call_cookie; scalar_t__ nargs_prototype; scalar_t__ fregno; int words; int vregno; int sysv_gregno; scalar_t__ prototype; scalar_t__ stdarg; } ;
typedef TYPE_1__ CUMULATIVE_ARGS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,scalar_t__,int) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int,scalar_t__) ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__,scalar_t__) ;
 int FUNC_9 (int,scalar_t__*) ;
 scalar_t__ FUNC_10 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (int,int ) ;
 scalar_t__ FUNC_12 (int,int) ;
 int FUNC_13 (scalar_t__) ;
 void* FUNC_14 (int,scalar_t__) ;
 scalar_t__ VAR_37 ;
 scalar_t__ FUNC_15 (TYPE_1__*,scalar_t__,int,int) ;
 scalar_t__ FUNC_16 (int,scalar_t__,int) ;
 int FUNC_17 (int,scalar_t__,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,int,scalar_t__) ;

rtx
FUNC_19 (CUMULATIVE_ARGS *VAR_38, enum machine_mode VAR_39,
       tree VAR_40, int VAR_41)
{
  enum rs6000_abi VAR_42 = VAR_7;





  if (VAR_39 == VAR_35)
    {
      if (VAR_42 == VAR_1
   && (VAR_38->call_cookie & VAR_3) == 0
   && (VAR_38->stdarg
       || (VAR_38->nargs_prototype < 0
    && (VAR_38->prototype || VAR_28))))
 {

   if (VAR_31)
     return FUNC_1 (VAR_38->call_cookie | VAR_5);
   else if (VAR_26 && VAR_25)
     return FUNC_1 (VAR_38->call_cookie
       | ((VAR_38->fregno == VAR_11)
          ? VAR_5
          : VAR_4));
 }

      return FUNC_1 (VAR_38->call_cookie);
    }

  if (VAR_37 && VAR_39 == VAR_2
      && FUNC_4 (VAR_40) == VAR_18)
    {
      rtx VAR_43 = FUNC_15 (VAR_38, VAR_40, VAR_41, 0);
      if (VAR_43 != VAR_16)
 return VAR_43;

    }

  if (FUNC_5 (VAR_38, VAR_39, VAR_40, VAR_41))
    if (VAR_22 && ! VAR_38->prototype)
      {


 int VAR_44;
 rtx VAR_45;
 VAR_44 = (VAR_38->words + 1) & ~1;

 if (VAR_44 >= VAR_15)
   {
     VAR_45 = VAR_16;
   }
 else
   {
     VAR_45 = FUNC_12 (VAR_39, VAR_14 + VAR_44);
   }
 return FUNC_11 (VAR_39,
   FUNC_8 (2,
       FUNC_10 (VAR_35,
            VAR_45, VAR_36),
       FUNC_10 (VAR_35,
            FUNC_12 (VAR_39, VAR_38->vregno),
            VAR_36)));
      }
    else
      return FUNC_12 (VAR_39, VAR_38->vregno);
  else if (VAR_23
    && (FUNC_0 (VAR_39)
        || (VAR_40 && FUNC_4 (VAR_40) == VAR_34
     && FUNC_13 (VAR_40) == 16)))
    {
      if (VAR_41 || VAR_42 == VAR_1)
 return VAR_16;
      else
 {


   int VAR_46, VAR_47, VAR_48;
   enum machine_mode VAR_49;






   if (VAR_21)
     VAR_46 = (2 - VAR_38->words) & 3;
   else
     VAR_46 = VAR_38->words & 1;
   VAR_47 = VAR_38->words + VAR_46;


   if (VAR_47 >= VAR_15)
     return VAR_16;

   if (VAR_21 && VAR_29)
     return FUNC_16 (VAR_39, VAR_40, VAR_47);



   VAR_49 = VAR_39;
   VAR_48 = FUNC_14 (VAR_39, VAR_40);
   if (VAR_47 + VAR_48 > VAR_15)


     VAR_49 = VAR_9;

   return FUNC_12 (VAR_49, VAR_14 + VAR_47);
 }
    }
  else if (VAR_31 && VAR_30
    && (FUNC_3 (VAR_39)
        || (VAR_24 && (VAR_39 == VAR_8
       || VAR_39 == VAR_6))))
    return FUNC_18 (VAR_38, VAR_39, VAR_40);

  else if (VAR_42 == VAR_1)
    {
      if (VAR_26 && VAR_25
   && (VAR_39 == VAR_19 || VAR_39 == VAR_8
       || (VAR_39 == VAR_33 && !VAR_27)))
 {
   if (VAR_38->fregno + (VAR_39 == VAR_33 ? 1 : 0) <= VAR_12)
     return FUNC_12 (VAR_39, VAR_38->fregno);
   else
     return VAR_16;
 }
      else
 {
   int VAR_50 = FUNC_14 (VAR_39, VAR_40);
   int VAR_51 = VAR_38->sysv_gregno;




   if (VAR_50 == 2)
     VAR_51 += (1 - VAR_51) & 1;


   if (VAR_51 + VAR_50 - 1 > VAR_13)
     return VAR_16;

   if (VAR_21 && VAR_29)
     return FUNC_16 (VAR_39, VAR_40,
           VAR_51 - VAR_14);
   return FUNC_12 (VAR_39, VAR_51);
 }
    }
  else
    {
      int VAR_52 = FUNC_17 (VAR_39, VAR_40, VAR_38->words);

      if (FUNC_6 (VAR_38, VAR_39, VAR_40))
 {
   rtx VAR_53[VAR_15 + 1];
   rtx VAR_54;
   int VAR_55;
   bool VAR_56;
   enum machine_mode VAR_57 = VAR_39;
   unsigned long VAR_58 = (FUNC_2 (VAR_39) + 7) >> 3;

   if (VAR_38->fregno + VAR_58 > VAR_10 + 1)
     {


       FUNC_7 (VAR_38->fregno == VAR_10 && VAR_57 == VAR_33);


       VAR_57 = VAR_8;
     }



   VAR_56 = (VAR_40
    && (VAR_38->nargs_prototype <= 0
        || (VAR_7 == VAR_0
     && VAR_32
     && VAR_52 >= VAR_15)));

   if (!VAR_56 && VAR_39 == VAR_57)
     return FUNC_12 (VAR_57, VAR_38->fregno);

   VAR_55 = 0;
   if (VAR_56)
     {


       if (VAR_52 < VAR_15)
  {
    unsigned long VAR_59 = FUNC_14 (VAR_39, VAR_40);

    if (VAR_52 + VAR_59 > VAR_15
        || (VAR_21 && VAR_29))
      {


        enum machine_mode VAR_60 = VAR_21 ? VAR_20 : VAR_9;
        rtx VAR_61;
        int VAR_62 = 0;
        if (VAR_52 + VAR_59 > VAR_15)






   VAR_53[VAR_55++] = FUNC_10 (VAR_35, VAR_16,
             VAR_36);
        do
   {
     VAR_54 = FUNC_12 (VAR_60,
        VAR_14 + VAR_52);
     VAR_61 = FUNC_1 (VAR_62++ * FUNC_2 (VAR_60));
     VAR_53[VAR_55++] = FUNC_10 (VAR_35, VAR_54, VAR_61);
   }
        while (++VAR_52 < VAR_15 && --VAR_59 != 0);
      }
    else
      {

        VAR_54 = FUNC_12 (VAR_39, VAR_14 + VAR_52);
        VAR_53[VAR_55++] = FUNC_10 (VAR_35, VAR_54, VAR_36);
      }
  }
       else

  VAR_53[VAR_55++] = FUNC_10 (VAR_35, VAR_16, VAR_36);
     }


   VAR_54 = FUNC_12 (VAR_57, VAR_38->fregno);
   VAR_53[VAR_55++] = FUNC_10 (VAR_35, VAR_54, VAR_36);

   return FUNC_11 (VAR_39, FUNC_9 (VAR_55, VAR_53));
 }
      else if (VAR_52 < VAR_15)
 {
   if (VAR_21 && VAR_29)
     return FUNC_16 (VAR_39, VAR_40, VAR_52);

   if (VAR_39 == VAR_2)
     VAR_39 = VAR_17;

   return FUNC_12 (VAR_39, VAR_14 + VAR_52);
 }
      else
 return VAR_16;
    }
}
