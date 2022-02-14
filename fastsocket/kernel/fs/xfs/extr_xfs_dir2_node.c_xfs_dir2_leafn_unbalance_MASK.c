
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_11__ ;


struct TYPE_20__ {int magic; } ;
struct TYPE_22__ {int count; scalar_t__ stale; TYPE_1__ info; } ;
struct TYPE_23__ {TYPE_3__ hdr; TYPE_2__* ents; } ;
typedef TYPE_4__ xfs_dir2_leaf_t ;
struct TYPE_24__ {TYPE_7__* args; } ;
typedef TYPE_5__ xfs_da_state_t ;
struct TYPE_25__ {scalar_t__ magic; TYPE_11__* bp; void* hashval; } ;
typedef TYPE_6__ xfs_da_state_blk_t ;
struct TYPE_26__ {int dp; } ;
typedef TYPE_7__ xfs_da_args_t ;
struct TYPE_21__ {int hashval; } ;
struct TYPE_19__ {TYPE_4__* data; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_7__*,TYPE_11__*) ;
 int FUNC_4 (int ,TYPE_11__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_11__*,int ,TYPE_11__*,int,int) ;
 scalar_t__ FUNC_6 (TYPE_11__*,TYPE_11__*) ;

void
FUNC_7(
 xfs_da_state_t *VAR_1,
 xfs_da_state_blk_t *VAR_2,
 xfs_da_state_blk_t *VAR_3)
{
 xfs_da_args_t *VAR_4;
 xfs_dir2_leaf_t *VAR_5;
 xfs_dir2_leaf_t *VAR_6;

 VAR_4 = VAR_1->args;
 FUNC_0(VAR_2->magic == VAR_0);
 FUNC_0(VAR_3->magic == VAR_0);
 VAR_5 = VAR_2->bp->data;
 VAR_6 = VAR_3->bp->data;
 FUNC_0(FUNC_1(VAR_5->hdr.info.magic) == VAR_0);
 FUNC_0(FUNC_1(VAR_6->hdr.info.magic) == VAR_0);




 if (VAR_5->hdr.stale)
  FUNC_3(VAR_4, VAR_2->bp);
 if (VAR_6->hdr.stale)
  FUNC_3(VAR_4, VAR_3->bp);



 VAR_2->hashval = FUNC_2(VAR_5->ents[FUNC_1(VAR_5->hdr.count) - 1].hashval);
 if (FUNC_6(VAR_3->bp, VAR_2->bp))
  FUNC_5(VAR_4, VAR_2->bp, 0, VAR_3->bp, 0,
   FUNC_1(VAR_5->hdr.count));
 else
  FUNC_5(VAR_4, VAR_2->bp, 0, VAR_3->bp,
   FUNC_1(VAR_6->hdr.count), FUNC_1(VAR_5->hdr.count));
 VAR_3->hashval = FUNC_2(VAR_6->ents[FUNC_1(VAR_6->hdr.count) - 1].hashval);
 FUNC_4(VAR_4->dp, VAR_3->bp);
}
