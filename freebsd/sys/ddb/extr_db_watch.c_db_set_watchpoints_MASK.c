
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* db_watchpoint_t ;
struct TYPE_5__ {int hiaddr; int loaddr; TYPE_1__* map; struct TYPE_5__* link; } ;
struct TYPE_4__ {int pmap; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(void)
{
 db_watchpoint_t VAR_3;

 if (!VAR_2) {
     for (VAR_3 = VAR_1;
          VAR_3 != 0;
          VAR_3 = VAR_3->link)
  FUNC_0(VAR_3->map->pmap,
        FUNC_2(VAR_3->loaddr),
        FUNC_1(VAR_3->hiaddr),
        VAR_0);

     VAR_2 = 1;
 }
}
