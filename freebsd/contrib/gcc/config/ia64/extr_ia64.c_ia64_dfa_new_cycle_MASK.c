
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum attr_itanium_class { ____Placeholder_attr_itanium_class } attr_itanium_class ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int* VAR_9 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int* VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int FUNC_8 (int *,char*,size_t,char*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 int FUNC_11 () ;
 scalar_t__ VAR_16 ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int *) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_16 (FILE *VAR_20, int VAR_21, rtx VAR_22, int VAR_23,
      int VAR_24, int *VAR_25)
{
  int VAR_26 = VAR_2;

  FUNC_9 (VAR_22 && FUNC_1 (VAR_22));
  if ((VAR_18 && FUNC_13 (VAR_22))
      || (VAR_16
   && (FUNC_0 (VAR_16) == VAR_1
       || FUNC_0 (FUNC_4 (VAR_16)) == VAR_0
       || FUNC_7 (FUNC_4 (VAR_16)) >= 0)))
    {
      FUNC_11 ();
      if (VAR_21 && VAR_20)
 FUNC_8 (VAR_20, "//    Stop should be before %d%s\n", FUNC_2 (VAR_22),
   VAR_23 == VAR_24 ? " + cycle advance" : "");
      VAR_19 = 1;
      if (VAR_23 == VAR_24)
 {
   FUNC_15 (VAR_11, VAR_14);
   if (VAR_7)
     *VAR_25 = (VAR_16 == VAR_5
         || FUNC_0 (VAR_16) != VAR_1);
   else
     *VAR_25 = 0;
   return 1;
 }
      else if (VAR_18)
 VAR_26 = VAR_8;
      if (FUNC_0 (FUNC_4 (VAR_16)) == VAR_0
   || FUNC_7 (FUNC_4 (VAR_16)) >= 0)
 FUNC_14 (VAR_11);
      else
 {
   FUNC_12 (VAR_11, VAR_17, VAR_13);
   FUNC_15 (VAR_11, VAR_14);
   FUNC_15 (VAR_11, VAR_12);
   FUNC_15 (VAR_11, ((void*)0));
 }
    }
  else if (VAR_18)
    VAR_26 = VAR_8;
  if (VAR_26 && VAR_15 == VAR_6
      && FUNC_0 (FUNC_4 (VAR_22)) != VAR_0
      && FUNC_7 (FUNC_4 (VAR_22)) < 0)
    {
      enum attr_itanium_class VAR_27 = FUNC_10 (VAR_22);

      if (VAR_27 != VAR_3 && VAR_27 != VAR_4)
 {
   rtx VAR_28;
   int VAR_29 = -1;

   for (VAR_28 = FUNC_3 (VAR_22); VAR_28; VAR_28 = FUNC_6 (VAR_28, 1))
     if (FUNC_5 (VAR_28) == 0)
       {
  enum attr_itanium_class VAR_30;
  rtx VAR_31 = FUNC_6 (VAR_28, 0);

  VAR_30 = FUNC_10 (VAR_31);
  if ((VAR_30 == VAR_3
       || VAR_30 == VAR_4)
      && VAR_23 - VAR_10 [FUNC_2 (VAR_31)] < 4
      && (VAR_29 < 0
   || VAR_23 - VAR_10 [FUNC_2 (VAR_31)] < VAR_29))
    VAR_29 = VAR_23 - VAR_10 [FUNC_2 (VAR_31)];
       }
   if (VAR_29 >= 0)
     VAR_9 [FUNC_2 (VAR_22)] = 3 - VAR_29;
 }
    }
  return 0;
}
