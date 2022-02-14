
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct line_seg {int * text_end; int seg; int * text_start; struct line_seg* next; } ;
typedef int segT ;
typedef int fragS ;
struct TYPE_3__ {scalar_t__ X_add_number; int * X_op_symbol; int * X_add_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;
typedef int addressT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct line_seg* VAR_2 ;
 int FUNC_1 (TYPE_1__*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (char*,int ,unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 unsigned int VAR_3 ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_15 (segT VAR_4, segT VAR_5)
{
  unsigned int VAR_6 = VAR_3;
  addressT VAR_7, VAR_8;
  struct line_seg *VAR_9;
  expressionS VAR_10;
  char *VAR_11;

  VAR_7 = 4 + 2 + 4 + 1 + 1;

  VAR_8 = 2 * VAR_6 - (VAR_7 & (2 * VAR_6 - 1));
  if (VAR_8 == 2 * VAR_6)
    VAR_8 = 0;
  VAR_7 += VAR_8;

  for (VAR_9 = VAR_2; VAR_9; VAR_9 = VAR_9->next)
    VAR_7 += 2 * VAR_6;

  VAR_7 += 2 * VAR_6;

  FUNC_13 (VAR_4, 0);


  FUNC_10 (VAR_7 - 4);


  FUNC_11 (2);



  FUNC_0 (FUNC_12 (VAR_5), 4);


  FUNC_9 (VAR_6);


  FUNC_9 (0);


  if (VAR_8)
    FUNC_4 (FUNC_2 (2 * VAR_6) - 1, 0, 0);

  for (VAR_9 = VAR_2; VAR_9; VAR_9 = VAR_9->next)
    {
      fragS *VAR_12;
      symbolS *VAR_13, *VAR_14;

      VAR_12 = FUNC_3 (VAR_9->seg);
      VAR_13 = FUNC_14 (VAR_9->seg, 0, VAR_12);
      VAR_9->text_start = VAR_13;

      VAR_12 = FUNC_7 (VAR_9->seg);
      VAR_14 = FUNC_14 (VAR_9->seg, FUNC_6 (VAR_12, VAR_9->seg), VAR_12);
      VAR_9->text_end = VAR_14;

      VAR_10.X_op = VAR_1;
      VAR_10.X_add_symbol = VAR_13;
      VAR_10.X_add_number = 0;
      FUNC_1 (&VAR_10, VAR_6);

      VAR_10.X_op = VAR_0;
      VAR_10.X_add_symbol = VAR_14;
      VAR_10.X_op_symbol = VAR_13;
      VAR_10.X_add_number = 0;
      FUNC_1 (&VAR_10, VAR_6);
    }

  VAR_11 = FUNC_5 (2 * VAR_6);
  FUNC_8 (VAR_11, 0, VAR_6);
  FUNC_8 (VAR_11 + VAR_6, 0, VAR_6);
}
