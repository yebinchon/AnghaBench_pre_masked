
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
struct TYPE_8__ {int sc_flags; } ;
typedef TYPE_2__ hv_kbd_sc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_4(keyboard_t *VAR_3)
{
 FUNC_0();
 if (!FUNC_1(VAR_3))
  return (VAR_0);

 hv_kbd_sc *VAR_4 = VAR_3->kb_data;
 if (VAR_4->sc_flags & VAR_1)
  FUNC_3(VAR_4, 0);
 if (FUNC_2(VAR_4)) {
  return (VAR_2);
 }
 return (VAR_0);
}
