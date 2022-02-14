
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int recno_t ;
struct TYPE_15__ {int size; int * data; } ;
struct TYPE_14__ {int size; int * data; } ;
struct TYPE_19__ {TYPE_2__ bt_rdata; TYPE_1__ bt_rkey; } ;
struct TYPE_18__ {int size; int * data; } ;
struct TYPE_17__ {int index; int page; } ;
struct TYPE_16__ {int flags; int dsize; int * bytes; } ;
typedef TYPE_3__ RLEAF ;
typedef TYPE_4__ EPG ;
typedef TYPE_5__ DBT ;
typedef TYPE_6__ BTREE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_6__*,int ) ;
 TYPE_3__* FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_6__*,int *,int*,int **,int*) ;
 int FUNC_3 (int *,int *,int) ;
 void* FUNC_4 (int *,int) ;

int
FUNC_5(BTREE *VAR_4, EPG *VAR_5, recno_t VAR_6, DBT *VAR_7, DBT *VAR_8)
{
 RLEAF *VAR_9;
 void *VAR_10;

 if (VAR_7 == ((void*)0))
  goto dataonly;


 if (sizeof(recno_t) > VAR_4->bt_rkey.size) {
  VAR_10 = FUNC_4(VAR_4->bt_rkey.data, sizeof(recno_t));
  if (VAR_10 == ((void*)0))
   return (VAR_2);
  VAR_4->bt_rkey.data = VAR_10;
  VAR_4->bt_rkey.size = sizeof(recno_t);
 }
 FUNC_3(VAR_4->bt_rkey.data, &VAR_6, sizeof(recno_t));
 VAR_7->size = sizeof(recno_t);
 VAR_7->data = VAR_4->bt_rkey.data;

dataonly:
 if (VAR_8 == ((void*)0))
  return (VAR_3);






 VAR_9 = FUNC_1(VAR_5->page, VAR_5->index);
 if (VAR_9->flags & VAR_1) {
  if (FUNC_2(VAR_4, VAR_9->bytes,
      &VAR_8->size, &VAR_4->bt_rdata.data, &VAR_4->bt_rdata.size))
   return (VAR_2);
  VAR_8->data = VAR_4->bt_rdata.data;
 } else if (FUNC_0(VAR_4, VAR_0)) {

  if (VAR_9->dsize + 1 > VAR_4->bt_rdata.size) {
   VAR_10 = FUNC_4(VAR_4->bt_rdata.data, VAR_9->dsize + 1);
   if (VAR_10 == ((void*)0))
    return (VAR_2);
   VAR_4->bt_rdata.data = VAR_10;
   VAR_4->bt_rdata.size = VAR_9->dsize + 1;
  }
  FUNC_3(VAR_4->bt_rdata.data, VAR_9->bytes, VAR_9->dsize);
  VAR_8->size = VAR_9->dsize;
  VAR_8->data = VAR_4->bt_rdata.data;
 } else {
  VAR_8->size = VAR_9->dsize;
  VAR_8->data = VAR_9->bytes;
 }
 return (VAR_3);
}
