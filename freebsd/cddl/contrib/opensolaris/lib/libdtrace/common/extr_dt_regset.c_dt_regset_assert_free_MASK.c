
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dr_size; int dr_bitmap; } ;
typedef TYPE_1__ dt_regset_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int) ;
 int * FUNC_3 (char*) ;

void
FUNC_4(dt_regset_t *VAR_2)
{
 int VAR_3;
 boolean_t VAR_4 = VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2->dr_size; VAR_3++) {
  if (FUNC_0(VAR_2->dr_bitmap, VAR_3) != 0) {
   FUNC_2("%%r%d was left allocated\n", VAR_3);
   VAR_4 = VAR_1;
  }
 }




 if (VAR_4 && FUNC_3("DTRACE_DEBUG_REGSET") != ((void*)0))
  FUNC_1();
}
