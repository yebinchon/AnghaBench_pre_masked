
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
typedef int time_t ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
struct TYPE_4__ {scalar_t__ ino; scalar_t__ dev; struct TYPE_4__* name; int atime; int mtime; struct TYPE_4__* fow; } ;
typedef TYPE_1__ ATDIR ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(dev_t VAR_2, ino_t VAR_3, time_t *VAR_4, time_t *VAR_5)
{
 ATDIR *VAR_6;
 ATDIR **VAR_7;
 u_int VAR_8;

 if (VAR_1 == ((void*)0))
  return(-1);



 VAR_8 = ((unsigned)VAR_3) % VAR_0;
 if ((VAR_6 = VAR_1[VAR_8]) == ((void*)0))
  return(-1);

 VAR_7 = &(VAR_1[VAR_8]);
 while (VAR_6 != ((void*)0)) {
  if ((VAR_6->ino == VAR_3) && (VAR_6->dev == VAR_2))
   break;



  VAR_7 = &(VAR_6->fow);
  VAR_6 = VAR_6->fow;
 }




 if (VAR_6 == ((void*)0))
  return(-1);




 *VAR_7 = VAR_6->fow;
 *VAR_4 = VAR_6->mtime;
 *VAR_5 = VAR_6->atime;
 FUNC_0(VAR_6->name);
 FUNC_0(VAR_6);
 return(0);
}
