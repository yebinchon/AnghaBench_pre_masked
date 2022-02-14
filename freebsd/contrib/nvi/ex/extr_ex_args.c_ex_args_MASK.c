
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char** argv; char** cargv; int cols; int * gp; } ;
typedef TYPE_1__ SCR ;
typedef int GS ;
typedef int EXCMD ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*,char*,char*,char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,int ,char*) ;
 int FUNC_4 (char*) ;

int
FUNC_5(SCR *VAR_1, EXCMD *VAR_2)
{
 GS *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 char **VAR_8;

 if (VAR_1->argv == ((void*)0)) {
  (void)FUNC_3(VAR_1, VAR_0, "114|No file list to display");
  return (0);
 }

 VAR_3 = VAR_1->gp;
 VAR_5 = VAR_6 = VAR_7 = 0;
 for (VAR_4 = 1, VAR_8 = VAR_1->argv; *VAR_8 != ((void*)0); ++VAR_8) {
  VAR_5 += VAR_6 = FUNC_4(*VAR_8) + VAR_7 + (VAR_8 == VAR_1->cargv ? 2 : 0);
  if (VAR_5 >= VAR_1->cols - 1) {
   VAR_5 = VAR_6;
   VAR_7 = 0;
   (void)FUNC_2(VAR_1, "\n");
  } else if (VAR_4 != 1) {
   VAR_7 = 1;
   (void)FUNC_2(VAR_1, " ");
  }
  ++VAR_4;

  (void)FUNC_1(VAR_1, "%s%s%s", VAR_8 == VAR_1->cargv ? "[" : "",
      *VAR_8, VAR_8 == VAR_1->cargv ? "]" : "");
  if (FUNC_0(VAR_1))
   break;
 }
 (void)FUNC_2(VAR_1, "\n");
 return (0);
}
