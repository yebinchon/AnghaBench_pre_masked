
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
typedef int indx_t ;
struct TYPE_18__ {int index; TYPE_2__* page; } ;
struct TYPE_16__ {int index; int pgno; } ;
struct TYPE_20__ {scalar_t__ bt_order; int bt_mp; TYPE_3__ bt_cur; TYPE_1__ bt_last; } ;
struct TYPE_19__ {int size; } ;
struct TYPE_17__ {scalar_t__ nextpg; scalar_t__ prevpg; scalar_t__ lower; scalar_t__ upper; } ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ EPG ;
typedef TYPE_4__ DBT ;
typedef TYPE_5__ BTREE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_5__*,TYPE_4__ const*,TYPE_3__*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static EPG *
FUNC_5(BTREE *VAR_5, const DBT *VAR_6, const DBT *VAR_7, int *VAR_8)
{
 PAGE *VAR_9;
 u_int32_t VAR_10;
 int VAR_11;

 if ((VAR_9 = FUNC_3(VAR_5->bt_mp, VAR_5->bt_last.pgno, 0)) == ((void*)0)) {
  VAR_5->bt_order = VAR_1;
  return (((void*)0));
 }
 VAR_5->bt_cur.page = VAR_9;
 VAR_5->bt_cur.index = VAR_5->bt_last.index;





 VAR_10 = FUNC_0(VAR_6->size, VAR_7->size);
 if ((u_int32_t)(VAR_9->upper - VAR_9->lower) < VAR_10 + sizeof(indx_t))
  goto miss;

 if (VAR_5->bt_order == VAR_0) {
  if (VAR_5->bt_cur.page->nextpg != VAR_2)
   goto miss;
  if (VAR_5->bt_cur.index != FUNC_1(VAR_9) - 1)
   goto miss;
  if ((VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_5->bt_cur)) < 0)
   goto miss;
  VAR_5->bt_last.index = VAR_11 ? ++VAR_5->bt_cur.index : VAR_5->bt_cur.index;
 } else {
  if (VAR_5->bt_cur.page->prevpg != VAR_2)
   goto miss;
  if (VAR_5->bt_cur.index != 0)
   goto miss;
  if ((VAR_11 = FUNC_2(VAR_5, VAR_6, &VAR_5->bt_cur)) > 0)
   goto miss;
  VAR_5->bt_last.index = 0;
 }
 *VAR_8 = VAR_11 == 0;



 return (&VAR_5->bt_cur);

miss:



 VAR_5->bt_order = VAR_1;
 FUNC_4(VAR_5->bt_mp, VAR_9, 0);
 return (((void*)0));
}
