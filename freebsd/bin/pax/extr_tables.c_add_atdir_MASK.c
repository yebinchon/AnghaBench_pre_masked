
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
typedef void* time_t ;
typedef scalar_t__ ino_t ;
typedef scalar_t__ dev_t ;
struct TYPE_4__ {scalar_t__ ino; scalar_t__ dev; struct TYPE_4__* fow; void* atime; void* mtime; int * name; } ;
typedef TYPE_1__ ATDIR ;


 unsigned int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 (char*) ;

void
FUNC_4(char *VAR_2, dev_t VAR_3, ino_t VAR_4, time_t VAR_5, time_t VAR_6)
{
 ATDIR *VAR_7;
 u_int VAR_8;

 if (VAR_1 == ((void*)0))
  return;
 VAR_8 = ((unsigned)VAR_4) % VAR_0;
 if ((VAR_7 = VAR_1[VAR_8]) != ((void*)0)) {
  while (VAR_7 != ((void*)0)) {
   if ((VAR_7->ino == VAR_4) && (VAR_7->dev == VAR_3))
    break;
   VAR_7 = VAR_7->fow;
  }




  if (VAR_7 != ((void*)0))
   return;
 }




 if ((VAR_7 = (ATDIR *)FUNC_1(sizeof(ATDIR))) != ((void*)0)) {
  if ((VAR_7->name = FUNC_3(VAR_2)) != ((void*)0)) {
   VAR_7->dev = VAR_3;
   VAR_7->ino = VAR_4;
   VAR_7->mtime = VAR_5;
   VAR_7->atime = VAR_6;
   VAR_7->fow = VAR_1[VAR_8];
   VAR_1[VAR_8] = VAR_7;
   return;
  }
  FUNC_0(VAR_7);
 }

 FUNC_2(1, "Directory access time reset table ran out of memory");
 return;
}
