
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int teken_unit_t ;
struct TYPE_8__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_7__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_9__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_3__ teken_rect_t ;
struct TYPE_10__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
typedef TYPE_4__ teken_pos_t ;
typedef int teken_char_t ;
typedef int teken_attr_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (void*,TYPE_4__*,int ,int const*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, const teken_rect_t *VAR_1, teken_char_t VAR_2,
    const teken_attr_t *VAR_3)
{
 teken_pos_t VAR_4;
 teken_unit_t VAR_5, VAR_6;

 FUNC_0(&VAR_5, &VAR_6);
 FUNC_2(VAR_5, VAR_6, 0);
 for (VAR_4.tp_row = VAR_1->tr_begin.tp_row; VAR_4.tp_row < VAR_1->tr_end.tp_row;
     VAR_4.tp_row++)
  for (VAR_4.tp_col = VAR_1->tr_begin.tp_col;
      VAR_4.tp_col < VAR_1->tr_end.tp_col; VAR_4.tp_col++)
   FUNC_1(VAR_0, &VAR_4, VAR_2, VAR_3);
 FUNC_2(VAR_5, VAR_6, 1);
}
