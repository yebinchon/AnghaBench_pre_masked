
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef size_t u_char ;
struct TYPE_10__ {int tp_row; int tp_col; } ;
typedef TYPE_2__ teken_pos_t ;
typedef size_t teken_char_t ;
struct TYPE_11__ {int ta_format; } ;
typedef TYPE_3__ teken_attr_t ;
struct TYPE_12__ {int xsize; int ysize; int vtb; TYPE_1__* sc; } ;
typedef TYPE_4__ scr_stat ;
struct TYPE_9__ {size_t* scr_map; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,size_t,int) ;
 int FUNC_4 (size_t*,int*) ;
 int FUNC_5 (TYPE_3__ const*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, const teken_pos_t *VAR_2, teken_char_t VAR_3,
    const teken_attr_t *VAR_4)
{
 scr_stat *VAR_5 = VAR_1;
 u_char *VAR_6;
 u_char VAR_7;
 vm_offset_t VAR_8;
 int VAR_9, VAR_10;






 VAR_10 = FUNC_5(VAR_4) << 8;
 if (VAR_4->ta_format & VAR_0)
  VAR_3 = ' ';



 VAR_7 = VAR_3;

 VAR_6 = VAR_5->sc->scr_map;

 VAR_9 = VAR_2->tp_row * VAR_5->xsize + VAR_2->tp_col;
 VAR_8 = FUNC_2(&VAR_5->vtb, VAR_9);
 FUNC_3(&VAR_5->vtb, VAR_8, VAR_6[VAR_7], VAR_10);

 FUNC_1(VAR_5, VAR_9);




 FUNC_1(VAR_5, FUNC_0(VAR_9 + 1, VAR_5->xsize * VAR_5->ysize - 1));
}
