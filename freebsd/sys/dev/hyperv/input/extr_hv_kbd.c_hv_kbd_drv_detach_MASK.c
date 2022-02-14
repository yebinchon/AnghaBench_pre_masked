
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sc_kbd; } ;
typedef TYPE_1__ hv_kbd_sc ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(device_t VAR_0)
{
 int VAR_1 = 0;
 hv_kbd_sc *VAR_2 = FUNC_1(VAR_0);
 FUNC_3(&VAR_2->sc_kbd);
 if (FUNC_0(&VAR_2->sc_kbd)) {
  VAR_1 = FUNC_5(&VAR_2->sc_kbd);
  if (VAR_1) {
   FUNC_2(VAR_0, "WARNING: kbd_unregister() "
       "returned non-zero! (ignored)\n");
  }
 }



 return (VAR_1);
}
