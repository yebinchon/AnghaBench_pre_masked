
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * kc_arg; int * kc_func; } ;
struct TYPE_9__ {void* kb_token; TYPE_1__ kb_callback; } ;
typedef TYPE_2__ keyboard_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

int
FUNC_6(keyboard_t *VAR_2, void *VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4();
 if (!FUNC_1(VAR_2) || !FUNC_0(VAR_2)) {
  VAR_4 = VAR_0;
 } else if (VAR_2->kb_token != VAR_3) {
  VAR_4 = VAR_1;
 } else {
  VAR_2->kb_token = ((void*)0);
  FUNC_2(VAR_2);
  VAR_2->kb_callback.kc_func = ((void*)0);
  VAR_2->kb_callback.kc_arg = ((void*)0);
  FUNC_3(VAR_2);
  VAR_4 = 0;
 }
 FUNC_5(VAR_5);
 return (VAR_4);
}
