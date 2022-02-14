
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ xfs_dahash_t ;
struct TYPE_20__ {TYPE_2__* args; } ;
typedef TYPE_4__ xfs_da_state_t ;
struct TYPE_21__ {int active; TYPE_6__* blk; } ;
typedef TYPE_5__ xfs_da_state_path_t ;
struct TYPE_22__ {int magic; size_t index; TYPE_9__* bp; scalar_t__ hashval; } ;
typedef TYPE_6__ xfs_da_state_blk_t ;
struct TYPE_23__ {int hashval; } ;
typedef TYPE_7__ xfs_da_node_entry_t ;
struct TYPE_17__ {int magic; } ;
struct TYPE_19__ {int count; TYPE_1__ info; } ;
struct TYPE_24__ {TYPE_3__ hdr; TYPE_7__* btree; } ;
typedef TYPE_8__ xfs_da_intnode_t ;
struct TYPE_25__ {TYPE_8__* data; } ;
struct TYPE_18__ {int trans; } ;


 int FUNC_0 (int) ;

 int FUNC_1 (TYPE_8__*,TYPE_7__*,int) ;


 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_9__*,int*) ;
 int FUNC_6 (int ,TYPE_9__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_9__*,int*) ;
 scalar_t__ FUNC_8 (TYPE_9__*,int*) ;

void
FUNC_9(xfs_da_state_t *VAR_0, xfs_da_state_path_t *VAR_1)
{
 xfs_da_state_blk_t *VAR_2;
 xfs_da_intnode_t *VAR_3;
 xfs_da_node_entry_t *VAR_4;
 xfs_dahash_t VAR_5=0;
 int VAR_6, VAR_7;

 VAR_6 = VAR_1->active-1;
 VAR_2 = &VAR_1->blk[ VAR_6 ];
 switch (VAR_2->magic) {
 case 130:
  VAR_5 = FUNC_5(VAR_2->bp, &VAR_7);
  if (VAR_7 == 0)
   return;
  break;
 case 128:
  VAR_5 = FUNC_8(VAR_2->bp, &VAR_7);
  if (VAR_7 == 0)
   return;
  break;
 case 129:
  VAR_5 = FUNC_7(VAR_2->bp, &VAR_7);
  if (VAR_7 == 0)
   return;
  break;
 }
 for (VAR_2--, VAR_6--; VAR_6 >= 0; VAR_2--, VAR_6--) {
  VAR_3 = VAR_2->bp->data;
  FUNC_0(FUNC_2(VAR_3->hdr.info.magic) == 129);
  VAR_4 = &VAR_3->btree[ VAR_2->index ];
  if (FUNC_3(VAR_4->hashval) == VAR_5)
   break;
  VAR_2->hashval = VAR_5;
  VAR_4->hashval = FUNC_4(VAR_5);
  FUNC_6(VAR_0->args->trans, VAR_2->bp,
      FUNC_1(VAR_3, VAR_4, sizeof(*VAR_4)));

  VAR_5 = FUNC_3(VAR_3->btree[FUNC_2(VAR_3->hdr.count)-1].hashval);
 }
}
