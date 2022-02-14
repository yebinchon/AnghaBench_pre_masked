
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
typedef int recno_t ;
struct TYPE_12__ {int rcursor; } ;
struct TYPE_11__ {TYPE_8__ bt_cursor; int bt_nrecs; int * bt_pinned; int bt_mp; } ;
struct TYPE_10__ {TYPE_3__* internal; } ;
struct TYPE_9__ {scalar_t__ data; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;
typedef TYPE_3__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;

int
FUNC_4(const DB *VAR_8, const DBT *VAR_9, u_int VAR_10)
{
 BTREE *VAR_11;
 recno_t VAR_12;
 int VAR_13;

 VAR_11 = VAR_8->internal;


 if (VAR_11->bt_pinned != ((void*)0)) {
  FUNC_2(VAR_11->bt_mp, VAR_11->bt_pinned, 0);
  VAR_11->bt_pinned = ((void*)0);
 }

 switch(VAR_10) {
 case 0:
  if ((VAR_12 = *(recno_t *)VAR_9->data) == 0)
   goto einval;
  if (VAR_12 > VAR_11->bt_nrecs)
   return (VAR_4);
  --VAR_12;
  VAR_13 = FUNC_3(VAR_11, VAR_12);
  break;
 case 128:
  if (!FUNC_0(&VAR_11->bt_cursor, VAR_1))
   goto einval;
  if (VAR_11->bt_nrecs == 0)
   return (VAR_4);
  VAR_13 = FUNC_3(VAR_11, VAR_11->bt_cursor.rcursor - 1);
  if (VAR_13 == VAR_5)
   --VAR_11->bt_cursor.rcursor;
  break;
 default:
einval: VAR_7 = VAR_2;
  return (VAR_3);
 }

 if (VAR_13 == VAR_5)
  FUNC_1(VAR_11, VAR_0 | VAR_6);
 return (VAR_13);
}
