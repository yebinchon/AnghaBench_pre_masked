
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ix86_address {int scale; int seg; scalar_t__ disp; scalar_t__ index; scalar_t__ base; } ;
typedef scalar_t__ rtx ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;



 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__* VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (scalar_t__,struct ix86_address*) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int *,scalar_t__,int ) ;
 int FUNC_13 (scalar_t__,int ,int *) ;
 int FUNC_14 (char,int *) ;

void
FUNC_15 (FILE *VAR_14, rtx VAR_15)
{
  struct ix86_address VAR_16;
  rtx VAR_17, VAR_18, VAR_19;
  int VAR_20;
  int VAR_21 = FUNC_9 (VAR_15, &VAR_16);

  FUNC_6 (VAR_21);

  VAR_17 = VAR_16.base;
  VAR_18 = VAR_16.index;
  VAR_19 = VAR_16.disp;
  VAR_20 = VAR_16.scale;

  switch (VAR_16.seg)
    {
    case 130:
      break;
    case 129:
    case 128:
      if (VAR_11[0] == 0)
 FUNC_14 ('%', VAR_14);
      FUNC_5 ((VAR_16.seg == 129 ? "fs:" : "gs:"), VAR_14);
      break;
    default:
      FUNC_7 ();
    }

  if (!VAR_17 && !VAR_18)
    {


      if (FUNC_0 (VAR_19) == VAR_4)
 {
   if (VAR_2 == VAR_1 && VAR_16.seg == 130)
     {
       if (VAR_11[0] == 0)
  FUNC_14 ('%', VAR_14);
       FUNC_5 ("ds:", VAR_14);
     }
   FUNC_4 (VAR_14, VAR_5, FUNC_1 (VAR_19));
 }
      else if (VAR_13)
 FUNC_12 (VAR_14, VAR_19, 0);
      else
 FUNC_10 (VAR_14, VAR_19);


      if (VAR_10)
 {
   if (FUNC_0 (VAR_19) == VAR_3
       && FUNC_0 (FUNC_3 (VAR_19, 0)) == VAR_8
       && FUNC_0 (FUNC_3 (FUNC_3 (VAR_19, 0), 1)) == VAR_4)
     VAR_19 = FUNC_3 (FUNC_3 (VAR_19, 0), 0);
   if (FUNC_0 (VAR_19) == VAR_6
       || (FUNC_0 (VAR_19) == VAR_9
    && FUNC_2 (VAR_19) == 0))
     FUNC_5 ("(%rip)", VAR_14);
 }
    }
  else
    {
      if (VAR_2 == VAR_0)
 {
   if (VAR_19)
     {
       if (VAR_13)
  FUNC_12 (VAR_14, VAR_19, 0);
       else if (FUNC_0 (VAR_19) == VAR_6)
  FUNC_11 (VAR_19);
       else
  FUNC_10 (VAR_14, VAR_19);
     }

   FUNC_14 ('(', VAR_14);
   if (VAR_17)
     FUNC_13 (VAR_17, 0, VAR_14);
   if (VAR_18)
     {
       FUNC_14 (',', VAR_14);
       FUNC_13 (VAR_18, 0, VAR_14);
       if (VAR_20 != 1)
  FUNC_4 (VAR_14, ",%d", VAR_20);
     }
   FUNC_14 (')', VAR_14);
 }
      else
 {
   rtx VAR_22 = VAR_7;

   if (VAR_19)
     {

       if (FUNC_0 (VAR_19) == VAR_3
    && FUNC_0 (FUNC_3 (VAR_19, 0)) == VAR_8
    && FUNC_0 (FUNC_3 (FUNC_3 (VAR_19, 0), 1)) == VAR_4)
  {
    VAR_22 = FUNC_3 (FUNC_3 (VAR_19, 0), 1);
    VAR_19 = FUNC_8 (VAR_12,
     FUNC_3 (FUNC_3 (VAR_19, 0), 0));
  }

       if (VAR_13)
  FUNC_12 (VAR_14, VAR_19, 0);
       else if (FUNC_0 (VAR_19) == VAR_6)
  FUNC_11 (VAR_19);
       else if (FUNC_0 (VAR_19) == VAR_4)
  VAR_22 = VAR_19;
       else
  FUNC_10 (VAR_14, VAR_19);
     }

   FUNC_14 ('[', VAR_14);
   if (VAR_17)
     {
       FUNC_13 (VAR_17, 0, VAR_14);
       if (VAR_22)
  {
    if (FUNC_1 (VAR_22) >= 0)
      FUNC_14 ('+', VAR_14);
    FUNC_4 (VAR_14, VAR_5, FUNC_1 (VAR_22));
  }
     }
   else if (VAR_22)
     FUNC_4 (VAR_14, VAR_5, FUNC_1 (VAR_22));
   else
     FUNC_14 ('0', VAR_14);

   if (VAR_18)
     {
       FUNC_14 ('+', VAR_14);
       FUNC_13 (VAR_18, 0, VAR_14);
       if (VAR_20 != 1)
  FUNC_4 (VAR_14, "*%d", VAR_20);
     }
   FUNC_14 (']', VAR_14);
 }
    }
}
