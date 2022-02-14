
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int unit; int flags; int keyboard; int adapter; int mouse_char; int cursor_char; } ;
typedef TYPE_1__ sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

sc_softc_t *
FUNC_0(int VAR_4, int VAR_5)
{
 sc_softc_t *VAR_6;

 if (VAR_4 < 0)
  return (((void*)0));
 VAR_6 = &VAR_3[VAR_4];
 VAR_6->unit = VAR_4;
 if ((VAR_6->flags & VAR_1) == 0) {
  VAR_6->keyboard = -1;
  VAR_6->adapter = -1;
  VAR_6->cursor_char = VAR_0;
  VAR_6->mouse_char = VAR_2;
 }
 return (VAR_6);
}
