
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_72__ TYPE_9__ ;
typedef struct TYPE_71__ TYPE_8__ ;
typedef struct TYPE_70__ TYPE_7__ ;
typedef struct TYPE_69__ TYPE_6__ ;
typedef struct TYPE_68__ TYPE_5__ ;
typedef struct TYPE_67__ TYPE_4__ ;
typedef struct TYPE_66__ TYPE_3__ ;
typedef struct TYPE_65__ TYPE_2__ ;
typedef struct TYPE_64__ TYPE_1__ ;
typedef struct TYPE_63__ TYPE_17__ ;
typedef struct TYPE_62__ TYPE_16__ ;
typedef struct TYPE_61__ TYPE_15__ ;
typedef struct TYPE_60__ TYPE_14__ ;
typedef struct TYPE_59__ TYPE_13__ ;
typedef struct TYPE_58__ TYPE_12__ ;
typedef struct TYPE_57__ TYPE_11__ ;
typedef struct TYPE_56__ TYPE_10__ ;


typedef int xfs_trans_t ;
struct TYPE_70__ {TYPE_1__* m_dirnameops; scalar_t__ m_dirblksize; } ;
typedef TYPE_7__ xfs_mount_t ;
struct TYPE_67__ {scalar_t__ di_size; } ;
struct TYPE_65__ {int * if_data; } ;
struct TYPE_66__ {int if_flags; int if_bytes; TYPE_2__ if_u1; } ;
struct TYPE_71__ {int i_ino; TYPE_4__ i_d; TYPE_3__ i_df; TYPE_7__* i_mount; } ;
typedef TYPE_8__ xfs_inode_t ;
struct TYPE_69__ {int count; int parent; int i8count; } ;
struct TYPE_72__ {TYPE_6__ hdr; } ;
typedef TYPE_9__ xfs_dir2_sf_t ;
struct TYPE_56__ {int namelen; TYPE_9__* name; } ;
typedef TYPE_10__ xfs_dir2_sf_entry_t ;
struct TYPE_57__ {void* address; void* hashval; } ;
typedef TYPE_11__ xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_db_t ;
struct TYPE_58__ {void* length; void* freetag; } ;
typedef TYPE_12__ xfs_dir2_data_unused_t ;
typedef int xfs_dir2_data_t ;
struct TYPE_59__ {int namelen; char* name; void* inumber; } ;
typedef TYPE_13__ xfs_dir2_data_entry_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct TYPE_60__ {void* count; scalar_t__ stale; } ;
typedef TYPE_14__ xfs_dir2_block_tail_t ;
struct TYPE_68__ {void* magic; } ;
struct TYPE_61__ {scalar_t__ u; TYPE_5__ hdr; } ;
typedef TYPE_15__ xfs_dir2_block_t ;
struct TYPE_62__ {TYPE_15__* data; } ;
typedef TYPE_16__ xfs_dabuf_t ;
struct TYPE_63__ {int * trans; TYPE_8__* dp; } ;
typedef TYPE_17__ xfs_da_args_t ;
typedef int uint ;
struct xfs_name {int len; TYPE_9__* name; } ;
typedef void* __be16 ;
struct TYPE_64__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_7__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (void*) ;
 scalar_t__ FUNC_4 (void*) ;
 void* FUNC_5 (int) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int ) ;
 char* FUNC_8 (int,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,TYPE_9__*,int) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int VAR_11 ;
 int FUNC_12 (struct xfs_name*) ;
 int FUNC_13 (TYPE_17__*) ;
 int FUNC_14 (TYPE_16__*) ;
 TYPE_11__* FUNC_15 (TYPE_14__*) ;
 int FUNC_16 (int *,TYPE_16__*,int ,scalar_t__) ;
 int FUNC_17 (int *,TYPE_16__*) ;
 int VAR_12 ;
 TYPE_14__* FUNC_18 (TYPE_7__*,TYPE_15__*) ;
 int FUNC_19 (TYPE_7__*,int) ;
 int FUNC_20 (TYPE_8__*,TYPE_16__*) ;
 void** FUNC_21 (TYPE_13__*) ;
 int FUNC_22 (int *,TYPE_12__*,int*) ;
 int FUNC_23 (TYPE_17__*,int ,TYPE_16__**) ;
 int FUNC_24 (int *,TYPE_16__*,TYPE_13__*) ;
 int FUNC_25 (int *,TYPE_16__*,TYPE_12__*) ;
 void** FUNC_26 (TYPE_12__*) ;
 int FUNC_27 (int *,TYPE_16__*,TYPE_12__*,scalar_t__,int,int*,int*) ;
 int FUNC_28 (TYPE_17__*,int ,int *) ;
 TYPE_10__* FUNC_29 (TYPE_9__*) ;
 int FUNC_30 (TYPE_9__*,int *) ;
 int FUNC_31 (TYPE_10__*) ;
 scalar_t__ FUNC_32 (int ) ;
 int VAR_13 ;
 int * FUNC_33 (TYPE_10__*) ;
 TYPE_10__* FUNC_34 (TYPE_9__*,TYPE_10__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_35 (TYPE_8__*,int,int ) ;
 int FUNC_36 (TYPE_11__*,scalar_t__,int,int ) ;
 int FUNC_37 (int *,TYPE_8__*,int ) ;

int
FUNC_38(
 xfs_da_args_t *VAR_16)
{
 xfs_dir2_db_t VAR_17;
 xfs_dir2_block_t *VAR_18;
 xfs_dir2_leaf_entry_t *VAR_19;
 xfs_dabuf_t *VAR_20;
 xfs_dir2_block_tail_t *VAR_21;
 char *VAR_22;
 int VAR_23;
 xfs_dir2_data_entry_t *VAR_24;
 xfs_inode_t *VAR_25;
 int VAR_26;
 xfs_dir2_data_unused_t *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 xfs_mount_t *VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35;
 xfs_dir2_sf_entry_t *VAR_36;
 xfs_dir2_sf_t *VAR_37;
 __be16 *VAR_38;
 xfs_trans_t *VAR_39;
 struct xfs_name VAR_40;

 FUNC_13(VAR_16);

 VAR_25 = VAR_16->dp;
 VAR_39 = VAR_16->trans;
 VAR_31 = VAR_25->i_mount;
 FUNC_0(VAR_25->i_df.if_flags & VAR_9);



 if (VAR_25->i_d.di_size < FUNC_11(VAR_13, VAR_11)) {
  FUNC_0(FUNC_2(VAR_31));
  return FUNC_1(VAR_0);
 }
 FUNC_0(VAR_25->i_df.if_bytes == VAR_25->i_d.di_size);
 FUNC_0(VAR_25->i_df.if_u1.if_data != ((void*)0));
 VAR_37 = (xfs_dir2_sf_t *)VAR_25->i_df.if_u1.if_data;
 FUNC_0(VAR_25->i_d.di_size >= FUNC_32(VAR_37->hdr.i8count));





 VAR_23 = VAR_25->i_df.if_bytes;
 VAR_22 = FUNC_8(VAR_23, VAR_1);

 FUNC_10(VAR_22, VAR_37, VAR_23);
 FUNC_35(VAR_25, -VAR_23, VAR_2);
 VAR_25->i_d.di_size = 0;
 FUNC_37(VAR_39, VAR_25, VAR_10);



 VAR_37 = (xfs_dir2_sf_t *)VAR_22;



 VAR_29 = FUNC_28(VAR_16, VAR_8, &VAR_17);
 if (VAR_29) {
  FUNC_9(VAR_22);
  return VAR_29;
 }



 VAR_29 = FUNC_23(VAR_16, VAR_17, &VAR_20);
 if (VAR_29) {
  FUNC_9(VAR_22);
  return VAR_29;
 }
 VAR_18 = VAR_20->data;
 VAR_18->hdr.magic = FUNC_6(VAR_3);



 VAR_30 = (uint)sizeof(*VAR_21) +
     (VAR_37->hdr.count + 2) * (uint)sizeof(xfs_dir2_leaf_entry_t);




 VAR_27 = (xfs_dir2_data_unused_t *)VAR_18->u;
 VAR_32 = VAR_33 = 0;
 FUNC_27(VAR_39, VAR_20, VAR_27, VAR_31->m_dirblksize - VAR_30, VAR_30, &VAR_32,
  &VAR_33);
 FUNC_0(VAR_33 == 0);



 VAR_21 = FUNC_18(VAR_31, VAR_18);
 VAR_21->count = FUNC_6(VAR_37->hdr.count + 2);
 VAR_21->stale = 0;
 VAR_19 = FUNC_15(VAR_21);
 VAR_28 = (uint)((char *)VAR_19 - (char *)VAR_18);



 FUNC_27(VAR_39, VAR_20, VAR_27,
  (xfs_dir2_data_aoff_t)((char *)VAR_27 - (char *)VAR_18),
  FUNC_3(VAR_27->length), &VAR_32, &VAR_33);



 VAR_24 = (xfs_dir2_data_entry_t *)
       ((char *)VAR_18 + VAR_5);
 VAR_24->inumber = FUNC_7(VAR_25->i_ino);
 VAR_24->namelen = 1;
 VAR_24->name[0] = '.';
 VAR_38 = FUNC_21(VAR_24);
 *VAR_38 = FUNC_5((char *)VAR_24 - (char *)VAR_18);
 FUNC_24(VAR_39, VAR_20, VAR_24);
 VAR_19[0].hashval = FUNC_6(VAR_14);
 VAR_19[0].address = FUNC_6(FUNC_19(VAR_31,
    (char *)VAR_24 - (char *)VAR_18));



 VAR_24 = (xfs_dir2_data_entry_t *)
  ((char *)VAR_18 + VAR_4);
 VAR_24->inumber = FUNC_7(FUNC_30(VAR_37, &VAR_37->hdr.parent));
 VAR_24->namelen = 2;
 VAR_24->name[0] = VAR_24->name[1] = '.';
 VAR_38 = FUNC_21(VAR_24);
 *VAR_38 = FUNC_5((char *)VAR_24 - (char *)VAR_18);
 FUNC_24(VAR_39, VAR_20, VAR_24);
 VAR_19[1].hashval = FUNC_6(VAR_15);
 VAR_19[1].address = FUNC_6(FUNC_19(VAR_31,
    (char *)VAR_24 - (char *)VAR_18));
 VAR_35 = VAR_6;



 if ((VAR_30 = 0) == VAR_37->hdr.count)
  VAR_36 = ((void*)0);
 else
  VAR_36 = FUNC_29(VAR_37);




 while (VAR_35 < VAR_28) {



  if (VAR_36 == ((void*)0))
   VAR_34 = VAR_28;
  else
   VAR_34 = FUNC_31(VAR_36);



  if (VAR_35 < VAR_34) {
   VAR_27 = (xfs_dir2_data_unused_t *)
         ((char *)VAR_18 + VAR_35);
   VAR_27->freetag = FUNC_5(VAR_7);
   VAR_27->length = FUNC_5(VAR_34 - VAR_35);
   *FUNC_26(VAR_27) = FUNC_5(
    ((char *)VAR_27 - (char *)VAR_18));
   FUNC_25(VAR_39, VAR_20, VAR_27);
   (void)FUNC_22((xfs_dir2_data_t *)VAR_18,
    VAR_27, &VAR_26);
   VAR_35 += FUNC_3(VAR_27->length);
   continue;
  }



  VAR_24 = (xfs_dir2_data_entry_t *)((char *)VAR_18 + VAR_34);
  VAR_24->inumber = FUNC_7(FUNC_30(VAR_37,
    FUNC_33(VAR_36)));
  VAR_24->namelen = VAR_36->namelen;
  FUNC_10(VAR_24->name, VAR_36->name, VAR_24->namelen);
  VAR_38 = FUNC_21(VAR_24);
  *VAR_38 = FUNC_5((char *)VAR_24 - (char *)VAR_18);
  FUNC_24(VAR_39, VAR_20, VAR_24);
  VAR_40.name = VAR_36->name;
  VAR_40.len = VAR_36->namelen;
  VAR_19[2 + VAR_30].hashval = FUNC_6(VAR_31->m_dirnameops->
       hashname(&VAR_40));
  VAR_19[2 + VAR_30].address = FUNC_6(FUNC_19(VAR_31,
       (char *)VAR_24 - (char *)VAR_18));
  VAR_35 = (int)((char *)(VAR_38 + 1) - (char *)VAR_18);
  if (++VAR_30 == VAR_37->hdr.count)
   VAR_36 = ((void*)0);
  else
   VAR_36 = FUNC_34(VAR_37, VAR_36);
 }

 FUNC_9(VAR_22);



 FUNC_36(VAR_19, FUNC_4(VAR_21->count), sizeof(*VAR_19), VAR_12);




 FUNC_0(VAR_33 == 0);
 FUNC_16(VAR_39, VAR_20, 0, FUNC_4(VAR_21->count) - 1);
 FUNC_17(VAR_39, VAR_20);
 FUNC_20(VAR_25, VAR_20);
 FUNC_14(VAR_20);
 return 0;
}
