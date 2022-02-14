
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_15__ ;


typedef int pgno_t ;
typedef int indx_t ;
struct TYPE_22__ {int index; TYPE_1__* page; } ;
struct TYPE_23__ {int bt_mp; TYPE_2__ bt_cur; } ;
struct TYPE_21__ {int flags; scalar_t__ prevpg; scalar_t__ nextpg; int pgno; } ;
struct TYPE_20__ {int pgno; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ EPG ;
typedef int DBT ;
typedef TYPE_3__ BTREE ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 TYPE_15__* FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_3__*,int const*,TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_1__*,int const*,int*) ;
 scalar_t__ FUNC_7 (TYPE_3__*,TYPE_1__*,int const*,int*) ;
 TYPE_1__* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,TYPE_1__*,int ) ;

EPG *
FUNC_10(BTREE *VAR_4, const DBT *VAR_5, int *VAR_6)
{
 PAGE *VAR_7;
 indx_t VAR_8, VAR_9, VAR_10;
 pgno_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_4);
 for (VAR_11 = VAR_3;;) {
  if ((VAR_7 = FUNC_8(VAR_4->bt_mp, VAR_11, 0)) == ((void*)0))
   return (((void*)0));


  VAR_4->bt_cur.page = VAR_7;
  for (VAR_8 = 0, VAR_10 = FUNC_4(VAR_7); VAR_10; VAR_10 >>= 1) {
   VAR_4->bt_cur.index = VAR_9 = VAR_8 + (VAR_10 >> 1);
   if ((VAR_12 = FUNC_5(VAR_4, VAR_5, &VAR_4->bt_cur)) == 0) {
    if (VAR_7->flags & VAR_1) {
     *VAR_6 = 1;
     return (&VAR_4->bt_cur);
    }
    goto next;
   }
   if (VAR_12 > 0) {
    VAR_8 = VAR_9 + 1;
    --VAR_10;
   }
  }
  if (VAR_7->flags & VAR_1) {
   if (!FUNC_2(VAR_4, VAR_0)) {
    if (VAR_8 == 0 &&
        VAR_7->prevpg != VAR_2 &&
        FUNC_7(VAR_4, VAR_7, VAR_5, VAR_6))
     return (&VAR_4->bt_cur);
    if (VAR_8 == FUNC_4(VAR_7) &&
        VAR_7->nextpg != VAR_2 &&
        FUNC_6(VAR_4, VAR_7, VAR_5, VAR_6))
     return (&VAR_4->bt_cur);
   }
   *VAR_6 = 0;
   VAR_4->bt_cur.index = VAR_8;
   return (&VAR_4->bt_cur);
  }
  VAR_9 = VAR_8 ? VAR_8 - 1 : VAR_8;

next: FUNC_1(VAR_4, VAR_7->pgno, VAR_9);
  VAR_11 = FUNC_3(VAR_7, VAR_9)->pgno;
  FUNC_9(VAR_4->bt_mp, VAR_7, 0);
 }
}
