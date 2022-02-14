
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {TYPE_5__* data; } ;
typedef TYPE_3__ xfs_dabuf_t ;
struct TYPE_20__ {scalar_t__ index; int dp; int trans; int blkno; } ;
typedef TYPE_4__ xfs_da_args_t ;
struct TYPE_17__ {int magic; } ;
struct TYPE_18__ {int count; TYPE_1__ info; } ;
struct TYPE_21__ {TYPE_6__* entries; TYPE_2__ hdr; } ;
typedef TYPE_5__ xfs_attr_leafblock_t ;
struct TYPE_22__ {int flags; scalar_t__ valuelen; scalar_t__ valueblk; } ;
typedef TYPE_6__ xfs_attr_leaf_name_remote_t ;
typedef TYPE_6__ xfs_attr_leaf_entry_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*) ;
 TYPE_6__* FUNC_4 (TYPE_5__*,size_t) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*,int ) ;
 int FUNC_7 (int ,int ,int ,int,TYPE_3__**,int ) ;
 int FUNC_8 (int *,int ) ;

int
FUNC_9(xfs_da_args_t *VAR_4)
{
 xfs_attr_leafblock_t *VAR_5;
 xfs_attr_leaf_entry_t *VAR_6;
 xfs_attr_leaf_name_remote_t *VAR_7;
 xfs_dabuf_t *VAR_8;
 int VAR_9;

 FUNC_3(VAR_4);




 VAR_9 = FUNC_7(VAR_4->trans, VAR_4->dp, VAR_4->blkno, -1, &VAR_8,
          VAR_0);
 if (VAR_9) {
  return(VAR_9);
 }
 FUNC_0(VAR_8 != ((void*)0));

 VAR_5 = VAR_8->data;
 FUNC_0(FUNC_2(VAR_5->hdr.info.magic) == VAR_2);
 FUNC_0(VAR_4->index < FUNC_2(VAR_5->hdr.count));
 FUNC_0(VAR_4->index >= 0);
 VAR_6 = &VAR_5->entries[ VAR_4->index ];

 FUNC_0((VAR_6->flags & VAR_1) == 0);
 VAR_6->flags |= VAR_1;
 FUNC_6(VAR_4->trans, VAR_8,
   FUNC_1(VAR_5, VAR_6, sizeof(*VAR_6)));
 if ((VAR_6->flags & VAR_3) == 0) {
  VAR_7 = FUNC_4(VAR_5, VAR_4->index);
  VAR_7->valueblk = 0;
  VAR_7->valuelen = 0;
  FUNC_6(VAR_4->trans, VAR_8,
    FUNC_1(VAR_5, VAR_7, sizeof(*VAR_7)));
 }
 FUNC_5(VAR_8);




 return FUNC_8(&VAR_4->trans, VAR_4->dp);
}
