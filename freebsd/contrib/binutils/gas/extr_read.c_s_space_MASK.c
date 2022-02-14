
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int valueT ;
typedef int symbolS ;
typedef int relax_substateT ;
typedef scalar_t__ offsetT ;
struct TYPE_7__ {scalar_t__ X_op; int X_add_number; int * X_add_symbol; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 long FUNC_1 (int *) ;
 int FUNC_2 (int *,long) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char*,int ,int ) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long FUNC_10 () ;
 char* FUNC_11 (int ,int,int,int ,int *,scalar_t__,char*) ;
 char* VAR_7 ;
 int FUNC_12 (int) ;
 int * VAR_8 ;
 int * FUNC_13 (TYPE_1__*) ;
 int FUNC_14 () ;
 int FUNC_15 (char*,char) ;
 char* FUNC_16 (char*) ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_17 (TYPE_1__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_18 (int ,int ) ;
 TYPE_1__* FUNC_19 (int *) ;
 int FUNC_20 (int *,int ) ;
 int VAR_15 ;

void
FUNC_21 (int VAR_16)
{
  expressionS VAR_17;
  expressionS VAR_18;
  char *VAR_19 = 0;
  char *VAR_20 = ((void*)0);
  char VAR_21 = 0;
  int VAR_22;





  if (VAR_5)
    VAR_20 = FUNC_16 (&VAR_21);



  if (VAR_4 && VAR_16 > 1)
    {
      if (VAR_12 == VAR_3)
 {
   VAR_2 += VAR_2 & 1;
   if (VAR_8 != ((void*)0))
     FUNC_2 (VAR_8, VAR_2);
 }
      else if (VAR_9 != ((void*)0))
 {
   valueT VAR_23;

   VAR_23 = FUNC_1 (VAR_9);
   if ((VAR_23 & 1) != 0)
     {
       FUNC_2 (VAR_9, VAR_23 + 1);
       if (VAR_8 != ((void*)0))
  {
    expressionS *VAR_24;

    VAR_24 = FUNC_19 (VAR_8);
    FUNC_12 (VAR_24->X_op == VAR_1);
    FUNC_12 (VAR_24->X_add_symbol == VAR_9);
    VAR_24->X_add_number += 1;
  }
     }
 }
      else
 {
   FUNC_7 (1, (char *) ((void*)0), 0, 0);
   if (VAR_8 != ((void*)0))
     {
       FUNC_20 (VAR_8, VAR_6);
       FUNC_2 (VAR_8, FUNC_10 ());
     }
 }
    }

  VAR_22 = VAR_16;

  FUNC_9 (&VAR_17);

  FUNC_0 ();
  if (*VAR_7 == ',')
    {
      ++VAR_7;
      FUNC_9 (&VAR_18);
    }
  else
    {
      VAR_18.X_op = VAR_0;
      VAR_18.X_add_number = 0;
    }

  if (VAR_18.X_op != VAR_0
      || VAR_18.X_add_number < - 0x80
      || VAR_18.X_add_number > 0xff
      || (VAR_16 != 0 && VAR_16 != 1 && VAR_18.X_add_number != 0))
    {
      FUNC_17 (&VAR_17);
      if (VAR_17.X_op != VAR_0)
 FUNC_4 (FUNC_3("unsupported variable size or fill value"));
      else
 {
   offsetT VAR_25;

   if (VAR_16 == 0)
     VAR_16 = 1;
   VAR_22 = VAR_16 * VAR_17.X_add_number;
   for (VAR_25 = 0; VAR_25 < VAR_17.X_add_number; VAR_25++)
     FUNC_8 (&VAR_18, VAR_16);
 }
    }
  else
    {
      if (VAR_12 == VAR_3 || VAR_9 != ((void*)0))
 FUNC_17 (&VAR_17);

      if (VAR_17.X_op == VAR_0)
 {
   long VAR_26;

   VAR_26 = VAR_17.X_add_number;
   if (VAR_16)
     VAR_26 *= VAR_16;
   VAR_22 = VAR_26;
   if (VAR_26 <= 0)
     {
       if (!VAR_5)
  FUNC_5 (FUNC_3(".space repeat count is zero, ignored"));
       else if (VAR_26 < 0)
  FUNC_5 (FUNC_3(".space repeat count is negative, ignored"));
       goto getout;
     }


   if (VAR_12 == VAR_3)
     {
       VAR_2 += VAR_26;
       goto getout;
     }




   if (VAR_9 != ((void*)0))
     {
       FUNC_2 (VAR_9,
      FUNC_1 (VAR_9) + VAR_26);
       goto getout;
     }

   if (!VAR_11)
     VAR_19 = FUNC_11 (VAR_13, 1, 1, (relax_substateT) 0, (symbolS *) 0,
     (offsetT) VAR_26, (char *) 0);
 }
      else
 {
   if (VAR_12 == VAR_3)
     {
       FUNC_4 (FUNC_3("space allocation too complex in absolute section"));
       FUNC_18 (VAR_15, 0);
     }

   if (VAR_9 != ((void*)0))
     {
       FUNC_4 (FUNC_3("space allocation too complex in common section"));
       VAR_9 = ((void*)0);
     }

   if (!VAR_11)
     VAR_19 = FUNC_11 (VAR_14, 1, 1, (relax_substateT) 0,
     FUNC_13 (&VAR_17), (offsetT) 0, (char *) 0);
 }

      if (VAR_19)
 *VAR_19 = VAR_18.X_add_number;
    }

 getout:




  if (VAR_5 && (VAR_22 & 1) != 0)
    VAR_10 = 1;

  FUNC_6 ();

  if (VAR_5)
    FUNC_15 (VAR_20, VAR_21);
}
