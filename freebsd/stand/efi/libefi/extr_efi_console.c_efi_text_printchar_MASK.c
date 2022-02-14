
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int tp_col; int tp_row; } ;
typedef TYPE_3__ teken_pos_t ;
typedef size_t teken_color_t ;
struct TYPE_11__ {int ta_format; int ta_bgcolor; int ta_fgcolor; } ;
struct text_pixel {int c; TYPE_2__ a; } ;
typedef int UINTN ;
struct TYPE_14__ {int (* SetAttribute ) (TYPE_5__*,int ) ;int (* SetCursorPosition ) (TYPE_5__*,int,int) ;TYPE_1__* Mode; } ;
struct TYPE_13__ {int tp_col; int tp_row; } ;
struct TYPE_10__ {int Attribute; } ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct text_pixel* VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int,int) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 size_t FUNC_5 (int ) ;
 int* VAR_6 ;
 TYPE_4__ VAR_7 ;

__attribute__((used)) static void
FUNC_6(const teken_pos_t *VAR_8, bool VAR_9)
{
 UINTN VAR_10, VAR_11;
 struct text_pixel *VAR_12;
 teken_color_t VAR_13, VAR_14, VAR_15;

 VAR_12 = VAR_4 + VAR_8->tp_col + VAR_8->tp_row * VAR_7.tp_col;
 VAR_10 = VAR_5->Mode->Attribute;

 VAR_13 = FUNC_5(VAR_12->a.ta_fgcolor);
 VAR_14 = FUNC_5(VAR_12->a.ta_bgcolor);
 if (VAR_12->a.ta_format & VAR_2)
  VAR_13 |= VAR_0;
 if (VAR_12->a.ta_format & VAR_1)
  VAR_14 |= VAR_0;

 if (VAR_12->a.ta_format & VAR_3) {
  VAR_15 = VAR_13;
  VAR_13 = VAR_14;
  VAR_14 = VAR_15;
 }

 VAR_11 = FUNC_0(VAR_6[VAR_13],
     VAR_6[VAR_14] & 0x7);

 VAR_5->SetCursorPosition(VAR_5, VAR_8->tp_col, VAR_8->tp_row);


 if (!VAR_9 &&
     VAR_8->tp_row == VAR_7.tp_row - 1 &&
     VAR_8->tp_col == VAR_7.tp_col - 1)
  return;

 (void) VAR_5->SetAttribute(VAR_5, VAR_11);
 FUNC_1(VAR_12->c);
 (void) VAR_5->SetAttribute(VAR_5, VAR_10);
}
