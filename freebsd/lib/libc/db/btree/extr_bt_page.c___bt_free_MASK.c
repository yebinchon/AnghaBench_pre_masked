
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bt_mp; int bt_free; } ;
struct TYPE_7__ {int pgno; int nextpg; int prevpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

int
FUNC_2(BTREE *VAR_3, PAGE *VAR_4)
{

 VAR_4->prevpg = VAR_2;
 VAR_4->nextpg = VAR_3->bt_free;
 VAR_3->bt_free = VAR_4->pgno;
 FUNC_0(VAR_3, VAR_0);


 return (FUNC_1(VAR_3->bt_mp, VAR_4, VAR_1));
}
