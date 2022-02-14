
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u_int32_t ;
typedef int pgno_t ;
struct TYPE_11__ {int bt_psize; int bt_mp; } ;
struct TYPE_10__ {size_t size; void* data; } ;
struct TYPE_9__ {int pgno; int nextpg; scalar_t__ upper; scalar_t__ lower; int flags; int prevpg; } ;
typedef TYPE_1__ PAGE ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ BTREE ;


 int VAR_0 ;
 size_t FUNC_0 (size_t,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (char*,void*,size_t) ;
 int FUNC_3 (int ,TYPE_1__*,int ) ;

int
FUNC_4(BTREE *VAR_6, const DBT *VAR_7, pgno_t *VAR_8)
{
 PAGE *VAR_9, *VAR_10;
 void *VAR_11;
 pgno_t VAR_12;
 size_t VAR_13, VAR_14;
 u_int32_t VAR_15;





 VAR_14 = VAR_6->bt_psize - VAR_0;
 for (VAR_10 = ((void*)0), VAR_11 = VAR_7->data, VAR_15 = VAR_7->size;;
     VAR_11 = (char *)VAR_11 + VAR_14, VAR_10 = VAR_9) {
  if ((VAR_9 = FUNC_1(VAR_6, &VAR_12)) == ((void*)0))
   return (VAR_4);

  VAR_9->pgno = VAR_12;
  VAR_9->nextpg = VAR_9->prevpg = VAR_2;
  VAR_9->flags = VAR_3;
  VAR_9->lower = VAR_9->upper = 0;

  VAR_13 = FUNC_0(VAR_15, VAR_14);
  FUNC_2((char *)VAR_9 + VAR_0, VAR_11, VAR_13);

  if (VAR_10) {
   VAR_10->nextpg = VAR_9->pgno;
   FUNC_3(VAR_6->bt_mp, VAR_10, VAR_1);
  } else
   *VAR_8 = VAR_9->pgno;

  if ((VAR_15 -= VAR_13) == 0) {
   FUNC_3(VAR_6->bt_mp, VAR_9, VAR_1);
   break;
  }
 }
 return (VAR_5);
}
