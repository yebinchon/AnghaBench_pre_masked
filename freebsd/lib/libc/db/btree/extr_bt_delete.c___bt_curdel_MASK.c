
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_18__ {scalar_t__ index; int pgno; } ;
struct TYPE_21__ {int key; TYPE_1__ pg; } ;
struct TYPE_22__ {int bt_mp; TYPE_4__ bt_cursor; } ;
struct TYPE_20__ {scalar_t__ index; TYPE_2__* page; } ;
struct TYPE_19__ {scalar_t__ prevpg; scalar_t__ nextpg; int pgno; } ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ EPG ;
typedef int DBT ;
typedef TYPE_4__ CURSOR ;
typedef TYPE_5__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (TYPE_4__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int const*,TYPE_3__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_3__*,int *,int *,int *,int *,int) ;
 TYPE_2__* FUNC_6 (int ,scalar_t__,int ) ;
 int FUNC_7 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_8(BTREE *VAR_7, const DBT *VAR_8, PAGE *VAR_9, u_int VAR_10)
{
 CURSOR *VAR_11;
 EPG VAR_12;
 PAGE *VAR_13;
 int VAR_14, VAR_15;





 VAR_11 = &VAR_7->bt_cursor;
 FUNC_0(VAR_11, VAR_2 | VAR_3 | VAR_1);

 VAR_14 = 0;
 if (!FUNC_1(VAR_7, VAR_0)) {





  if (VAR_8 == ((void*)0)) {
   VAR_12.page = VAR_9;
   VAR_12.index = VAR_10;
   if ((VAR_15 = FUNC_5(VAR_7, &VAR_12,
       &VAR_11->key, &VAR_11->key, ((void*)0), ((void*)0), 1)) != VAR_6)
    return (VAR_15);
   VAR_14 = 1;
   VAR_8 = &VAR_11->key;
  }

  if (VAR_10 > 0) {
   VAR_12.page = VAR_9;
   VAR_12.index = VAR_10 - 1;
   if (FUNC_4(VAR_7, VAR_8, &VAR_12) == 0) {
    FUNC_2(VAR_11, VAR_3);
    goto dup2;
   }
  }

  if (VAR_10 < FUNC_3(VAR_9) - 1) {
   VAR_12.page = VAR_9;
   VAR_12.index = VAR_10 + 1;
   if (FUNC_4(VAR_7, VAR_8, &VAR_12) == 0) {
    FUNC_2(VAR_11, VAR_2);
    goto dup2;
   }
  }

  if (VAR_10 == 0 && VAR_9->prevpg != VAR_4) {
   if ((VAR_13 = FUNC_6(VAR_7->bt_mp, VAR_9->prevpg, 0)) == ((void*)0))
    return (VAR_5);
   VAR_12.page = VAR_13;
   VAR_12.index = FUNC_3(VAR_13) - 1;
   if (FUNC_4(VAR_7, VAR_8, &VAR_12) == 0) {
    FUNC_2(VAR_11, VAR_3);
    goto dup1;
   }
   FUNC_7(VAR_7->bt_mp, VAR_13, 0);
  }

  if (VAR_10 == FUNC_3(VAR_9) - 1 && VAR_9->nextpg != VAR_4) {
   if ((VAR_13 = FUNC_6(VAR_7->bt_mp, VAR_9->nextpg, 0)) == ((void*)0))
    return (VAR_5);
   VAR_12.page = VAR_13;
   VAR_12.index = 0;
   if (FUNC_4(VAR_7, VAR_8, &VAR_12) == 0) {
    FUNC_2(VAR_11, VAR_2);
dup1: FUNC_7(VAR_7->bt_mp, VAR_13, 0);
dup2: VAR_11->pg.pgno = VAR_12.page->pgno;
    VAR_11->pg.index = VAR_12.index;
    return (VAR_6);
   }
   FUNC_7(VAR_7->bt_mp, VAR_13, 0);
  }
 }
 VAR_12.page = VAR_9;
 VAR_12.index = VAR_10;
 if (VAR_14 || (VAR_15 =
     FUNC_5(VAR_7, &VAR_12, &VAR_11->key, &VAR_11->key, ((void*)0), ((void*)0), 1)) == VAR_6) {
  FUNC_2(VAR_11, VAR_1);
  return (VAR_6);
 }
 return (VAR_15);
}
