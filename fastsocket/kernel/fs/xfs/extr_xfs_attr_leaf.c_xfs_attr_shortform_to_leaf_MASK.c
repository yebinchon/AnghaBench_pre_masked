
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


struct TYPE_20__ {TYPE_4__* i_afp; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_18__ {char* if_data; } ;
struct TYPE_21__ {TYPE_1__ if_u1; } ;
typedef TYPE_4__ xfs_ifork_t ;
typedef int xfs_dabuf_t ;
typedef scalar_t__ xfs_dablk_t ;
struct TYPE_22__ {size_t namelen; int flags; int hashval; int valuelen; int * value; int * name; int op_flags; int trans; int whichfork; int total; int flist; int firstblock; TYPE_3__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;
struct TYPE_19__ {int count; int totsize; } ;
struct TYPE_23__ {TYPE_2__ hdr; TYPE_7__* list; } ;
typedef TYPE_6__ xfs_attr_shortform_t ;
struct TYPE_24__ {size_t namelen; int flags; int * nameval; int valuelen; } ;
typedef TYPE_7__ xfs_attr_sf_entry_t ;
typedef int nargs ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_7__*) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,scalar_t__,int **) ;
 int FUNC_11 (int *,TYPE_5__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_5__*,scalar_t__*) ;
 int FUNC_14 (int *,size_t) ;
 int FUNC_15 (TYPE_5__*,int ,int *) ;
 int FUNC_16 (TYPE_3__*,int,int ) ;

int
FUNC_17(xfs_da_args_t *VAR_6)
{
 xfs_inode_t *VAR_7;
 xfs_attr_shortform_t *VAR_8;
 xfs_attr_sf_entry_t *VAR_9;
 xfs_da_args_t VAR_10;
 char *VAR_11;
 int VAR_12, VAR_13, VAR_14;
 xfs_dablk_t VAR_15;
 xfs_dabuf_t *VAR_16;
 xfs_ifork_t *VAR_17;

 FUNC_8(VAR_6);

 VAR_7 = VAR_6->dp;
 VAR_17 = VAR_7->i_afp;
 VAR_8 = (xfs_attr_shortform_t *)VAR_17->if_u1.if_data;
 VAR_14 = FUNC_3(VAR_8->hdr.totsize);
 VAR_11 = FUNC_4(VAR_14, VAR_3);
 FUNC_0(VAR_11 != ((void*)0));
 FUNC_6(VAR_11, VAR_17->if_u1.if_data, VAR_14);
 VAR_8 = (xfs_attr_shortform_t *)VAR_11;

 FUNC_16(VAR_7, -VAR_14, VAR_4);
 VAR_16 = ((void*)0);
 VAR_12 = FUNC_13(VAR_6, &VAR_15);
 if (VAR_12) {




  if (VAR_12 == VAR_0)
   goto out;
  FUNC_16(VAR_7, VAR_14, VAR_4);
  FUNC_6(VAR_17->if_u1.if_data, VAR_11, VAR_14);
  goto out;
 }

 FUNC_0(VAR_15 == 0);
 VAR_12 = FUNC_10(VAR_6, VAR_15, &VAR_16);
 if (VAR_12) {
  VAR_12 = FUNC_15(VAR_6, 0, VAR_16);
  VAR_16 = ((void*)0);
  if (VAR_12)
   goto out;
  FUNC_16(VAR_7, VAR_14, VAR_4);
  FUNC_6(VAR_17->if_u1.if_data, VAR_11, VAR_14);
  goto out;
 }

 FUNC_7((char *)&VAR_10, 0, sizeof(VAR_10));
 VAR_10.dp = VAR_7;
 VAR_10.firstblock = VAR_6->firstblock;
 VAR_10.flist = VAR_6->flist;
 VAR_10.total = VAR_6->total;
 VAR_10.whichfork = VAR_4;
 VAR_10.trans = VAR_6->trans;
 VAR_10.op_flags = VAR_5;

 VAR_9 = &VAR_8->list[0];
 for (VAR_13 = 0; VAR_13 < VAR_8->hdr.count; VAR_13++) {
  VAR_10.name = VAR_9->nameval;
  VAR_10.namelen = VAR_9->namelen;
  VAR_10.value = &VAR_9->nameval[VAR_10.namelen];
  VAR_10.valuelen = VAR_9->valuelen;
  VAR_10.hashval = FUNC_14(VAR_9->nameval,
      VAR_9->namelen);
  VAR_10.flags = FUNC_1(VAR_9->flags);
  VAR_12 = FUNC_11(VAR_16, &VAR_10);
  FUNC_0(VAR_12 == VAR_1);
  VAR_12 = FUNC_9(VAR_16, &VAR_10);
  FUNC_0(VAR_12 != VAR_2);
  if (VAR_12)
   goto out;
  VAR_9 = FUNC_2(VAR_9);
 }
 VAR_12 = 0;

out:
 if(VAR_16)
  FUNC_12(VAR_16);
 FUNC_5(VAR_11);
 return(VAR_12);
}
