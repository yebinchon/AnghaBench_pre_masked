
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fname; scalar_t__ chflg; struct TYPE_3__* fow; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int ,scalar_t__,int ) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ,int *) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 char* FUNC_5 (int ,char) ;
 int FUNC_6 (int,int ,char*,...) ;

__attribute__((used)) static int
FUNC_7(void)
{
 char *VAR_9;




 if (VAR_7 != ((void*)0)) {
  (void)FUNC_3(VAR_7);
  VAR_7 = ((void*)0);
 }





 for(;;) {
  if (VAR_5 == ((void*)0)) {




   if (FUNC_2(VAR_3[0], VAR_0+1, VAR_8) == ((void*)0))
    return(-1);
   if ((VAR_9 = FUNC_5(VAR_3[0], '\n')) != ((void*)0))
    *VAR_9 = '\0';
  } else {



   if (VAR_4 == ((void*)0))
    VAR_4 = VAR_5;
   else if ((VAR_4 = VAR_4->fow) == ((void*)0))
    return(-1);
   if (VAR_4->chflg) {

    if (FUNC_1(VAR_1) < 0) {
     FUNC_6(1, VAR_2,
       "Can't fchdir to starting directory");
     return(-1);
    }
    if (FUNC_0(VAR_4->fname) < 0) {
     FUNC_6(1, VAR_2, "Can't chdir to %s",
         VAR_4->fname);
     return(-1);
    }
    continue;
   } else
    VAR_3[0] = VAR_4->fname;
  }
  if ((VAR_7 = FUNC_4(VAR_3, VAR_6, ((void*)0))) != ((void*)0))
   break;
 }
 return(0);
}
