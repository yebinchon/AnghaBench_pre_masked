
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int valueT ;
typedef int symbolS ;
typedef int subsegT ;
typedef int segT ;
typedef int fragS ;
struct TYPE_6__ {scalar_t__ X_add_number; int * X_add_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;
struct TYPE_8__ {char* next_free; } ;
struct TYPE_7__ {int hadone; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int ,int,char*,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int,...) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (int*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int) ;
 char* FUNC_11 (int) ;
 int * VAR_5 ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;
 char FUNC_15 (long*) ;
 unsigned int FUNC_16 (char*,char*) ;
 int FUNC_17 () ;
 char* VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_18 (char*) ;
 int FUNC_19 (unsigned int) ;
 int FUNC_20 () ;
 int FUNC_21 (char*,int ,int) ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_22 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_23 (int ) ;
 int VAR_11 ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (char*,int ) ;
 int FUNC_26 (int ,int ) ;
 int * FUNC_27 (int ,int ,int *) ;
 char* FUNC_28 (char*) ;

__attribute__((used)) static void
FUNC_29 (int VAR_12, char *VAR_13, char *VAR_14)
{
  long VAR_15;
  char *VAR_16, *VAR_17;
  int VAR_18;
  int VAR_19;
  int VAR_20;
  if (VAR_12 != 's')
    {
      VAR_16 = "";
      VAR_17 = 0;
    }
  else
    {
      int VAR_21;

      VAR_16 = FUNC_8 (&VAR_21);



      VAR_17 = VAR_8.next_free;
      FUNC_2 ();
      if (*VAR_6 == ',')
 VAR_6++;
      else
 {
   FUNC_5 (FUNC_3(".stab%c: missing comma"), VAR_12);
   FUNC_17 ();
   return;
 }
    }

  if (FUNC_15 (&VAR_15) != ',')
    {
      FUNC_5 (FUNC_3(".stab%c: missing comma"), VAR_12);
      FUNC_17 ();
      return;
    }
  VAR_18 = VAR_15;

  if (FUNC_15 (&VAR_15) != ',')
    {
      FUNC_5 (FUNC_3(".stab%c: missing comma"), VAR_12);
      FUNC_17 ();
      return;
    }
  VAR_19 = VAR_15;

  VAR_20 = FUNC_14 ();

  if ((VAR_20 > 0xffff) || (VAR_20 < -0x8000))



    FUNC_5 (FUNC_3(".stab%c: description field '%x' too big, try a different debug format"),
      VAR_12, VAR_20);

  if (VAR_12 == 's' || VAR_12 == 'n')
    {
      if (*VAR_6 != ',')
 {
   FUNC_5 (FUNC_3(".stab%c: missing comma"), VAR_12);
   FUNC_17 ();
   return;
 }
      VAR_6++;
      FUNC_2 ();
    }
  if (VAR_7)
    {
      switch (VAR_18)
 {
 case 130:
   FUNC_19 ((unsigned int) VAR_20);
   break;
 case 129:
 case 128:
   FUNC_18 (VAR_16);
   break;
 }
    }






  if (VAR_4)


    {
      segT VAR_22 = VAR_9;
      subsegT VAR_23 = VAR_10;
      fragS *VAR_24 = VAR_5;
      valueT VAR_25;
      segT VAR_26;
      unsigned int VAR_27;
      char *VAR_28;

      static segT VAR_29;
      static char *VAR_30;

      VAR_25 = FUNC_12 ();





      if (VAR_30 && !FUNC_24 (VAR_30, VAR_13))
 {
   VAR_26 = VAR_29;
   FUNC_26 (VAR_26, 0);
 }
      else
 {
   VAR_26 = FUNC_25 (VAR_13, 0);
   if (VAR_30)
     FUNC_13 (VAR_30);
   VAR_30 = FUNC_28 (VAR_13);
   VAR_29 = VAR_26;
 }

      if (! FUNC_23 (VAR_26)->hadone)
 {
   FUNC_6 (VAR_11, VAR_26,
     VAR_2 | VAR_3 | VAR_1);



   FUNC_23 (VAR_26)->hadone = 1;
 }

      VAR_27 = FUNC_16 (VAR_16, VAR_14);
      if (VAR_12 == 's')
 {

   if (VAR_17 == VAR_8.next_free)
     FUNC_22 (&VAR_8, VAR_16);
 }



      VAR_28 = FUNC_11 (8);
      FUNC_21 (VAR_28, (valueT) VAR_27, 4);
      FUNC_21 (VAR_28 + 4, (valueT) VAR_18, 1);
      FUNC_21 (VAR_28 + 5, (valueT) VAR_19, 1);
      FUNC_21 (VAR_28 + 6, (valueT) VAR_20, 2);

      if (VAR_12 == 's' || VAR_12 == 'n')
 {

   FUNC_7 (4);
   VAR_6--;
 }
      else
 {
   symbolS *VAR_31;
   expressionS VAR_32;


   VAR_31 = FUNC_27 (VAR_22, VAR_25, VAR_24);

   VAR_32.X_op = VAR_0;
   VAR_32.X_add_symbol = VAR_31;
   VAR_32.X_add_number = 0;

   FUNC_10 (&VAR_32, 4);
 }





      FUNC_26 (VAR_22, VAR_23);
    }
  else
    {



      FUNC_4 ();

    }

  FUNC_9 ();
}
