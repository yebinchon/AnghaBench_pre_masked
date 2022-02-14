
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_28__ {TYPE_2__* m_dirnameops; int m_dirleafblk; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_29__ {TYPE_3__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
struct TYPE_26__ {int count; } ;
struct TYPE_30__ {TYPE_1__ hdr; TYPE_6__* ents; } ;
typedef TYPE_5__ xfs_dir2_leaf_t ;
struct TYPE_31__ {int address; int hashval; } ;
typedef TYPE_6__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_32__ {int namelen; int name; } ;
typedef TYPE_7__ xfs_dir2_data_entry_t ;
struct TYPE_33__ {TYPE_5__* data; } ;
typedef TYPE_8__ xfs_dabuf_t ;
struct TYPE_34__ {scalar_t__ hashval; int cmpresult; int op_flags; int * trans; TYPE_4__* dp; } ;
typedef TYPE_9__ xfs_da_args_t ;
typedef enum xfs_dacmp { ____Placeholder_xfs_dacmp } xfs_dacmp ;
struct TYPE_27__ {int (* compname ) (TYPE_9__*,int ,int ) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_9__*,int ,int ) ;
 int FUNC_5 (int *,TYPE_8__*) ;
 int FUNC_6 (int *,TYPE_4__*,int ,int,TYPE_8__**,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_8 (TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*,scalar_t__) ;
 int FUNC_10 (TYPE_3__*,int) ;
 int FUNC_11 (TYPE_4__*,TYPE_8__*) ;
 int FUNC_12 (TYPE_9__*,TYPE_8__*) ;

__attribute__((used)) static int
FUNC_13(
 xfs_da_args_t *VAR_7,
 xfs_dabuf_t **VAR_8,
 int *VAR_9,
 xfs_dabuf_t **VAR_10)
{
 xfs_dir2_db_t VAR_11 = -1;
 xfs_dabuf_t *VAR_12 = ((void*)0);
 xfs_dir2_data_entry_t *VAR_13;
 xfs_inode_t *VAR_14;
 int VAR_15;
 int VAR_16;
 xfs_dabuf_t *VAR_17;
 xfs_dir2_leaf_entry_t *VAR_18;
 xfs_dir2_leaf_t *VAR_19;
 xfs_mount_t *VAR_20;
 xfs_dir2_db_t VAR_21;
 xfs_trans_t *VAR_22;
 xfs_dir2_db_t VAR_23 = -1;
 enum xfs_dacmp VAR_24;

 VAR_14 = VAR_7->dp;
 VAR_22 = VAR_7->trans;
 VAR_20 = VAR_14->i_mount;



 VAR_15 = FUNC_6(VAR_22, VAR_14, VAR_20->m_dirleafblk, -1, &VAR_17,
       VAR_4);
 if (VAR_15)
  return VAR_15;
 *VAR_8 = VAR_17;
 VAR_19 = VAR_17->data;
 FUNC_11(VAR_14, VAR_17);



 VAR_16 = FUNC_12(VAR_7, VAR_17);




 for (VAR_18 = &VAR_19->ents[VAR_16]; VAR_16 < FUNC_2(VAR_19->hdr.count) &&
    FUNC_3(VAR_18->hashval) == VAR_7->hashval;
    VAR_18++, VAR_16++) {



  if (FUNC_3(VAR_18->address) == VAR_6)
   continue;



  VAR_21 = FUNC_8(VAR_20, FUNC_3(VAR_18->address));




  if (VAR_21 != VAR_11) {
   if (VAR_12)
    FUNC_5(VAR_22, VAR_12);
   VAR_15 = FUNC_6(VAR_22, VAR_14,
      FUNC_10(VAR_20, VAR_21),
      -1, &VAR_12, VAR_4);
   if (VAR_15) {
    FUNC_5(VAR_22, VAR_17);
    return VAR_15;
   }
   FUNC_7(VAR_14, VAR_12);
   VAR_11 = VAR_21;
  }



  VAR_13 = (xfs_dir2_data_entry_t *)((char *)VAR_12->data +
   FUNC_9(VAR_20, FUNC_3(VAR_18->address)));





  VAR_24 = VAR_20->m_dirnameops->compname(VAR_7, VAR_13->name, VAR_13->namelen);
  if (VAR_24 != VAR_2 && VAR_24 != VAR_7->cmpresult) {
   VAR_7->cmpresult = VAR_24;
   *VAR_9 = VAR_16;

   if (VAR_24 == VAR_3) {
    *VAR_10 = VAR_12;
    return 0;
   }
   VAR_23 = VAR_11;
  }
 }
 FUNC_0(VAR_7->op_flags & VAR_5);





 if (VAR_7->cmpresult == VAR_1) {
  FUNC_0(VAR_23 != -1);
  if (VAR_23 != VAR_11) {
   FUNC_5(VAR_22, VAR_12);
   VAR_15 = FUNC_6(VAR_22, VAR_14,
      FUNC_10(VAR_20, VAR_23),
      -1, &VAR_12, VAR_4);
   if (VAR_15) {
    FUNC_5(VAR_22, VAR_17);
    return VAR_15;
   }
  }
  *VAR_10 = VAR_12;
  return 0;
 }



 FUNC_0(VAR_23 == -1);
 if (VAR_12)
  FUNC_5(VAR_22, VAR_12);
 FUNC_5(VAR_22, VAR_17);
 return FUNC_1(VAR_0);
}
