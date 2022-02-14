
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int (* init ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_1__** VAR_2 ;
 int FUNC_1 () ;

void
FUNC_2(int VAR_3)
{
 int VAR_4, VAR_5;

 VAR_1 = FUNC_0(VAR_1, VAR_3);
 for (VAR_4 = 0; VAR_2[VAR_4] != ((void*)0); VAR_4++) {
  VAR_5 = (VAR_2[VAR_4]->flags & VAR_0) ? 1 : 2;
  if (VAR_5 == VAR_1)
   (*VAR_2[VAR_4]->init)();
 }
}
