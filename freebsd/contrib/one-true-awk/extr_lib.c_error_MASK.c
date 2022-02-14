
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lineno; } ;
typedef TYPE_1__ Node ;


 char** VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (char*,char*) ;

void FUNC_4()
{
 extern Node *VAR_6;

 FUNC_2(VAR_5, "\n");
 if (VAR_3 != 2 && VAR_2 && *VAR_2 > 0) {
  FUNC_2(VAR_5, " input record number %d", (int) (*VAR_1));
  if (FUNC_3(*VAR_0, "-") != 0)
   FUNC_2(VAR_5, ", file %s", *VAR_0);
  FUNC_2(VAR_5, "\n");
 }
 if (VAR_3 != 2 && VAR_6)
  FUNC_2(VAR_5, " source line number %d", VAR_6->lineno);
 else if (VAR_3 != 2 && VAR_4)
  FUNC_2(VAR_5, " source line number %d", VAR_4);
 if (VAR_3 == 1 && FUNC_0() != ((void*)0))
  FUNC_2(VAR_5, " source file %s", FUNC_0());
 FUNC_2(VAR_5, "\n");
 FUNC_1();
}
