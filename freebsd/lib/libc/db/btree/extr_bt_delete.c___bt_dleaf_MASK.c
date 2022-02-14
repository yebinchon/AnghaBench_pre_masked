
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_14__ ;


typedef int u_int32_t ;
typedef size_t u_int ;
typedef scalar_t__ indx_t ;
struct TYPE_19__ {int flags; scalar_t__ ksize; scalar_t__ bytes; } ;
struct TYPE_16__ {scalar_t__ pgno; size_t index; } ;
struct TYPE_15__ {TYPE_1__ pg; } ;
struct TYPE_18__ {TYPE_14__ bt_cursor; } ;
struct TYPE_17__ {scalar_t__ pgno; int upper; scalar_t__* linp; int lower; } ;
typedef TYPE_2__ PAGE ;
typedef int DBT ;
typedef TYPE_3__ BTREE ;
typedef TYPE_4__ BLEAF ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_14__*,int ) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_4__*) ;
 size_t FUNC_3 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int const*,TYPE_2__*,size_t) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 int FUNC_6 (char*,char*,int) ;

int
FUNC_7(BTREE *VAR_6, const DBT *VAR_7, PAGE *VAR_8, u_int VAR_9)
{
 BLEAF *VAR_10;
 indx_t VAR_11, *VAR_12, VAR_13;
 u_int32_t VAR_14;
 void *VAR_15;
 char *VAR_16;


 if (FUNC_0(&VAR_6->bt_cursor, VAR_1) &&
     !FUNC_0(&VAR_6->bt_cursor, VAR_0) &&
     VAR_6->bt_cursor.pg.pgno == VAR_8->pgno && VAR_6->bt_cursor.pg.index == VAR_9 &&
     FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9))
  return (VAR_4);


 VAR_15 = VAR_10 = FUNC_1(VAR_8, VAR_9);
 if (VAR_10->flags & VAR_3 && FUNC_5(VAR_6, VAR_10->bytes) == VAR_4)
  return (VAR_4);
 if (VAR_10->flags & VAR_2 &&
     FUNC_5(VAR_6, VAR_10->bytes + VAR_10->ksize) == VAR_4)
  return (VAR_4);


 VAR_14 = FUNC_2(VAR_10);
 VAR_16 = (char *)VAR_8 + VAR_8->upper;
 FUNC_6(VAR_16 + VAR_14, VAR_16, (char *)VAR_15 - VAR_16);
 VAR_8->upper += VAR_14;


 VAR_13 = VAR_8->linp[VAR_9];
 for (VAR_11 = VAR_9, VAR_12 = &VAR_8->linp[0]; VAR_11--; ++VAR_12)
  if (VAR_12[0] < VAR_13)
   VAR_12[0] += VAR_14;
 for (VAR_11 = FUNC_3(VAR_8) - VAR_9; --VAR_11; ++VAR_12)
  VAR_12[0] = VAR_12[1] < VAR_13 ? VAR_12[1] + VAR_14 : VAR_12[1];
 VAR_8->lower -= sizeof(indx_t);


 if (FUNC_0(&VAR_6->bt_cursor, VAR_1) &&
     !FUNC_0(&VAR_6->bt_cursor, VAR_0) &&
     VAR_6->bt_cursor.pg.pgno == VAR_8->pgno && VAR_6->bt_cursor.pg.index > VAR_9)
  --VAR_6->bt_cursor.pg.index;

 return (VAR_5);
}
