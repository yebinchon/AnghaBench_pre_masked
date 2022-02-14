
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* ResetSystem ) (int ,int ,int ,int *) ;} ;
struct TYPE_3__ {int (* dv_cleanup ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_2(int VAR_5, char *VAR_6[])
{
 int VAR_7;

 for (VAR_7 = 0; VAR_4[VAR_7] != ((void*)0); ++VAR_7)
  if (VAR_4[VAR_7]->dv_cleanup != ((void*)0))
   (VAR_4[VAR_7]->dv_cleanup)();

 VAR_3->ResetSystem(VAR_2, VAR_1, 0, ((void*)0));


 return (VAR_0);
}
