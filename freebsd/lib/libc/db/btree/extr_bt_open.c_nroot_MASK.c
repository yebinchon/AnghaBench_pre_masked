
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ pgno_t ;
struct TYPE_10__ {int bt_mp; int bt_psize; } ;
struct TYPE_9__ {scalar_t__ lower; scalar_t__ pgno; scalar_t__* linp; int flags; int upper; int nextpg; int prevpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ BTREE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,int,int ) ;
 TYPE_1__* FUNC_3 (int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(BTREE *VAR_10)
{
 PAGE *VAR_11, *VAR_12;
 pgno_t VAR_13;

 if ((VAR_12 = FUNC_2(VAR_10->bt_mp, 1, 0)) != ((void*)0)) {
  if (VAR_12->lower == 0 &&
      VAR_12->pgno == 0 &&
      VAR_12->linp[0] == 0) {
   FUNC_1(VAR_10->bt_mp, VAR_12);
   VAR_9 = VAR_1;
  } else {
   FUNC_4(VAR_10->bt_mp, VAR_12, 0);
   return (VAR_8);
  }
 }
 if (VAR_9 != VAR_1)
  return (VAR_7);
 VAR_9 = 0;

 if ((VAR_11 = FUNC_3(VAR_10->bt_mp, &VAR_13, VAR_3)) == ((void*)0))
  return (VAR_7);

 if ((VAR_12 = FUNC_3(VAR_10->bt_mp, &VAR_13, VAR_3)) == ((void*)0))
  return (VAR_7);

 if (VAR_13 != VAR_6)
  return (VAR_7);
 VAR_12->pgno = VAR_13;
 VAR_12->prevpg = VAR_12->nextpg = VAR_5;
 VAR_12->lower = VAR_0;
 VAR_12->upper = VAR_10->bt_psize;
 VAR_12->flags = VAR_4;
 FUNC_0(VAR_11, 0, VAR_10->bt_psize);
 FUNC_4(VAR_10->bt_mp, VAR_11, VAR_2);
 FUNC_4(VAR_10->bt_mp, VAR_12, VAR_2);
 return (VAR_8);
}
