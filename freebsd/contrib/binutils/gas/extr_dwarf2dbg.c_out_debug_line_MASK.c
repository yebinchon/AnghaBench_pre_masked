
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int symbolS ;
struct line_seg {TYPE_1__* head; int seg; struct line_seg* next; } ;
typedef int segT ;
struct TYPE_5__ {int X_add_number; int * X_op_symbol; int * X_add_symbol; void* X_op; } ;
typedef TYPE_2__ expressionS ;
typedef enum dwarf2_format { ____Placeholder_dwarf2_format } dwarf2_format ;
struct TYPE_4__ {int head; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_1 (char*) ;
 struct line_seg* VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 () ;
 int * FUNC_12 () ;

__attribute__((used)) static void
FUNC_13 (segT VAR_10)
{
  expressionS VAR_11;
  symbolS *VAR_12;
  symbolS *VAR_13;
  symbolS *VAR_14;
  struct line_seg *VAR_15;
  enum dwarf2_format VAR_16;
  int VAR_17;
  int VAR_18;

  FUNC_9 (VAR_10, 0);

  VAR_12 = FUNC_12 ();
  VAR_13 = FUNC_11 ();
  VAR_14 = FUNC_11 ();


  VAR_11.X_op = VAR_5;
  VAR_11.X_add_symbol = VAR_14;
  VAR_11.X_op_symbol = VAR_12;

  VAR_16 = FUNC_0 ();
  if (VAR_16 == VAR_7)
    {
      VAR_17 = VAR_18 = 4;
    }
  else if (VAR_16 == VAR_8)
    {
      VAR_17 = 12;
      VAR_18 = 8;
      FUNC_6 (-1);
    }
  else if (VAR_16 == VAR_9)
    {
      VAR_17 = VAR_18 = 8;
    }
  else
    {
      FUNC_2 (FUNC_1("internal error: unknown dwarf2 format"));
    }
  VAR_11.X_add_number = -VAR_17;
  FUNC_3 (&VAR_11, VAR_18);


  FUNC_7 (2);


  VAR_11.X_op = VAR_5;
  VAR_11.X_add_symbol = VAR_13;
  VAR_11.X_op_symbol = VAR_12;
  VAR_11.X_add_number = - (VAR_17 + 2 + VAR_18);
  FUNC_3 (&VAR_11, VAR_18);


  FUNC_4 (VAR_2);
  FUNC_4 (VAR_1);
  FUNC_4 (VAR_0);
  FUNC_4 (VAR_4);
  FUNC_4 (VAR_3);


  FUNC_4 (0);
  FUNC_4 (1);
  FUNC_4 (1);
  FUNC_4 (1);
  FUNC_4 (1);
  FUNC_4 (0);
  FUNC_4 (0);
  FUNC_4 (0);
  FUNC_4 (1);
  FUNC_4 (0);
  FUNC_4 (0);
  FUNC_4 (1);

  FUNC_5 ();

  FUNC_10 (VAR_13);


  for (VAR_15 = VAR_6; VAR_15; VAR_15 = VAR_15->next)
    FUNC_8 (VAR_15->seg, VAR_15->head->head);

  FUNC_10 (VAR_14);
}
