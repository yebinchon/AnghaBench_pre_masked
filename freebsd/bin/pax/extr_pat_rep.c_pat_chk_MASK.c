
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flgs; char* pstr; struct TYPE_3__* fow; } ;
typedef TYPE_1__ PATTERN ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;

void
FUNC_2(void)
{
 PATTERN *VAR_3;
 int VAR_4 = 0;





 for (VAR_3 = VAR_1; VAR_3 != ((void*)0); VAR_3 = VAR_3->fow) {
  if (VAR_3->flgs & VAR_0)
   continue;
  if (!VAR_4) {
   FUNC_1(1, "WARNING! These patterns were not matched:");
   ++VAR_4;
  }
  (void)FUNC_0(VAR_2, "%s\n", VAR_3->pstr);
 }
}
