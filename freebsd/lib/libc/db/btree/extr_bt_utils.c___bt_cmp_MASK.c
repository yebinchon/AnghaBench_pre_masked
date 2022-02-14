
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_24__ {int flags; int ksize; void* bytes; } ;
struct TYPE_23__ {int flags; int ksize; void* bytes; } ;
struct TYPE_18__ {void* data; int size; } ;
struct TYPE_22__ {int (* bt_cmp ) (TYPE_4__ const*,TYPE_4__*) ;TYPE_1__ bt_rdata; } ;
struct TYPE_21__ {void* data; int size; } ;
struct TYPE_20__ {int index; TYPE_2__* page; } ;
struct TYPE_19__ {scalar_t__ prevpg; int flags; } ;
typedef TYPE_2__ PAGE ;
typedef TYPE_3__ EPG ;
typedef TYPE_4__ DBT ;
typedef TYPE_5__ BTREE ;
typedef TYPE_6__ BLEAF ;
typedef TYPE_7__ BINTERNAL ;


 TYPE_7__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_6__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_5__*,void*,int *,void**,int *) ;
 int FUNC_3 (TYPE_4__ const*,TYPE_4__*) ;

int
FUNC_4(BTREE *VAR_4, const DBT *VAR_5, EPG *VAR_6)
{
 BINTERNAL *VAR_7;
 BLEAF *VAR_8;
 DBT VAR_9;
 PAGE *VAR_10;
 void *VAR_11;
 VAR_10 = VAR_6->page;
 if (VAR_6->index == 0 && VAR_10->prevpg == VAR_2 && !(VAR_10->flags & VAR_1))
  return (1);

 VAR_11 = ((void*)0);
 if (VAR_10->flags & VAR_1) {
  VAR_8 = FUNC_1(VAR_10, VAR_6->index);
  if (VAR_8->flags & VAR_0)
   VAR_11 = VAR_8->bytes;
  else {
   VAR_9 = VAR_8->bytes;
   VAR_9 = VAR_8->ksize;
  }
 } else {
  VAR_7 = FUNC_0(VAR_10, VAR_6->index);
  if (VAR_7->flags & VAR_0)
   VAR_11 = VAR_7->bytes;
  else {
   VAR_9 = VAR_7->bytes;
   VAR_9 = VAR_7->ksize;
  }
 }

 if (VAR_11) {
  if (FUNC_2(VAR_4, VAR_11,
      &VAR_9, &VAR_4->bt_rdata.data, &VAR_4->bt_rdata.size))
   return (VAR_3);
  VAR_9 = VAR_4->bt_rdata.data;
 }
 return ((*VAR_4->bt_cmp)(VAR_5, &VAR_9));
}
