
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int tp_col; int tp_row; } ;
struct TYPE_7__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_9__ {TYPE_4__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_3__ term_rect_t ;
typedef int term_attr_t ;
typedef int teken_char_t ;
struct winsize {int ws_col; int ws_row; } ;
struct terminal {int tm_flags; TYPE_2__* tm_class; int tm_emulator; struct winsize tm_winsize; } ;
struct TYPE_8__ {int (* tc_fill ) (struct terminal*,TYPE_3__*,int ) ;} ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (struct terminal*) ;
 int FUNC_2 (struct terminal*) ;
 int VAR_0 ;
 int FUNC_3 (struct terminal*,TYPE_3__*,int ) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *,TYPE_4__*) ;
 int FUNC_6 (struct terminal*) ;

void
FUNC_7(struct terminal *VAR_1, const struct winsize *VAR_2,
    int VAR_3, const term_attr_t *VAR_4)
{
 term_rect_t VAR_5;

 VAR_1->tm_winsize = *VAR_2;

 VAR_5.tr_begin.tp_row = VAR_5.tr_begin.tp_col = 0;
 VAR_5.tr_end.tp_row = VAR_2->ws_row;
 VAR_5.tr_end.tp_col = VAR_2->ws_col;

 FUNC_1(VAR_1);
 if (VAR_3 == 0)
  FUNC_5(&VAR_1->tm_emulator, &VAR_5.tr_end);
 else
  FUNC_4(&VAR_1->tm_emulator, &VAR_5.tr_end);
 FUNC_2(VAR_1);

 if ((VAR_3 != 0) && !(VAR_1->tm_flags & VAR_0))
  VAR_1->tm_class->tc_fill(VAR_1, &VAR_5,
      FUNC_0((teken_char_t)' ', VAR_4));

 FUNC_6(VAR_1);
}
