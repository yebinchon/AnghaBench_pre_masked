
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_13__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_15__ {TYPE_3__ tr_end; TYPE_2__ tr_begin; } ;
typedef TYPE_4__ teken_rect_t ;
struct TYPE_16__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
typedef TYPE_5__ teken_pos_t ;
typedef int teken_char_t ;
typedef int teken_attr_t ;
typedef int UINTN ;
struct TYPE_17__ {int (* EnableCursor ) (TYPE_6__*,int ) ;TYPE_1__* Mode; int (* QueryMode ) (TYPE_6__*,int ,int *,int *) ;} ;
struct TYPE_12__ {int Mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int FUNC_0 (void*,TYPE_5__*,int ,int const*) ;
 int FUNC_1 (TYPE_6__*,int ,int *,int *) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_3, const teken_rect_t *VAR_4, teken_char_t VAR_5,
    const teken_attr_t *VAR_6)
{
 teken_pos_t VAR_7;
 UINTN VAR_8, VAR_9;

 (void) VAR_2->QueryMode(VAR_2, VAR_2->Mode->Mode, &VAR_9, &VAR_8);

 VAR_2->EnableCursor(VAR_2, VAR_0);
 for (VAR_7.tp_row = VAR_4->tr_begin.tp_row; VAR_7.tp_row < VAR_4->tr_end.tp_row;
     VAR_7.tp_row++)
  for (VAR_7.tp_col = VAR_4->tr_begin.tp_col;
      VAR_7.tp_col < VAR_4->tr_end.tp_col; VAR_7.tp_col++)
   FUNC_0(VAR_3, &VAR_7, VAR_5, VAR_6);
 VAR_2->EnableCursor(VAR_2, VAR_1);
}
