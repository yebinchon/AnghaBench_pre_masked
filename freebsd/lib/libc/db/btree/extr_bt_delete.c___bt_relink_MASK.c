
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bt_mp; } ;
struct TYPE_7__ {scalar_t__ nextpg; scalar_t__ prevpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(BTREE *VAR_3, PAGE *VAR_4)
{
 PAGE *VAR_5;

 if (VAR_4->nextpg != VAR_1) {
  if ((VAR_5 = FUNC_0(VAR_3->bt_mp, VAR_4->nextpg, 0)) == ((void*)0))
   return (VAR_2);
  VAR_5->prevpg = VAR_4->prevpg;
  FUNC_1(VAR_3->bt_mp, VAR_5, VAR_0);
 }
 if (VAR_4->prevpg != VAR_1) {
  if ((VAR_5 = FUNC_0(VAR_3->bt_mp, VAR_4->prevpg, 0)) == ((void*)0))
   return (VAR_2);
  VAR_5->nextpg = VAR_4->nextpg;
  FUNC_1(VAR_3->bt_mp, VAR_5, VAR_0);
 }
 return (0);
}
