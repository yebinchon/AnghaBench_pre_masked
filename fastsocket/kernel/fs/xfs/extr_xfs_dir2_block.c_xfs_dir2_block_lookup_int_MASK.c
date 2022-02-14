
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_23__ {TYPE_1__* m_dirnameops; int m_dirdatablk; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_24__ {TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_25__ {int address; int hashval; } ;
typedef TYPE_4__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_dataptr_t ;
struct TYPE_26__ {int namelen; int name; } ;
typedef TYPE_5__ xfs_dir2_data_entry_t ;
struct TYPE_27__ {int count; } ;
typedef TYPE_6__ xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;
typedef int xfs_dahash_t ;
struct TYPE_28__ {int * data; } ;
typedef TYPE_7__ xfs_dabuf_t ;
struct TYPE_29__ {int hashval; int op_flags; int cmpresult; int * trans; TYPE_3__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
typedef enum xfs_dacmp { ____Placeholder_xfs_dacmp } xfs_dacmp ;
struct TYPE_22__ {int (* compname ) (TYPE_8__*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_8__*,int ,int ) ;
 int FUNC_4 (int *,TYPE_7__*) ;
 int FUNC_5 (int *,TYPE_3__*,int ,int,TYPE_7__**,int ) ;
 TYPE_4__* FUNC_6 (TYPE_6__*) ;
 TYPE_6__* FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_3__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_10(
 xfs_da_args_t *VAR_7,
 xfs_dabuf_t **VAR_8,
 int *VAR_9)
{
 xfs_dir2_dataptr_t VAR_10;
 xfs_dir2_block_t *VAR_11;
 xfs_dir2_leaf_entry_t *VAR_12;
 xfs_dabuf_t *VAR_13;
 xfs_dir2_block_tail_t *VAR_14;
 xfs_dir2_data_entry_t *VAR_15;
 xfs_inode_t *VAR_16;
 int VAR_17;
 xfs_dahash_t VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 xfs_mount_t *VAR_22;
 xfs_trans_t *VAR_23;
 enum xfs_dacmp VAR_24;

 VAR_16 = VAR_7->dp;
 VAR_23 = VAR_7->trans;
 VAR_22 = VAR_16->i_mount;



 if ((VAR_17 =
     FUNC_5(VAR_23, VAR_16, VAR_22->m_dirdatablk, -1, &VAR_13, VAR_4))) {
  return VAR_17;
 }
 FUNC_0(VAR_13 != ((void*)0));
 VAR_11 = VAR_13->data;
 FUNC_8(VAR_16, VAR_13);
 VAR_14 = FUNC_7(VAR_22, VAR_11);
 VAR_12 = FUNC_6(VAR_14);




 for (VAR_20 = 0, VAR_19 = FUNC_2(VAR_14->count) - 1; ; ) {
  FUNC_0(VAR_20 <= VAR_19);
  VAR_21 = (VAR_20 + VAR_19) >> 1;
  if ((VAR_18 = FUNC_2(VAR_12[VAR_21].hashval)) == VAR_7->hashval)
   break;
  if (VAR_18 < VAR_7->hashval)
   VAR_20 = VAR_21 + 1;
  else
   VAR_19 = VAR_21 - 1;
  if (VAR_20 > VAR_19) {
   FUNC_0(VAR_7->op_flags & VAR_5);
   FUNC_4(VAR_23, VAR_13);
   return FUNC_1(VAR_0);
  }
 }



 while (VAR_21 > 0 && FUNC_2(VAR_12[VAR_21 - 1].hashval) == VAR_7->hashval) {
  VAR_21--;
 }




 do {
  if ((VAR_10 = FUNC_2(VAR_12[VAR_21].address)) == VAR_6)
   continue;



  VAR_15 = (xfs_dir2_data_entry_t *)
   ((char *)VAR_11 + FUNC_9(VAR_22, VAR_10));





  VAR_24 = VAR_22->m_dirnameops->compname(VAR_7, VAR_15->name, VAR_15->namelen);
  if (VAR_24 != VAR_2 && VAR_24 != VAR_7->cmpresult) {
   VAR_7->cmpresult = VAR_24;
   *VAR_8 = VAR_13;
   *VAR_9 = VAR_21;
   if (VAR_24 == VAR_3)
    return 0;
  }
 } while (++VAR_21 < FUNC_2(VAR_14->count) &&
   FUNC_2(VAR_12[VAR_21].hashval) == VAR_18);

 FUNC_0(VAR_7->op_flags & VAR_5);




 if (VAR_7->cmpresult == VAR_1)
  return 0;



 FUNC_4(VAR_23, VAR_13);
 return FUNC_1(VAR_0);
}
