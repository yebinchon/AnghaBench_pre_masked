
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {scalar_t__ di_format; } ;
struct TYPE_25__ {TYPE_2__ i_d; TYPE_20__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_26__ {char* data; } ;
typedef TYPE_5__ xfs_dabuf_t ;
struct TYPE_27__ {size_t namelen; int valuelen; int flags; int hashval; int * value; int * name; int op_flags; int trans; int whichfork; int total; int flist; int firstblock; TYPE_4__* dp; } ;
typedef TYPE_6__ xfs_da_args_t ;
struct TYPE_21__ {int magic; } ;
struct TYPE_24__ {int count; TYPE_1__ info; } ;
struct TYPE_28__ {TYPE_3__ hdr; TYPE_9__* entries; } ;
typedef TYPE_7__ xfs_attr_leafblock_t ;
struct TYPE_29__ {size_t namelen; int valuelen; int * nameval; } ;
typedef TYPE_8__ xfs_attr_leaf_name_local_t ;
struct TYPE_30__ {int flags; int hashval; int nameidx; } ;
typedef TYPE_9__ xfs_attr_leaf_entry_t ;
typedef int nargs ;
struct TYPE_22__ {int m_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_20__*) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_4__*,int ) ;
 TYPE_8__* FUNC_11 (TYPE_7__*,int) ;
 int FUNC_12 (TYPE_6__*,int) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*,int ,TYPE_5__*) ;

int
FUNC_15(xfs_dabuf_t *VAR_8, xfs_da_args_t *VAR_9, int VAR_10)
{
 xfs_attr_leafblock_t *VAR_11;
 xfs_attr_leaf_entry_t *VAR_12;
 xfs_attr_leaf_name_local_t *VAR_13;
 xfs_da_args_t VAR_14;
 xfs_inode_t *VAR_15;
 char *VAR_16;
 int VAR_17, VAR_18;

 FUNC_9(VAR_9);

 VAR_15 = VAR_9->dp;
 VAR_16 = FUNC_5(FUNC_2(VAR_15->i_mount), VAR_0);
 FUNC_0(VAR_16 != ((void*)0));

 FUNC_0(VAR_8 != ((void*)0));
 FUNC_7(VAR_16, VAR_8->data, FUNC_2(VAR_15->i_mount));
 VAR_11 = (xfs_attr_leafblock_t *)VAR_16;
 FUNC_0(FUNC_3(VAR_11->hdr.info.magic) == VAR_3);
 FUNC_8(VAR_8->data, 0, FUNC_2(VAR_15->i_mount));




 VAR_17 = FUNC_14(VAR_9, 0, VAR_8);
 if (VAR_17)
  goto out;

 if (VAR_10 == -1) {
  FUNC_0(VAR_15->i_mount->m_flags & VAR_7);
  FUNC_0(VAR_15->i_d.di_format != VAR_6);
  FUNC_10(VAR_15, VAR_9->trans);
  goto out;
 }

 FUNC_13(VAR_9);




 FUNC_8((char *)&VAR_14, 0, sizeof(VAR_14));
 VAR_14.dp = VAR_15;
 VAR_14.firstblock = VAR_9->firstblock;
 VAR_14.flist = VAR_9->flist;
 VAR_14.total = VAR_9->total;
 VAR_14.whichfork = VAR_1;
 VAR_14.trans = VAR_9->trans;
 VAR_14.op_flags = VAR_5;
 VAR_12 = &VAR_11->entries[0];
 for (VAR_18 = 0; VAR_18 < FUNC_3(VAR_11->hdr.count); VAR_12++, VAR_18++) {
  if (VAR_12->flags & VAR_2)
   continue;
  if (!VAR_12->nameidx)
   continue;
  FUNC_0(VAR_12->flags & VAR_4);
  VAR_13 = FUNC_11(VAR_11, VAR_18);
  VAR_14.name = VAR_13->nameval;
  VAR_14.namelen = VAR_13->namelen;
  VAR_14.value = &VAR_13->nameval[VAR_14.namelen];
  VAR_14.valuelen = FUNC_3(VAR_13->valuelen);
  VAR_14.hashval = FUNC_4(VAR_12->hashval);
  VAR_14.flags = FUNC_1(VAR_12->flags);
  FUNC_12(&VAR_14, VAR_10);
 }
 VAR_17 = 0;

out:
 FUNC_6(VAR_16);
 return(VAR_17);
}
