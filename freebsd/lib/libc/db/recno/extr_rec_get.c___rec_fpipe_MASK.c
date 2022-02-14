
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ recno_t ;
struct TYPE_8__ {size_t size; int* data; } ;
struct TYPE_10__ {size_t bt_reclen; scalar_t__ bt_nrecs; int bt_bval; int bt_rfp; TYPE_1__ bt_rdata; } ;
struct TYPE_9__ {int* data; size_t size; } ;
typedef TYPE_2__ DBT ;
typedef TYPE_3__ BTREE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int ,size_t) ;
 int* FUNC_4 (int*,size_t) ;

int
FUNC_5(BTREE *VAR_5, recno_t VAR_6)
{
 DBT VAR_7;
 recno_t VAR_8;
 size_t VAR_9;
 int VAR_10;
 u_char *VAR_11;

 if (VAR_5->bt_rdata.size < VAR_5->bt_reclen) {
  VAR_5->bt_rdata.data = FUNC_4(VAR_5->bt_rdata.data, VAR_5->bt_reclen);
  if (VAR_5->bt_rdata.data == ((void*)0))
   return (VAR_1);
  VAR_5->bt_rdata.size = VAR_5->bt_reclen;
 }
 VAR_7.data = VAR_5->bt_rdata.data;
 VAR_7.size = VAR_5->bt_reclen;

 for (VAR_8 = VAR_5->bt_nrecs; VAR_8 < VAR_6;) {
  VAR_9 = VAR_5->bt_reclen;
  for (VAR_11 = VAR_5->bt_rdata.data;; *VAR_11++ = VAR_10)
   if ((VAR_10 = FUNC_2(VAR_5->bt_rfp)) == VAR_0 || !--VAR_9) {
    if (VAR_10 != VAR_0)
     *VAR_11 = VAR_10;
    if (VAR_9 != 0)
     FUNC_3(VAR_11, VAR_5->bt_bval, VAR_9);
    if (FUNC_1(VAR_5,
        VAR_8, &VAR_7, 0) != VAR_3)
     return (VAR_1);
    ++VAR_8;
    break;
   }
  if (VAR_10 == VAR_0)
   break;
 }
 if (VAR_8 < VAR_6) {
  FUNC_0(VAR_5, VAR_4);
  return (VAR_2);
 }
 return (VAR_3);
}
