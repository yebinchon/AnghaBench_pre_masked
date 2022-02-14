
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_22__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {scalar_t__ di_size; } ;
struct TYPE_23__ {int * if_data; } ;
struct TYPE_25__ {int if_flags; scalar_t__ if_bytes; TYPE_1__ if_u1; } ;
struct TYPE_29__ {TYPE_22__* i_mount; void* i_ino; TYPE_3__ i_d; TYPE_2__ i_df; } ;
typedef TYPE_6__ xfs_inode_t ;
struct TYPE_27__ {int count; int parent; int i8count; } ;
struct TYPE_30__ {TYPE_4__ hdr; } ;
typedef TYPE_7__ xfs_dir2_sf_t ;
struct TYPE_31__ {int namelen; int name; } ;
typedef TYPE_8__ xfs_dir2_sf_entry_t ;
struct TYPE_32__ {int namelen; char* name; int cmpresult; int op_flags; void* inumber; TYPE_6__* dp; } ;
typedef TYPE_9__ xfs_da_args_t ;
typedef enum xfs_dacmp { ____Placeholder_xfs_dacmp } xfs_dacmp ;
struct TYPE_28__ {int (* compname ) (TYPE_9__*,int ,int ) ;} ;
struct TYPE_24__ {TYPE_5__* m_dirnameops; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_22__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (TYPE_9__*,int ,int ) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (TYPE_9__*) ;
 TYPE_8__* FUNC_7 (TYPE_7__*) ;
 void* FUNC_8 (TYPE_7__*,int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_8 ;
 int * FUNC_10 (TYPE_8__*) ;
 TYPE_8__* FUNC_11 (TYPE_7__*,TYPE_8__*) ;
 int FUNC_12 (TYPE_9__*,int ,int ) ;

int
FUNC_13(
 xfs_da_args_t *VAR_9)
{
 xfs_inode_t *VAR_10;
 int VAR_11;
 int VAR_12;
 xfs_dir2_sf_entry_t *VAR_13;
 xfs_dir2_sf_t *VAR_14;
 enum xfs_dacmp VAR_15;
 xfs_dir2_sf_entry_t *VAR_16;

 FUNC_5(VAR_9);

 FUNC_6(VAR_9);
 VAR_10 = VAR_9->dp;

 FUNC_0(VAR_10->i_df.if_flags & VAR_6);



 if (VAR_10->i_d.di_size < FUNC_3(VAR_8, VAR_7)) {
  FUNC_0(FUNC_2(VAR_10->i_mount));
  return FUNC_1(VAR_1);
 }
 FUNC_0(VAR_10->i_df.if_bytes == VAR_10->i_d.di_size);
 FUNC_0(VAR_10->i_df.if_u1.if_data != ((void*)0));
 VAR_14 = (xfs_dir2_sf_t *)VAR_10->i_df.if_u1.if_data;
 FUNC_0(VAR_10->i_d.di_size >= FUNC_9(VAR_14->hdr.i8count));



 if (VAR_9->namelen == 1 && VAR_9->name[0] == '.') {
  VAR_9->inumber = VAR_10->i_ino;
  VAR_9->cmpresult = VAR_4;
  return FUNC_1(VAR_0);
 }



 if (VAR_9->namelen == 2 &&
     VAR_9->name[0] == '.' && VAR_9->name[1] == '.') {
  VAR_9->inumber = FUNC_8(VAR_14, &VAR_14->hdr.parent);
  VAR_9->cmpresult = VAR_4;
  return FUNC_1(VAR_0);
 }



 VAR_16 = ((void*)0);
 for (VAR_11 = 0, VAR_13 = FUNC_7(VAR_14); VAR_11 < VAR_14->hdr.count;
    VAR_11++, VAR_13 = FUNC_11(VAR_14, VAR_13)) {





  VAR_15 = VAR_10->i_mount->m_dirnameops->compname(VAR_9, VAR_13->name,
        VAR_13->namelen);
  if (VAR_15 != VAR_3 && VAR_15 != VAR_9->cmpresult) {
   VAR_9->cmpresult = VAR_15;
   VAR_9->inumber = FUNC_8(VAR_14,
      FUNC_10(VAR_13));
   if (VAR_15 == VAR_4)
    return FUNC_1(VAR_0);
   VAR_16 = VAR_13;
  }
 }
 FUNC_0(VAR_9->op_flags & VAR_5);




 if (!VAR_16)
  return FUNC_1(VAR_2);

 VAR_12 = FUNC_12(VAR_9, VAR_16->name, VAR_16->namelen);
 return FUNC_1(VAR_12);
}
