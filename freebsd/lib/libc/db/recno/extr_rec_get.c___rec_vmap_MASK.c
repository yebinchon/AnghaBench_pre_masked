
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ recno_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {int bt_bval; scalar_t__ bt_nrecs; scalar_t__ bt_cmap; scalar_t__ bt_emap; } ;
struct TYPE_7__ {int* data; int size; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ BTREE ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,TYPE_1__*,int ) ;

int
FUNC_2(BTREE *VAR_4, recno_t VAR_5)
{
 DBT VAR_6;
 u_char *VAR_7, *VAR_8;
 recno_t VAR_9;
 int VAR_10;

 VAR_7 = (u_char *)VAR_4->bt_cmap;
 VAR_8 = (u_char *)VAR_4->bt_emap;
 VAR_10 = VAR_4->bt_bval;

 for (VAR_9 = VAR_4->bt_nrecs; VAR_9 < VAR_5; ++VAR_9) {
  if (VAR_7 >= VAR_8) {
   FUNC_0(VAR_4, VAR_3);
   return (VAR_1);
  }
  for (VAR_6.data = VAR_7; VAR_7 < VAR_8 && *VAR_7 != VAR_10; ++VAR_7);
  VAR_6.size = VAR_7 - (u_char *)VAR_6.data;
  if (FUNC_1(VAR_4, VAR_9, &VAR_6, 0) != VAR_2)
   return (VAR_0);
  ++VAR_7;
 }
 VAR_4->bt_cmap = (caddr_t)VAR_7;
 return (VAR_2);
}
