
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*,int ) ;
 TYPE_1__* VAR_3 ;
 int * VAR_4 ;
 char** VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;

void
FUNC_4(void)
{
 int VAR_6 = 0;
 char *VAR_7, *VAR_8;
 int VAR_9;

 if (VAR_3) for (VAR_9 = 0; VAR_9 < VAR_3->count; VAR_9++) {
  if (FUNC_1(VAR_3->args[VAR_9])) {
   VAR_6 = 1;
   break;
  }
 }
 if (!VAR_6)
  return;
 VAR_7 = FUNC_0("LC_ALL", 0);
 VAR_0;
 if (VAR_7 != ((void*)0)) {
  FUNC_2(VAR_2, VAR_7);
  VAR_1;
  FUNC_3();
  return;
 }
 VAR_8 = FUNC_0("LANG", 0);
 for (VAR_9 = 0; VAR_5[VAR_9] != ((void*)0); VAR_9++) {
  VAR_7 = FUNC_0(VAR_5[VAR_9], 0);
  if (VAR_7 == ((void*)0))
   VAR_7 = VAR_8;
  if (VAR_7 != ((void*)0))
   FUNC_2(VAR_4[VAR_9], VAR_7);
 }
 VAR_1;
 FUNC_3();
}
