
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int kbd_callback_func_t ;
struct TYPE_6__ {void* kc_arg; int * kc_func; } ;
struct TYPE_7__ {TYPE_1__ kb_callback; void* kb_token; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__** VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;

int
FUNC_6(char *VAR_1, int VAR_2, void *VAR_3, kbd_callback_func_t *VAR_4,
      void *VAR_5)
{
 int VAR_6;
 int VAR_7;

 if (VAR_4 == ((void*)0))
  return (-1);

 VAR_7 = FUNC_4();
 VAR_6 = FUNC_2(VAR_1, VAR_2);
 if (VAR_6 >= 0) {
  if (FUNC_1(VAR_0[VAR_6])) {
   FUNC_5(VAR_7);
   return (-1);
  }
  VAR_0[VAR_6]->kb_token = VAR_3;
  FUNC_0(VAR_0[VAR_6]);
  VAR_0[VAR_6]->kb_callback.kc_func = VAR_4;
  VAR_0[VAR_6]->kb_callback.kc_arg = VAR_5;
  FUNC_3(VAR_0[VAR_6]);
 }
 FUNC_5(VAR_7);
 return (VAR_6);
}
