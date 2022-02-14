
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef scalar_t__ recno_t ;
struct TYPE_18__ {scalar_t__ bt_nrecs; int (* bt_irec ) (TYPE_4__*,scalar_t__) ;int * bt_pinned; int bt_mp; } ;
struct TYPE_17__ {TYPE_4__* internal; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {int * page; } ;
typedef TYPE_1__ EPG ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ DB ;
typedef TYPE_4__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_4__*,TYPE_1__*,int ,int *,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (TYPE_4__*,scalar_t__,int ) ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (TYPE_4__*,scalar_t__) ;

int
FUNC_5(const DB *VAR_9, const DBT *VAR_10, DBT *VAR_11, u_int VAR_12)
{
 BTREE *VAR_13;
 EPG *VAR_14;
 recno_t VAR_15;
 int VAR_16;

 VAR_13 = VAR_9->internal;


 if (VAR_13->bt_pinned != ((void*)0)) {
  FUNC_3(VAR_13->bt_mp, VAR_13->bt_pinned, 0);
  VAR_13->bt_pinned = ((void*)0);
 }


 if (VAR_12 || (VAR_15 = *(recno_t *)VAR_10->data) == 0) {
  VAR_8 = VAR_1;
  return (VAR_2);
 }





 if (VAR_15 > VAR_13->bt_nrecs) {
  if (FUNC_0(VAR_13, VAR_5 | VAR_6))
   return (VAR_3);
  if ((VAR_16 = VAR_13->bt_irec(VAR_13, VAR_15)) != VAR_4)
   return (VAR_16);
 }

 --VAR_15;
 if ((VAR_14 = FUNC_2(VAR_13, VAR_15, VAR_7)) == ((void*)0))
  return (VAR_2);

 VAR_16 = FUNC_1(VAR_13, VAR_14, 0, ((void*)0), VAR_11);
 if (FUNC_0(VAR_13, VAR_0))
  FUNC_3(VAR_13->bt_mp, VAR_14->page, 0);
 else
  VAR_13->bt_pinned = VAR_14->page;
 return (VAR_16);
}
