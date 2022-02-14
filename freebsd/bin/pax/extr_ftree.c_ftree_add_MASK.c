
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* fname; int chflg; struct TYPE_4__* fow; scalar_t__ refcnt; } ;
typedef TYPE_1__ FTREE ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(char *VAR_2, int VAR_3)
{
 FTREE *VAR_4;
 int VAR_5;




 if ((VAR_2 == ((void*)0)) || (*VAR_2 == '\0')) {
  FUNC_1(0, "Invalid file name argument");
  return(-1);
 }






 if ((VAR_4 = (FTREE *)FUNC_0(sizeof(FTREE))) == ((void*)0)) {
  FUNC_1(0, "Unable to allocate memory for filename");
  return(-1);
 }

 if (((VAR_5 = FUNC_2(VAR_2) - 1) > 0) && (VAR_2[VAR_5] == '/'))
  VAR_2[VAR_5] = '\0';
 VAR_4->fname = VAR_2;
 VAR_4->refcnt = 0;
 VAR_4->chflg = VAR_3;
 VAR_4->fow = ((void*)0);
 if (VAR_0 == ((void*)0)) {
  VAR_1 = VAR_0 = VAR_4;
  return(0);
 }
 VAR_1->fow = VAR_4;
 VAR_1 = VAR_4;
 return(0);
}
