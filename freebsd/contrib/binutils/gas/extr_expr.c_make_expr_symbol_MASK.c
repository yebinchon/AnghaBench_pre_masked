
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int symbolS ;
struct expr_symbol_line {struct expr_symbol_line* next; int line; int file; int * sym; } ;
struct TYPE_5__ {scalar_t__ X_op; scalar_t__ X_add_number; scalar_t__ X_unsigned; int * X_add_symbol; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_5 ;
 struct expr_symbol_line* VAR_6 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_7 ;

symbolS *
FUNC_8 (expressionS *VAR_8)
{
  expressionS VAR_9;
  symbolS *VAR_10;
  struct expr_symbol_line *VAR_11;

  if (VAR_8->X_op == VAR_3
      && VAR_8->X_add_number == 0)
    return VAR_8->X_add_symbol;

  if (VAR_8->X_op == VAR_1)
    {



      if (VAR_8->X_add_number > 0)
 FUNC_1 (FUNC_0("bignum invalid"));
      else
 FUNC_1 (FUNC_0("floating point number invalid"));
      VAR_9.X_op = VAR_2;
      VAR_9.X_add_number = 0;
      VAR_9.X_unsigned = 0;
      FUNC_3 (&VAR_9);
      VAR_8 = &VAR_9;
    }





  VAR_10 = FUNC_5 (VAR_0,
      (VAR_8->X_op == VAR_2
       ? VAR_4
       : VAR_5),
      0, &VAR_7);
  FUNC_6 (VAR_10, VAR_8);

  if (VAR_8->X_op == VAR_2)
    FUNC_4 (VAR_10);

  VAR_11 = (struct expr_symbol_line *) FUNC_7 (sizeof *VAR_11);
  VAR_11->sym = VAR_10;
  FUNC_2 (&VAR_11->file, &VAR_11->line);
  VAR_11->next = VAR_6;
  VAR_6 = VAR_11;

  return VAR_10;
}
