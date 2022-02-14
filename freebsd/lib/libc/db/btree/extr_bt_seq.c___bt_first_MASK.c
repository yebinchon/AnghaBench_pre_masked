
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ pgno_t ;
struct TYPE_16__ {int bt_mp; } ;
struct TYPE_15__ {scalar_t__ index; TYPE_1__* page; } ;
struct TYPE_14__ {scalar_t__ pgno; scalar_t__ prevpg; scalar_t__ nextpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ EPG ;
typedef int DBT ;
typedef TYPE_3__ BTREE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int const*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int const*,int*) ;
 TYPE_1__* FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int ,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_6(BTREE *VAR_5, const DBT *VAR_6, EPG *VAR_7, int *VAR_8)
{
 PAGE *VAR_9;
 EPG *VAR_10, VAR_11;
 pgno_t VAR_12;
 if ((VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_8)) == ((void*)0))
  return (0);
 if (*VAR_8) {
  if (FUNC_0(VAR_5, VAR_0)) {
   *VAR_7 = *VAR_10;
   return (VAR_4);
  }






  VAR_11 = *VAR_10;
  VAR_9 = VAR_10->page;
  do {
   if (VAR_11.page->pgno != VAR_10->page->pgno) {
    FUNC_5(VAR_5->bt_mp, VAR_11.page, 0);
    VAR_11 = *VAR_10;
   } else
    VAR_11.index = VAR_10->index;






   if (VAR_10->index == 0) {
    if (VAR_9->prevpg == VAR_1)
     break;
    if (VAR_9->pgno != VAR_11.page->pgno)
     FUNC_5(VAR_5->bt_mp, VAR_9, 0);
    if ((VAR_9 = FUNC_4(VAR_5->bt_mp,
        VAR_9->prevpg, 0)) == ((void*)0)) {
     if (VAR_9->pgno == VAR_11.page->pgno)
      FUNC_5(VAR_5->bt_mp,
          VAR_11.page, 0);
     return (VAR_2);
    }
    VAR_10->page = VAR_9;
    VAR_10->index = FUNC_1(VAR_9);
   }
   --VAR_10->index;
  } while (FUNC_2(VAR_5, VAR_6, VAR_10) == 0);






  if (VAR_9->pgno != VAR_11.page->pgno)
   FUNC_5(VAR_5->bt_mp, VAR_9, 0);

  *VAR_7 = VAR_11;
  return (VAR_4);
 }


 if (VAR_10->index == FUNC_1(VAR_10->page)) {
  VAR_9 = VAR_10->page;
  VAR_12 = VAR_9->nextpg;
  FUNC_5(VAR_5->bt_mp, VAR_9, 0);
  if (VAR_12 == VAR_1)
   return (VAR_3);
  if ((VAR_9 = FUNC_4(VAR_5->bt_mp, VAR_12, 0)) == ((void*)0))
   return (VAR_2);
  VAR_10->index = 0;
  VAR_10->page = VAR_9;
 }
 *VAR_7 = *VAR_10;
 return (VAR_4);
}
