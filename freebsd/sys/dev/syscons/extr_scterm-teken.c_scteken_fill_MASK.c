
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u_char ;
struct TYPE_11__ {int tp_col; unsigned int tp_row; } ;
struct TYPE_10__ {unsigned int tp_col; int tp_row; } ;
struct TYPE_12__ {TYPE_3__ tr_end; TYPE_2__ tr_begin; } ;
typedef TYPE_4__ teken_rect_t ;
typedef size_t teken_char_t ;
typedef int teken_attr_t ;
struct TYPE_13__ {int xsize; int vtb; TYPE_1__* sc; } ;
typedef TYPE_5__ scr_stat ;
struct TYPE_9__ {size_t* scr_map; } ;


 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,int,unsigned int,size_t,int) ;
 int FUNC_3 (size_t*,int*) ;
 int FUNC_4 (int const*) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, const teken_rect_t *VAR_1, teken_char_t VAR_2,
    const teken_attr_t *VAR_3)
{
 scr_stat *VAR_4 = VAR_0;
 u_char *VAR_5;
 u_char VAR_6;
 unsigned int VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_4(VAR_3) << 8;



 VAR_6 = VAR_2;

 VAR_5 = VAR_4->sc->scr_map;

 if (VAR_1->tr_begin.tp_col == 0 && VAR_1->tr_end.tp_col == VAR_4->xsize) {

  FUNC_2(&VAR_4->vtb, VAR_1->tr_begin.tp_row * VAR_4->xsize,
      (VAR_1->tr_end.tp_row - VAR_1->tr_begin.tp_row) * VAR_4->xsize,
      VAR_5[VAR_6], VAR_8);
 } else {

  VAR_7 = VAR_1->tr_end.tp_col - VAR_1->tr_begin.tp_col;

  for (VAR_9 = VAR_1->tr_begin.tp_row; VAR_9 < VAR_1->tr_end.tp_row; VAR_9++) {
   FUNC_2(&VAR_4->vtb, VAR_1->tr_begin.tp_row *
       VAR_4->xsize + VAR_1->tr_begin.tp_col,
       VAR_7, VAR_5[VAR_6], VAR_8);
  }
 }


 FUNC_0(VAR_4,
     VAR_1->tr_begin.tp_row * VAR_4->xsize + VAR_1->tr_begin.tp_col);
 FUNC_0(VAR_4,
     (VAR_1->tr_end.tp_row - 1) * VAR_4->xsize + (VAR_1->tr_end.tp_col - 1));
 FUNC_1(VAR_4);
}
