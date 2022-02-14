
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ccnt; scalar_t__ q_ccnt; char** cargv; } ;
typedef TYPE_1__ SCR ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;

int
FUNC_1(SCR *VAR_1, int VAR_2)
{
 char **VAR_3;






 if (!VAR_2 && VAR_1->ccnt != VAR_1->q_ccnt + 1 &&
     VAR_1->cargv != ((void*)0) && VAR_1->cargv[1] != ((void*)0)) {
  VAR_1->q_ccnt = VAR_1->ccnt;

  for (VAR_3 = VAR_1->cargv + 1; *VAR_3 != ((void*)0); ++VAR_3);
  FUNC_0(VAR_1, VAR_0,
      "167|%d more files to edit", (int)(VAR_3 - VAR_1->cargv) - 1);

  return (1);
 }
 return (0);
}
