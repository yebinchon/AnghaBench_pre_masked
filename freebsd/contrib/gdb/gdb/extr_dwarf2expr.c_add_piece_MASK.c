
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_piece {int in_reg; int size; int value; } ;
struct dwarf_expr_context {int num_pieces; struct dwarf_expr_piece* pieces; } ;
typedef int ULONGEST ;
typedef int CORE_ADDR ;


 struct dwarf_expr_piece* FUNC_0 (int) ;
 struct dwarf_expr_piece* FUNC_1 (struct dwarf_expr_piece*,int) ;

__attribute__((used)) static void
FUNC_2 (struct dwarf_expr_context *VAR_0,
           int VAR_1, CORE_ADDR VAR_2, ULONGEST VAR_3)
{
  struct dwarf_expr_piece *VAR_4;

  VAR_0->num_pieces++;

  if (VAR_0->pieces)
    VAR_0->pieces = FUNC_1 (VAR_0->pieces,
                            (VAR_0->num_pieces
                             * sizeof (struct dwarf_expr_piece)));
  else
    VAR_0->pieces = FUNC_0 (VAR_0->num_pieces
                           * sizeof (struct dwarf_expr_piece));

  VAR_4 = &VAR_0->pieces[VAR_0->num_pieces - 1];
  VAR_4->in_reg = VAR_1;
  VAR_4->value = VAR_2;
  VAR_4->size = VAR_3;
}
