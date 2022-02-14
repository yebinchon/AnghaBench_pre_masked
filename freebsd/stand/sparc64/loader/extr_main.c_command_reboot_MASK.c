
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dv_cleanup ) () ;} ;


 int FUNC_0 () ;
 TYPE_1__** VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static int
FUNC_3(int VAR_1, char *VAR_2[])
{
 int VAR_3;

 for (VAR_3 = 0; VAR_0[VAR_3] != ((void*)0); ++VAR_3)
  if (VAR_0[VAR_3]->dv_cleanup != ((void*)0))
   (VAR_0[VAR_3]->dv_cleanup)();

 FUNC_1("Rebooting...\n");
 FUNC_0();
}
