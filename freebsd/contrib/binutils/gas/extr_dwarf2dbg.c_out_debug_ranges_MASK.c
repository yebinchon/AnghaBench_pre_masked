
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int symbolS ;
struct line_seg {int * text_end; int seg; int * text_start; struct line_seg* next; } ;
typedef int segT ;
typedef int fragS ;
struct TYPE_3__ {scalar_t__ X_add_number; int * X_add_symbol; void* X_op; } ;
typedef TYPE_1__ expressionS ;


 void* VAR_0 ;
 struct line_seg* VAR_1 ;
 int FUNC_0 (TYPE_1__*,unsigned int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 unsigned int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_7 (segT VAR_3)
{
  unsigned int VAR_4 = VAR_2;
  struct line_seg *VAR_5;
  expressionS VAR_6;
  unsigned int VAR_7;

  FUNC_5 (VAR_3, 0);


  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    FUNC_4 (0xff);
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    FUNC_4 (0);


  for (VAR_5 = VAR_1; VAR_5; VAR_5 = VAR_5->next)
    {
      fragS *VAR_8;
      symbolS *VAR_9, *VAR_10;

      VAR_8 = FUNC_1 (VAR_5->seg);
      VAR_9 = FUNC_6 (VAR_5->seg, 0, VAR_8);
      VAR_5->text_start = VAR_9;

      VAR_8 = FUNC_3 (VAR_5->seg);
      VAR_10 = FUNC_6 (VAR_5->seg, FUNC_2 (VAR_8, VAR_5->seg), VAR_8);
      VAR_5->text_end = VAR_10;

      VAR_6.X_op = VAR_0;
      VAR_6.X_add_symbol = VAR_9;
      VAR_6.X_add_number = 0;
      FUNC_0 (&VAR_6, VAR_4);

      VAR_6.X_op = VAR_0;
      VAR_6.X_add_symbol = VAR_10;
      VAR_6.X_add_number = 0;
      FUNC_0 (&VAR_6, VAR_4);
    }


  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    FUNC_4 (0);
  for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
    FUNC_4 (0);
}
