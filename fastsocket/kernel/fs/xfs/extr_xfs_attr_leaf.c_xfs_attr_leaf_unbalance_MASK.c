
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


typedef int xfs_mount_t ;
struct TYPE_19__ {scalar_t__ blocksize; TYPE_15__* args; int * mp; } ;
typedef TYPE_3__ xfs_da_state_t ;
struct TYPE_20__ {scalar_t__ magic; void* hashval; TYPE_7__* bp; } ;
typedef TYPE_4__ xfs_da_state_blk_t ;
struct TYPE_17__ {scalar_t__ magic; } ;
struct TYPE_22__ {scalar_t__ holes; scalar_t__ count; scalar_t__ usedbytes; void* firstused; TYPE_1__ info; } ;
struct TYPE_21__ {TYPE_6__ hdr; TYPE_2__* entries; } ;
typedef TYPE_5__ xfs_attr_leafblock_t ;
typedef TYPE_6__ xfs_attr_leaf_hdr_t ;
struct TYPE_23__ {TYPE_5__* data; } ;
struct TYPE_18__ {int hashval; } ;
struct TYPE_16__ {int trans; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 char* FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,scalar_t__) ;
 int FUNC_7 (char*,int ,scalar_t__) ;
 int FUNC_8 (TYPE_15__*) ;
 int FUNC_9 (TYPE_5__*,int ,TYPE_5__*,int,int,int *) ;
 scalar_t__ FUNC_10 (TYPE_7__*,TYPE_7__*) ;
 int FUNC_11 (int ,TYPE_7__*,int ,int ) ;

void
FUNC_12(xfs_da_state_t *VAR_3, xfs_da_state_blk_t *VAR_4,
           xfs_da_state_blk_t *VAR_5)
{
 xfs_attr_leafblock_t *VAR_6, *VAR_7, *VAR_8;
 xfs_attr_leaf_hdr_t *VAR_9, *VAR_10, *VAR_11;
 xfs_mount_t *VAR_12;
 char *VAR_13;

 FUNC_8(VAR_3->args);




 VAR_12 = VAR_3->mp;
 FUNC_0(VAR_4->magic == VAR_1);
 FUNC_0(VAR_5->magic == VAR_1);
 VAR_6 = VAR_4->bp->data;
 VAR_7 = VAR_5->bp->data;
 FUNC_0(FUNC_1(VAR_6->hdr.info.magic) == VAR_1);
 FUNC_0(FUNC_1(VAR_7->hdr.info.magic) == VAR_1);
 VAR_9 = &VAR_6->hdr;
 VAR_10 = &VAR_7->hdr;




 VAR_4->hashval = FUNC_2(
  VAR_6->entries[FUNC_1(VAR_6->hdr.count)-1].hashval);






 if (VAR_10->holes == 0) {




  if (FUNC_10(VAR_5->bp, VAR_4->bp)) {
   FUNC_9(VAR_6, 0, VAR_7, 0,
        FUNC_1(VAR_9->count), VAR_12);
  } else {
   FUNC_9(VAR_6, 0, VAR_7,
      FUNC_1(VAR_10->count),
      FUNC_1(VAR_9->count), VAR_12);
  }
 } else {




  VAR_13 = FUNC_4(VAR_3->blocksize, VAR_0);
  FUNC_0(VAR_13 != ((void*)0));
  FUNC_7(VAR_13, 0, VAR_3->blocksize);
  VAR_8 = (xfs_attr_leafblock_t *)VAR_13;
  VAR_11 = &VAR_8->hdr;
  VAR_11->info = VAR_10->info;
  VAR_11->count = 0;
  VAR_11->firstused = FUNC_3(VAR_3->blocksize);
  if (!VAR_11->firstused) {
   VAR_11->firstused = FUNC_3(
    VAR_3->blocksize - VAR_2);
  }
  VAR_11->usedbytes = 0;
  if (FUNC_10(VAR_5->bp, VAR_4->bp)) {
   FUNC_9(VAR_6, 0, VAR_8, 0,
    FUNC_1(VAR_9->count), VAR_12);
   FUNC_9(VAR_7, 0, VAR_8,
      FUNC_1(VAR_8->hdr.count),
      FUNC_1(VAR_10->count), VAR_12);
  } else {
   FUNC_9(VAR_7, 0, VAR_8, 0,
    FUNC_1(VAR_10->count), VAR_12);
   FUNC_9(VAR_6, 0, VAR_8,
    FUNC_1(VAR_8->hdr.count),
    FUNC_1(VAR_9->count), VAR_12);
  }
  FUNC_6((char *)VAR_7, (char *)VAR_8, VAR_3->blocksize);
  FUNC_5(VAR_13);
 }

 FUNC_11(VAR_3->args->trans, VAR_5->bp, 0,
        VAR_3->blocksize - 1);




 VAR_5->hashval = FUNC_2(
  VAR_7->entries[FUNC_1(VAR_7->hdr.count)-1].hashval);
}
