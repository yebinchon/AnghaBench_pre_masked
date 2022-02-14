
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
typedef scalar_t__ pgno_t ;
typedef int indx_t ;
struct TYPE_27__ {scalar_t__ pgno; } ;
struct TYPE_26__ {int bt_mp; } ;
struct TYPE_21__ {scalar_t__ pgno; } ;
struct TYPE_25__ {TYPE_1__ pg; int key; } ;
struct TYPE_24__ {TYPE_2__* page; } ;
struct TYPE_23__ {scalar_t__ pgno; int index; } ;
struct TYPE_22__ {scalar_t__ pgno; scalar_t__ nextpg; scalar_t__ prevpg; } ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ EPGNO ;
typedef TYPE_4__ EPG ;
typedef TYPE_5__ CURSOR ;
typedef TYPE_6__ BTREE ;
typedef TYPE_7__ BINTERNAL ;


 TYPE_3__* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,scalar_t__,int) ;
 TYPE_7__* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_4 (TYPE_6__*,int *,int*) ;
 TYPE_2__* FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static int
FUNC_7(BTREE *VAR_1, PAGE **VAR_2, CURSOR *VAR_3)
{
 BINTERNAL *VAR_4;
 EPG *VAR_5;
 EPGNO *VAR_6;
 PAGE *VAR_7;
 indx_t VAR_8;
 pgno_t VAR_9;
 recno_t VAR_10, VAR_11;
 int VAR_12, VAR_13;





 VAR_7 = *VAR_2;
 FUNC_6(VAR_1->bt_mp, VAR_7, 0);
 if ((VAR_5 = FUNC_4(VAR_1, &VAR_3->key, &VAR_12)) == ((void*)0))
  return (1);
 VAR_7 = VAR_5->page;


 if (VAR_7->pgno == VAR_3->pg.pgno)
  goto ret;







 while (VAR_7->pgno != VAR_3->pg.pgno) {
  if ((VAR_10 = VAR_7->nextpg) == VAR_0)
   break;
  FUNC_6(VAR_1->bt_mp, VAR_7, 0);


  for (VAR_13 = 0; (VAR_6 = FUNC_0(VAR_1)) != ((void*)0); ++VAR_13) {

   if ((VAR_7 = FUNC_5(VAR_1->bt_mp, VAR_6->pgno, 0)) == ((void*)0))
    return (1);


   if (VAR_6->index != FUNC_3(VAR_7) - 1) {
    VAR_8 = VAR_6->index + 1;
    FUNC_1(VAR_1, VAR_7->pgno, VAR_8);
    break;
   }
   FUNC_6(VAR_1->bt_mp, VAR_7, 0);
  }


  while (VAR_13--) {

   VAR_4 = FUNC_2(VAR_7, VAR_8);
   VAR_9 = VAR_4->pgno;
   FUNC_1(VAR_1, VAR_9, 0);


   FUNC_6(VAR_1->bt_mp, VAR_7, 0);


   if ((VAR_7 = FUNC_5(VAR_1->bt_mp, VAR_9, 0)) == ((void*)0))
    return (1);
   VAR_8 = 0;
  }
  FUNC_6(VAR_1->bt_mp, VAR_7, 0);
  if ((VAR_7 = FUNC_5(VAR_1->bt_mp, VAR_10, 0)) == ((void*)0))
   return (1);
 }

 if (VAR_7->pgno == VAR_3->pg.pgno)
  goto ret;


 FUNC_6(VAR_1->bt_mp, VAR_7, 0);
 if ((VAR_5 = FUNC_4(VAR_1, &VAR_3->key, &VAR_12)) == ((void*)0))
  return (1);
 VAR_7 = VAR_5->page;







 while (VAR_7->pgno != VAR_3->pg.pgno) {
  if ((VAR_11 = VAR_7->prevpg) == VAR_0)
   break;
  FUNC_6(VAR_1->bt_mp, VAR_7, 0);


  for (VAR_13 = 0; (VAR_6 = FUNC_0(VAR_1)) != ((void*)0); ++VAR_13) {

   if ((VAR_7 = FUNC_5(VAR_1->bt_mp, VAR_6->pgno, 0)) == ((void*)0))
    return (1);


   if (VAR_6->index != 0) {
    VAR_8 = VAR_6->index - 1;
    FUNC_1(VAR_1, VAR_7->pgno, VAR_8);
    break;
   }
   FUNC_6(VAR_1->bt_mp, VAR_7, 0);
  }


  while (VAR_13--) {

   VAR_4 = FUNC_2(VAR_7, VAR_8);
   VAR_9 = VAR_4->pgno;


   FUNC_6(VAR_1->bt_mp, VAR_7, 0);


   if ((VAR_7 = FUNC_5(VAR_1->bt_mp, VAR_9, 0)) == ((void*)0))
    return (1);

   VAR_8 = FUNC_3(VAR_7) - 1;
   FUNC_1(VAR_1, VAR_9, VAR_8);
  }
  FUNC_6(VAR_1->bt_mp, VAR_7, 0);
  if ((VAR_7 = FUNC_5(VAR_1->bt_mp, VAR_11, 0)) == ((void*)0))
   return (1);
 }


ret: FUNC_6(VAR_1->bt_mp, VAR_7, 0);
 return ((*VAR_2 = FUNC_5(VAR_1->bt_mp, VAR_3->pg.pgno, 0)) == ((void*)0));
}
