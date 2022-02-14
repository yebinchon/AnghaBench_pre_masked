
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* kc_arg; int * kc_func; } ;
struct TYPE_7__ {void* kb_token; TYPE_1__ kb_callback; } ;
typedef TYPE_2__ keyboard_t ;
typedef int kbd_callback_func_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

int
FUNC_4(keyboard_t *VAR_2, void *VAR_3, kbd_callback_func_t *VAR_4,
      void *VAR_5)
{
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2();
 if (!FUNC_1(VAR_2) || !FUNC_0(VAR_2)) {
  VAR_6 = VAR_0;
 } else if (VAR_2->kb_token != VAR_3) {
  VAR_6 = VAR_1;
 } else if (VAR_4 == ((void*)0)) {
  VAR_6 = VAR_0;
 } else {
  VAR_2->kb_callback.kc_func = VAR_4;
  VAR_2->kb_callback.kc_arg = VAR_5;
  VAR_6 = 0;
 }
 FUNC_3(VAR_7);
 return (VAR_6);
}
