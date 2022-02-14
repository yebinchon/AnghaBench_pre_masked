
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ recno_t ;
struct TYPE_8__ {size_t size; int * data; } ;
struct TYPE_10__ {int bt_bval; scalar_t__ bt_nrecs; TYPE_1__ bt_rdata; int bt_rfp; } ;
struct TYPE_9__ {int size; int * data; } ;
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
 int * FUNC_3 (int *,size_t) ;

int
FUNC_4(BTREE *VAR_5, recno_t VAR_6)
{
 DBT VAR_7;
 recno_t VAR_8;
 size_t VAR_9;
 size_t VAR_10;
 int VAR_11, VAR_12;
 u_char *VAR_13;

 VAR_11 = VAR_5->bt_bval;
 for (VAR_8 = VAR_5->bt_nrecs; VAR_8 < VAR_6; ++VAR_8) {
  for (VAR_13 = VAR_5->bt_rdata.data,
      VAR_10 = VAR_5->bt_rdata.size;; *VAR_13++ = VAR_12, --VAR_10) {
   if ((VAR_12 = FUNC_2(VAR_5->bt_rfp)) == VAR_0 || VAR_12 == VAR_11) {
    VAR_7.data = VAR_5->bt_rdata.data;
    VAR_7.size = VAR_13 - (u_char *)VAR_5->bt_rdata.data;
    if (VAR_12 == VAR_0 && VAR_7.size == 0)
     break;
    if (FUNC_1(VAR_5, VAR_8, &VAR_7, 0)
        != VAR_3)
     return (VAR_1);
    break;
   }
   if (VAR_10 == 0) {
    VAR_9 = VAR_13 - (u_char *)VAR_5->bt_rdata.data;
    VAR_5->bt_rdata.size += (VAR_10 = 256);
    VAR_5->bt_rdata.data = FUNC_3(VAR_5->bt_rdata.data, VAR_5->bt_rdata.size);
    if (VAR_5->bt_rdata.data == ((void*)0))
     return (VAR_1);
    VAR_13 = (u_char *)VAR_5->bt_rdata.data + VAR_9;
   }
  }
  if (VAR_12 == VAR_0)
   break;
 }
 if (VAR_8 < VAR_6) {
  FUNC_0(VAR_5, VAR_4);
  return (VAR_2);
 }
 return (VAR_3);
}
