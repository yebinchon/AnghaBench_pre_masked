
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pgno_t ;
struct TYPE_9__ {int bt_mp; int bt_free; } ;
struct TYPE_8__ {int nextpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int *,int ) ;

PAGE *
FUNC_3(BTREE *VAR_3, pgno_t *VAR_4)
{
 PAGE *VAR_5;

 if (VAR_3->bt_free != VAR_2 &&
     (VAR_5 = FUNC_1(VAR_3->bt_mp, VAR_3->bt_free, 0)) != ((void*)0)) {
  *VAR_4 = VAR_3->bt_free;
  VAR_3->bt_free = VAR_5->nextpg;
  FUNC_0(VAR_3, VAR_0);
  return (VAR_5);
 }
 return (FUNC_2(VAR_3->bt_mp, VAR_4, VAR_1));
}
