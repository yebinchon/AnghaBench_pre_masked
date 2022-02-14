
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int unit; int flags; int keyboard; int adapter; int mouse_char; int cursor_char; } ;
typedef TYPE_1__ sc_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

sc_softc_t
*FUNC_2(int VAR_6, int VAR_7)
{
 sc_softc_t *VAR_8;

 if (VAR_6 < 0)
  return (((void*)0));
 if ((VAR_7 & VAR_2) != 0) {

  VAR_8 = &VAR_4;
 } else {
         VAR_8 = FUNC_1(FUNC_0(VAR_5, VAR_6));
  if (VAR_8 == ((void*)0))
   return (((void*)0));
 }
 VAR_8->unit = VAR_6;
 if ((VAR_8->flags & VAR_1) == 0) {
  VAR_8->keyboard = -1;
  VAR_8->adapter = -1;
  VAR_8->cursor_char = VAR_0;
  VAR_8->mouse_char = VAR_3;
 }
 return (VAR_8);
}
