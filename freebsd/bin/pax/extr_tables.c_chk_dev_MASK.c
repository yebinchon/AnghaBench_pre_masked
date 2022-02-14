
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
typedef scalar_t__ dev_t ;
struct TYPE_4__ {scalar_t__ dev; struct TYPE_4__* fow; int * list; } ;
typedef TYPE_1__ DEVT ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static DEVT *
FUNC_2(dev_t VAR_2, int VAR_3)
{
 DEVT *VAR_4;
 u_int VAR_5;

 if (VAR_1 == ((void*)0))
  return(((void*)0));



 VAR_5 = ((unsigned)VAR_2) % VAR_0;
 if ((VAR_4 = VAR_1[VAR_5]) != ((void*)0)) {
  while ((VAR_4 != ((void*)0)) && (VAR_4->dev != VAR_2))
   VAR_4 = VAR_4->fow;




  if (VAR_4 != ((void*)0))
   return(VAR_4);
 }





 if (VAR_3 == 0)
  return(((void*)0));






 if ((VAR_4 = (DEVT *)FUNC_0(sizeof(DEVT))) == ((void*)0)) {
  FUNC_1(1, "Device map table out of memory");
  return(((void*)0));
 }
 VAR_4->dev = VAR_2;
 VAR_4->list = ((void*)0);
 VAR_4->fow = VAR_1[VAR_5];
 VAR_1[VAR_5] = VAR_4;
 return(VAR_4);
}
