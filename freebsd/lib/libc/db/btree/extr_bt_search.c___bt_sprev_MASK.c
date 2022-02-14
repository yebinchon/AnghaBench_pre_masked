
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* page; scalar_t__ index; } ;
struct TYPE_13__ {int bt_mp; TYPE_2__ bt_cur; } ;
struct TYPE_11__ {int prevpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ EPG ;
typedef int DBT ;
typedef TYPE_3__ BTREE ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int const*,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(BTREE *VAR_0, PAGE *VAR_1, const DBT *VAR_2, int *VAR_3)
{
 EPG VAR_4;





 if ((VAR_4.page = FUNC_2(VAR_0->bt_mp, VAR_1->prevpg, 0)) == ((void*)0))
  return (0);
 VAR_4.index = FUNC_0(VAR_4.page) - 1;
 if (FUNC_1(VAR_0, VAR_2, &VAR_4) == 0) {
  FUNC_3(VAR_0->bt_mp, VAR_1, 0);
  VAR_0->bt_cur = VAR_4;
  *VAR_3 = 1;
  return (1);
 }
 FUNC_3(VAR_0->bt_mp, VAR_4.page, 0);
 return (0);
}
