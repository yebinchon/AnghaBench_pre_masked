
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_5__ {struct TYPE_5__* oname; struct TYPE_5__* fow; struct TYPE_5__* nname; } ;
typedef TYPE_1__ NAMT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__** VAR_1 ;
 int FUNC_2 (int,char*) ;
 size_t FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (char*,TYPE_1__*) ;
 void* FUNC_5 (char*) ;

int
FUNC_6(char *VAR_2, int VAR_3, char *VAR_4)
{
 NAMT *VAR_5;
 u_int VAR_6;

 if (VAR_1 == ((void*)0)) {



  FUNC_2(0, "No interactive rename table, links may fail\n");
  return(0);
 }





 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_0);
 if ((VAR_5 = VAR_1[VAR_6]) != ((void*)0)) {



  while ((VAR_5 != ((void*)0)) && (FUNC_4(VAR_2, VAR_5->oname) != 0))
   VAR_5 = VAR_5->fow;

  if (VAR_5 != ((void*)0)) {




   if (FUNC_4(VAR_4, VAR_5->nname) == 0)
    return(0);

   FUNC_0(VAR_5->nname);
   if ((VAR_5->nname = FUNC_5(VAR_4)) == ((void*)0)) {
    FUNC_2(1, "Cannot update rename table");
    return(-1);
   }
   return(0);
  }
 }




 if ((VAR_5 = (NAMT *)FUNC_1(sizeof(NAMT))) != ((void*)0)) {
  if ((VAR_5->oname = FUNC_5(VAR_2)) != ((void*)0)) {
   if ((VAR_5->nname = FUNC_5(VAR_4)) != ((void*)0)) {
    VAR_5->fow = VAR_1[VAR_6];
    VAR_1[VAR_6] = VAR_5;
    return(0);
   }
   FUNC_0(VAR_5->oname);
  }
  FUNC_0(VAR_5);
 }
 FUNC_2(1, "Interactive rename table out of memory");
 return(-1);
}
