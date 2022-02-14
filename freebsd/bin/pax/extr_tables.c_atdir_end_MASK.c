
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int atime; int mtime; int name; struct TYPE_3__* fow; } ;
typedef TYPE_1__ ATDIR ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;

void
FUNC_1(void)
{
 ATDIR *VAR_2;
 int VAR_3;

 if (VAR_1 == ((void*)0))
  return;




 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  if ((VAR_2 = VAR_1[VAR_3]) == ((void*)0))
   continue;





  for (; VAR_2 != ((void*)0); VAR_2 = VAR_2->fow)
   FUNC_0(VAR_2->name, VAR_2->mtime, VAR_2->atime, 1);
 }
}
