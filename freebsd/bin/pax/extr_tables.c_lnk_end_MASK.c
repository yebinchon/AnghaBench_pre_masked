
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* name; struct TYPE_4__* fow; } ;
typedef TYPE_1__ HRDLNK ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;

void
FUNC_1(void)
{
 int VAR_2;
 HRDLNK *VAR_3;
 HRDLNK *VAR_4;

 if (VAR_1 == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1[VAR_2] == ((void*)0))
   continue;
  VAR_3 = VAR_1[VAR_2];
  VAR_1[VAR_2] = ((void*)0);




  while (VAR_3 != ((void*)0)) {
   VAR_4 = VAR_3;
   VAR_3 = VAR_4->fow;
   FUNC_0(VAR_4->name);
   FUNC_0(VAR_4);
  }
 }
 return;
}
