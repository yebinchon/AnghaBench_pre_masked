
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {unsigned int tp_col; int tp_row; } ;
struct TYPE_11__ {int tp_col; unsigned int tp_row; } ;
struct TYPE_13__ {TYPE_2__ tr_begin; TYPE_1__ tr_end; } ;
typedef TYPE_3__ teken_rect_t ;
struct TYPE_14__ {int tp_row; int tp_col; } ;
typedef TYPE_4__ teken_pos_t ;
struct TYPE_15__ {int xsize; int vtb; int * history; } ;
typedef TYPE_5__ scr_stat ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int *,int,int,unsigned int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0, const teken_rect_t *VAR_1, const teken_pos_t *VAR_2)
{
 scr_stat *VAR_3 = VAR_0;
 unsigned int VAR_4;
 int VAR_5, VAR_6, VAR_7;







 if (VAR_3->history != ((void*)0) &&
     VAR_1->tr_begin.tp_col == 0 && VAR_1->tr_end.tp_col == VAR_3->xsize &&
     VAR_1->tr_begin.tp_row == VAR_2->tp_row + 1) {
  FUNC_1(VAR_3, VAR_2->tp_row);
 }


 if (VAR_1->tr_begin.tp_col == 0 && VAR_1->tr_end.tp_col == VAR_3->xsize) {

  FUNC_3(&VAR_3->vtb, VAR_1->tr_begin.tp_row * VAR_3->xsize,
      VAR_2->tp_row * VAR_3->xsize,
      (VAR_1->tr_end.tp_row - VAR_1->tr_begin.tp_row) * VAR_3->xsize);
 } else {

  VAR_4 = VAR_1->tr_end.tp_col - VAR_1->tr_begin.tp_col;

  if (VAR_2->tp_row < VAR_1->tr_begin.tp_row) {

   VAR_5 = VAR_1->tr_begin.tp_row * VAR_3->xsize +
       VAR_1->tr_begin.tp_col;
   VAR_7 = VAR_1->tr_end.tp_row * VAR_3->xsize +
       VAR_1->tr_end.tp_col;
   VAR_6 = VAR_2->tp_row * VAR_3->xsize + VAR_2->tp_col;

   while (VAR_5 < VAR_7) {
    FUNC_3(&VAR_3->vtb, VAR_5, VAR_6, VAR_4);

    VAR_5 += VAR_3->xsize;
    VAR_6 += VAR_3->xsize;
   }
  } else {

   VAR_5 = (VAR_1->tr_end.tp_row - 1) * VAR_3->xsize +
       VAR_1->tr_begin.tp_col;
   VAR_7 = VAR_1->tr_begin.tp_row * VAR_3->xsize +
       VAR_1->tr_begin.tp_col;
   VAR_6 = (VAR_2->tp_row + VAR_1->tr_end.tp_row -
       VAR_1->tr_begin.tp_row - 1) * VAR_3->xsize + VAR_2->tp_col;

   while (VAR_5 >= VAR_7) {
    FUNC_3(&VAR_3->vtb, VAR_5, VAR_6, VAR_4);

    VAR_5 -= VAR_3->xsize;
    VAR_6 -= VAR_3->xsize;
   }
  }
 }


 FUNC_0(VAR_3,
     VAR_2->tp_row * VAR_3->xsize + VAR_2->tp_col);
 FUNC_0(VAR_3,
     (VAR_2->tp_row + VAR_1->tr_end.tp_row - VAR_1->tr_begin.tp_row - 1) *
     VAR_3->xsize +
     (VAR_2->tp_col + VAR_1->tr_end.tp_col - VAR_1->tr_begin.tp_col - 1));
 FUNC_2(VAR_3);
}
