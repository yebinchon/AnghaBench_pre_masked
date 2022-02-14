
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int pgno_t ;
typedef int indx_t ;
struct TYPE_15__ {int index; int pgno; } ;
struct TYPE_18__ {TYPE_1__ pg; int key; } ;
struct TYPE_19__ {int bt_mp; TYPE_4__ bt_cursor; } ;
struct TYPE_17__ {int index; TYPE_2__* page; } ;
struct TYPE_16__ {int prevpg; int nextpg; } ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ EPG ;
typedef TYPE_4__ CURSOR ;
typedef TYPE_5__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_3 (TYPE_5__*,int *,TYPE_3__*,int*) ;
 TYPE_2__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_6(BTREE *VAR_7, EPG *VAR_8, int VAR_9)
{
 CURSOR *VAR_10;
 PAGE *VAR_11;
 indx_t VAR_12;
 pgno_t VAR_13;
 int VAR_14;





 VAR_10 = &VAR_7->bt_cursor;
 if (FUNC_1(VAR_10, VAR_0))
  return (FUNC_3(VAR_7, &VAR_10->key, VAR_8, &VAR_14));


 if ((VAR_11 = FUNC_4(VAR_7->bt_mp, VAR_10->pg.pgno, 0)) == ((void*)0))
  return (VAR_4);





 switch (VAR_9) {
 case 129:





  if (FUNC_1(VAR_10, VAR_1))
   goto usecurrent;
  VAR_12 = VAR_10->pg.index;
  if (++VAR_12 == FUNC_2(VAR_11)) {
   VAR_13 = VAR_11->nextpg;
   FUNC_5(VAR_7->bt_mp, VAR_11, 0);
   if (VAR_13 == VAR_3)
    return (VAR_5);
   if ((VAR_11 = FUNC_4(VAR_7->bt_mp, VAR_13, 0)) == ((void*)0))
    return (VAR_4);
   VAR_12 = 0;
  }
  break;
 case 128:





  if (FUNC_1(VAR_10, VAR_2)) {
usecurrent: FUNC_0(VAR_10, VAR_1 | VAR_2);
   VAR_8->page = VAR_11;
   VAR_8->index = VAR_10->pg.index;
   return (VAR_6);
  }
  VAR_12 = VAR_10->pg.index;
  if (VAR_12 == 0) {
   VAR_13 = VAR_11->prevpg;
   FUNC_5(VAR_7->bt_mp, VAR_11, 0);
   if (VAR_13 == VAR_3)
    return (VAR_5);
   if ((VAR_11 = FUNC_4(VAR_7->bt_mp, VAR_13, 0)) == ((void*)0))
    return (VAR_4);
   VAR_12 = FUNC_2(VAR_11) - 1;
  } else
   --VAR_12;
  break;
 }

 VAR_8->page = VAR_11;
 VAR_8->index = VAR_12;
 return (VAR_6);
}
