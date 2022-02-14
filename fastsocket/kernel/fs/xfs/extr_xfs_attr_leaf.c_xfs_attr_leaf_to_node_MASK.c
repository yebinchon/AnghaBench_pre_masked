
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_27__ {int i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_28__ {TYPE_7__* data; } ;
typedef TYPE_6__ xfs_dabuf_t ;
typedef int xfs_dablk_t ;
struct TYPE_23__ {int magic; } ;
struct TYPE_26__ {int count; TYPE_1__ info; } ;
struct TYPE_29__ {TYPE_4__ hdr; TYPE_3__* btree; TYPE_2__* entries; } ;
typedef TYPE_7__ xfs_da_intnode_t ;
struct TYPE_30__ {int trans; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
typedef TYPE_7__ xfs_attr_leafblock_t ;
struct TYPE_25__ {int before; int hashval; } ;
struct TYPE_24__ {int hashval; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_7__*,TYPE_7__*,scalar_t__) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int ,TYPE_5__*,int ,int,TYPE_6__**,int ) ;
 int FUNC_9 (TYPE_8__*,int *) ;
 int FUNC_10 (int ,TYPE_6__*,int ,scalar_t__) ;
 int FUNC_11 (TYPE_8__*,int ,int,TYPE_6__**,int ) ;
 int FUNC_12 (int ,TYPE_5__*,int ,int,TYPE_6__**,int ) ;

int
FUNC_13(xfs_da_args_t *VAR_2)
{
 xfs_attr_leafblock_t *VAR_3;
 xfs_da_intnode_t *VAR_4;
 xfs_inode_t *VAR_5;
 xfs_dabuf_t *VAR_6, *VAR_7;
 xfs_dablk_t VAR_8;
 int VAR_9;

 FUNC_6(VAR_2);

 VAR_5 = VAR_2->dp;
 VAR_6 = VAR_7 = ((void*)0);
 VAR_9 = FUNC_9(VAR_2, &VAR_8);
 if (VAR_9)
  goto out;
 VAR_9 = FUNC_12(VAR_2->trans, VAR_2->dp, 0, -1, &VAR_6,
          VAR_0);
 if (VAR_9)
  goto out;
 FUNC_0(VAR_6 != ((void*)0));
 VAR_7 = ((void*)0);
 VAR_9 = FUNC_8(VAR_2->trans, VAR_2->dp, VAR_8, -1, &VAR_7,
         VAR_0);
 if (VAR_9)
  goto out;
 FUNC_0(VAR_7 != ((void*)0));
 FUNC_5(VAR_7->data, VAR_6->data, FUNC_1(VAR_5->i_mount));
 FUNC_7(VAR_6);
 VAR_6 = ((void*)0);
 FUNC_10(VAR_2->trans, VAR_7, 0, FUNC_1(VAR_5->i_mount) - 1);




 VAR_9 = FUNC_11(VAR_2, 0, 1, &VAR_6, VAR_0);
 if (VAR_9)
  goto out;
 VAR_4 = VAR_6->data;
 VAR_3 = VAR_7->data;
 FUNC_0(FUNC_2(VAR_3->hdr.info.magic) == VAR_1);

 VAR_4->btree[0].hashval =
  VAR_3->entries[FUNC_2(VAR_3->hdr.count)-1 ].hashval;
 VAR_4->btree[0].before = FUNC_4(VAR_8);
 VAR_4->hdr.count = FUNC_3(1);
 FUNC_10(VAR_2->trans, VAR_6, 0, FUNC_1(VAR_5->i_mount) - 1);
 VAR_9 = 0;
out:
 if (VAR_6)
  FUNC_7(VAR_6);
 if (VAR_7)
  FUNC_7(VAR_7);
 return(VAR_9);
}
