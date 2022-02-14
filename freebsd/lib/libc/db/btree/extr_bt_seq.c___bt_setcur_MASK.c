
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int ;
typedef int pgno_t ;
struct TYPE_7__ {int index; int pgno; } ;
struct TYPE_8__ {int * data; scalar_t__ size; } ;
struct TYPE_10__ {TYPE_1__ pg; TYPE_2__ key; } ;
struct TYPE_9__ {TYPE_5__ bt_cursor; } ;
typedef TYPE_3__ BTREE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(BTREE *VAR_4, pgno_t VAR_5, u_int VAR_6)
{

 if (VAR_4->bt_cursor.key.data != ((void*)0)) {
  FUNC_2(VAR_4->bt_cursor.key.data);
  VAR_4->bt_cursor.key.size = 0;
  VAR_4->bt_cursor.key.data = ((void*)0);
 }
 FUNC_0(&VAR_4->bt_cursor, VAR_0 | VAR_1 | VAR_2);


 VAR_4->bt_cursor.pg.pgno = VAR_5;
 VAR_4->bt_cursor.pg.index = VAR_6;
 FUNC_1(&VAR_4->bt_cursor, VAR_3);
}
