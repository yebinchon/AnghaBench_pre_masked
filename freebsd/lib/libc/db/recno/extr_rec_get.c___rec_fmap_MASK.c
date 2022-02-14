
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ recno_t ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {size_t size; int * data; } ;
struct TYPE_10__ {size_t bt_reclen; scalar_t__ bt_nrecs; scalar_t__ bt_cmap; int bt_bval; TYPE_1__ bt_rdata; scalar_t__ bt_emap; } ;
struct TYPE_9__ {size_t size; int * data; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ BTREE ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,TYPE_2__*,int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 int * FUNC_3 (int *,size_t) ;

int
FUNC_4(BTREE *VAR_4, recno_t VAR_5)
{
 DBT VAR_6;
 recno_t VAR_7;
 u_char *VAR_8, *VAR_9, *VAR_10;
 size_t VAR_11;

 if (VAR_4->bt_rdata.size < VAR_4->bt_reclen) {
  VAR_4->bt_rdata.data = FUNC_3(VAR_4->bt_rdata.data, VAR_4->bt_reclen);
  if (VAR_4->bt_rdata.data == ((void*)0))
   return (VAR_0);
  VAR_4->bt_rdata.size = VAR_4->bt_reclen;
 }
 VAR_6.data = VAR_4->bt_rdata.data;
 VAR_6.size = VAR_4->bt_reclen;

 VAR_8 = (u_char *)VAR_4->bt_cmap;
 VAR_9 = (u_char *)VAR_4->bt_emap;
 for (VAR_7 = VAR_4->bt_nrecs; VAR_7 < VAR_5; ++VAR_7) {
  if (VAR_8 >= VAR_9) {
   FUNC_0(VAR_4, VAR_3);
   return (VAR_1);
  }
  VAR_11 = VAR_4->bt_reclen;
  for (VAR_10 = VAR_4->bt_rdata.data;
      VAR_8 < VAR_9 && VAR_11 > 0; *VAR_10++ = *VAR_8++, --VAR_11);
  if (VAR_11 != 0)
   FUNC_2(VAR_10, VAR_4->bt_bval, VAR_11);
  if (FUNC_1(VAR_4, VAR_7, &VAR_6, 0) != VAR_2)
   return (VAR_0);
 }
 VAR_4->bt_cmap = (caddr_t)VAR_8;
 return (VAR_2);
}
