
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ recno_t ;
typedef int pgno_t ;
typedef scalar_t__ indx_t ;
typedef enum SRCHOP { ____Placeholder_SRCHOP } SRCHOP ;
struct TYPE_20__ {scalar_t__ index; TYPE_2__* page; } ;
struct TYPE_21__ {int bt_mp; TYPE_4__ bt_cur; } ;
struct TYPE_19__ {scalar_t__ index; int pgno; } ;
struct TYPE_18__ {int flags; } ;
struct TYPE_17__ {scalar_t__ nrecs; int pgno; } ;
typedef TYPE_1__ RINTERNAL ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ EPGNO ;
typedef TYPE_4__ EPG ;
typedef TYPE_5__ BTREE ;


 int FUNC_0 (TYPE_5__*) ;
 TYPE_3__* FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_2__*,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 TYPE_2__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,TYPE_2__*,int ) ;

EPG *
FUNC_7(BTREE *VAR_4, recno_t VAR_5, enum SRCHOP VAR_6)
{
 indx_t VAR_7;
 PAGE *VAR_8;
 EPGNO *VAR_9;
 RINTERNAL *VAR_10;
 pgno_t VAR_11;
 indx_t VAR_12;
 recno_t VAR_13;
 int VAR_14;

 FUNC_0(VAR_4);
 for (VAR_11 = VAR_2, VAR_13 = 0;;) {
  if ((VAR_8 = FUNC_5(VAR_4->bt_mp, VAR_11, 0)) == ((void*)0))
   goto err;
  if (VAR_8->flags & VAR_1) {
   VAR_4->bt_cur.page = VAR_8;
   VAR_4->bt_cur.index = VAR_5 - VAR_13;
   return (&VAR_4->bt_cur);
  }
  for (VAR_7 = 0, VAR_12 = FUNC_4(VAR_8);;) {
   VAR_10 = FUNC_3(VAR_8, VAR_7);
   if (++VAR_7 == VAR_12 || VAR_13 + VAR_10->nrecs > VAR_5)
    break;
   VAR_13 += VAR_10->nrecs;
  }

  FUNC_2(VAR_4, VAR_11, VAR_7 - 1);

  VAR_11 = VAR_10->pgno;
  switch (VAR_6) {
  case 130:
   --FUNC_3(VAR_8, (VAR_7 - 1))->nrecs;
   FUNC_6(VAR_4->bt_mp, VAR_8, VAR_0);
   break;
  case 128:
   ++FUNC_3(VAR_8, (VAR_7 - 1))->nrecs;
   FUNC_6(VAR_4->bt_mp, VAR_8, VAR_0);
   break;
  case 129:
   FUNC_6(VAR_4->bt_mp, VAR_8, 0);
   break;
  }

 }

err: VAR_14 = VAR_3;
 if (VAR_6 != 129)
  while ((VAR_9 = FUNC_1(VAR_4)) != ((void*)0)) {
   if ((VAR_8 = FUNC_5(VAR_4->bt_mp, VAR_9->pgno, 0)) == ((void*)0))
    break;
   if (VAR_6 == 128)
    --FUNC_3(VAR_8, VAR_9->index)->nrecs;
   else
    ++FUNC_3(VAR_8, VAR_9->index)->nrecs;
   FUNC_6(VAR_4->bt_mp, VAR_8, VAR_0);
  }
 VAR_3 = VAR_14;
 return (((void*)0));
}
