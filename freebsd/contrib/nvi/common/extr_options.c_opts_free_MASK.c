
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
struct TYPE_6__ {int * opts; } ;
typedef TYPE_1__ SCR ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 (TYPE_1__*,int) ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *) ;
 TYPE_3__* VAR_3 ;

void
FUNC_4(SCR *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5) {
  if (VAR_3[VAR_5].type != VAR_1 ||
      FUNC_0(&VAR_4->opts[VAR_5], VAR_0))
   continue;
  if (FUNC_2(VAR_4, VAR_5) != ((void*)0))
   FUNC_3(FUNC_2(VAR_4, VAR_5));
  if (FUNC_1(VAR_4, VAR_5) != ((void*)0))
   FUNC_3(FUNC_1(VAR_4, VAR_5));
 }
}
