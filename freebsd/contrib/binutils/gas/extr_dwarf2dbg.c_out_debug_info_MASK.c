
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
typedef int segT ;
struct TYPE_5__ {int X_add_number; int * X_add_symbol; void* X_op; int * X_op_symbol; } ;
typedef TYPE_1__ expressionS ;
typedef enum dwarf2_format { ____Placeholder_dwarf2_format } dwarf2_format ;
struct TYPE_7__ {int * text_end; int * text_start; int * next; } ;
struct TYPE_6__ {int dir; char* filename; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_2 (int ,int) ;
 char* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 TYPE_4__* VAR_4 ;
 int FUNC_5 (int ) ;
 char** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,int) ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 char* FUNC_7 (int) ;
 char* FUNC_8 () ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int ) ;
 int VAR_11 ;
 int FUNC_15 (char*,char*,char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;
 int * FUNC_19 () ;
 int * FUNC_20 () ;

__attribute__((used)) static void
FUNC_21 (segT VAR_12, segT VAR_13, segT VAR_14, segT VAR_15)
{
  char VAR_16[128];
  char *VAR_17;
  expressionS VAR_18;
  symbolS *VAR_19;
  symbolS *VAR_20;
  char *VAR_21;
  int VAR_22;
  enum dwarf2_format VAR_23;
  int VAR_24;

  FUNC_17 (VAR_12, 0);

  VAR_19 = FUNC_20 ();
  VAR_20 = FUNC_19 ();


  VAR_18.X_op = VAR_1;
  VAR_18.X_add_symbol = VAR_20;
  VAR_18.X_op_symbol = VAR_19;

  VAR_23 = FUNC_0 ();
  if (VAR_23 == VAR_6)
    {
      VAR_18.X_add_number = -4;
      FUNC_6 (&VAR_18, 4);
      VAR_24 = 4;
    }
  else if (VAR_23 == VAR_7)
    {
      VAR_18.X_add_number = -12;
      FUNC_11 (-1);
      FUNC_6 (&VAR_18, 8);
      VAR_24 = 8;
    }
  else if (VAR_23 == VAR_8)
    {
      VAR_18.X_add_number = -8;
      FUNC_6 (&VAR_18, 8);
      VAR_24 = 8;
    }
  else
    {
      FUNC_5 (FUNC_3("internal error: unknown dwarf2 format"));
    }


  FUNC_12 (2);


  FUNC_2 (FUNC_14 (VAR_13), VAR_24);


  FUNC_10 (VAR_11);


  FUNC_13 (1);



  FUNC_2 (FUNC_14 (VAR_14), 4);


  if (VAR_4->next == ((void*)0))
    {

      VAR_18.X_op = VAR_2;
      VAR_18.X_add_symbol = VAR_4->text_start;
      VAR_18.X_add_number = 0;
      FUNC_6 (&VAR_18, VAR_11);


      VAR_18.X_op = VAR_2;
      VAR_18.X_add_symbol = VAR_4->text_end;
      VAR_18.X_add_number = 0;
      FUNC_6 (&VAR_18, VAR_11);
    }
  else
    {


      FUNC_2 (FUNC_14 (VAR_15), VAR_24);
    }





  if (!VAR_9 || VAR_10 < 1)
    FUNC_4 ();
  if (VAR_9[1].dir)
    {
      VAR_22 = FUNC_16 (VAR_5[VAR_9[1].dir]);
      VAR_21 = FUNC_7 (VAR_22 + 1);
      FUNC_9 (VAR_21, VAR_5[VAR_9[1].dir], VAR_22);
      FUNC_1 (VAR_21, VAR_22);
    }
  VAR_22 = FUNC_16 (VAR_9[1].filename) + 1;
  VAR_21 = FUNC_7 (VAR_22);
  FUNC_9 (VAR_21, VAR_9[1].filename, VAR_22);


  VAR_17 = FUNC_8 ();
  VAR_22 = FUNC_16 (VAR_17) + 1;
  VAR_21 = FUNC_7 (VAR_22);
  FUNC_9 (VAR_21, VAR_17, VAR_22);


  FUNC_15 (VAR_16, "GNU AS %s", VAR_3);
  VAR_22 = FUNC_16 (VAR_16) + 1;
  VAR_21 = FUNC_7 (VAR_22);
  FUNC_9 (VAR_21, VAR_16, VAR_22);



  FUNC_12 (VAR_0);

  FUNC_18 (VAR_20);
}
