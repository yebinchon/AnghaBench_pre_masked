
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ refcnt; char* fname; scalar_t__ chflg; struct TYPE_3__* fow; } ;
typedef TYPE_1__ FTREE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_3(void)
{
 FTREE *VAR_3;
 int VAR_4 = 0;




 if (VAR_2)
  FUNC_0();





 for (VAR_3 = VAR_0; VAR_3 != ((void*)0); VAR_3 = VAR_3->fow) {
  if ((VAR_3->refcnt > 0) || VAR_3->chflg)
   continue;
  if (VAR_4 == 0) {
   FUNC_2(1,"WARNING! These file names were not selected:");
   ++VAR_4;
  }
  (void)FUNC_1(VAR_1, "%s\n", VAR_3->fname);
 }
}
