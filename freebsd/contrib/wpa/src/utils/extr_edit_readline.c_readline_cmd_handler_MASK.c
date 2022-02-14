
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int line; } ;
typedef TYPE_1__ HIST_ENTRY ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,int ) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(char *VAR_1)
{
 if (VAR_1 && *VAR_1) {
  HIST_ENTRY *VAR_2;
  while (FUNC_3())
   ;
  VAR_2 = FUNC_5();
  if (VAR_2 == ((void*)0) || FUNC_4(VAR_1, VAR_2->line) != 0)
   FUNC_0(VAR_1);
  FUNC_3();
 }
 if (VAR_1 == ((void*)0)) {
  FUNC_2(VAR_0);
  return;
 }
 FUNC_6(VAR_1);
 FUNC_1(VAR_0, VAR_1);
}
