
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct TYPE_8__ {int bt_mp; int * bt_pinned; } ;
struct TYPE_7__ {TYPE_2__* internal; } ;
typedef TYPE_1__ DB ;
typedef TYPE_2__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_7 ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5(const DB *VAR_8, u_int VAR_9)
{
 BTREE *VAR_10;
 int VAR_11;

 VAR_10 = VAR_8->internal;


 if (VAR_10->bt_pinned != ((void*)0)) {
  FUNC_3(VAR_10->bt_mp, VAR_10->bt_pinned, 0);
  VAR_10->bt_pinned = ((void*)0);
 }


 if (VAR_9 != 0) {
  VAR_7 = VAR_4;
  return (VAR_5);
 }

 if (FUNC_1(VAR_10, VAR_0 | VAR_3) ||
     !FUNC_1(VAR_10, VAR_2 | VAR_1))
  return (VAR_6);

 if (FUNC_1(VAR_10, VAR_1) && FUNC_2(VAR_10) == VAR_5)
  return (VAR_5);

 if ((VAR_11 = FUNC_4(VAR_10->bt_mp)) == VAR_6)
  FUNC_0(VAR_10, VAR_2);

 return (VAR_11);
}
