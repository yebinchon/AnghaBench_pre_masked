
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_25__ {int * if_data; } ;
struct TYPE_26__ {int if_flags; int if_bytes; TYPE_2__ if_u1; } ;
struct TYPE_24__ {int di_size; } ;
struct TYPE_28__ {TYPE_3__ i_df; TYPE_1__ i_d; int i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_27__ {int i8count; int count; } ;
struct TYPE_29__ {TYPE_4__ hdr; } ;
typedef TYPE_6__ xfs_dir2_sf_t ;
struct TYPE_30__ {int namelen; int name; } ;
typedef TYPE_7__ xfs_dir2_sf_entry_t ;
struct TYPE_31__ {scalar_t__ inumber; int trans; int namelen; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,int ) ;
 int VAR_8 ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ,int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_6__*,int ) ;
 TYPE_7__* FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,int ) ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 int FUNC_12 (TYPE_7__*) ;
 TYPE_7__* FUNC_13 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_14 (TYPE_8__*) ;
 int FUNC_15 (TYPE_5__*,int,int ) ;
 int FUNC_16 (int ,TYPE_5__*,int) ;

int
FUNC_17(
 xfs_da_args_t *VAR_10)
{
 int VAR_11;
 xfs_inode_t *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 xfs_dir2_sf_entry_t *VAR_17;
 xfs_dir2_sf_t *VAR_18;

 FUNC_5(VAR_10);

 VAR_12 = VAR_10->dp;

 FUNC_0(VAR_12->i_df.if_flags & VAR_5);
 VAR_16 = (int)VAR_12->i_d.di_size;



 if (VAR_16 < FUNC_4(VAR_9, VAR_8)) {
  FUNC_0(FUNC_2(VAR_12->i_mount));
  return FUNC_1(VAR_0);
 }
 FUNC_0(VAR_12->i_df.if_bytes == VAR_16);
 FUNC_0(VAR_12->i_df.if_u1.if_data != ((void*)0));
 VAR_18 = (xfs_dir2_sf_t *)VAR_12->i_df.if_u1.if_data;
 FUNC_0(VAR_16 >= FUNC_11(VAR_18->hdr.i8count));




 for (VAR_14 = 0, VAR_17 = FUNC_9(VAR_18); VAR_14 < VAR_18->hdr.count;
    VAR_14++, VAR_17 = FUNC_13(VAR_18, VAR_17)) {
  if (FUNC_6(VAR_10, VAR_17->name, VAR_17->namelen) ==
        VAR_2) {
   FUNC_0(FUNC_10(VAR_18,
      FUNC_12(VAR_17)) ==
        VAR_10->inumber);
   break;
  }
 }



 if (VAR_14 == VAR_18->hdr.count)
  return FUNC_1(VAR_1);



 VAR_11 = (int)((char *)VAR_17 - (char *)VAR_18);
 VAR_13 = FUNC_8(VAR_18, VAR_10->namelen);
 VAR_15 = VAR_16 - VAR_13;



 if (VAR_11 + VAR_13 < VAR_16)
  FUNC_3((char *)VAR_18 + VAR_11, (char *)VAR_18 + VAR_11 + VAR_13,
   VAR_16 - (VAR_11 + VAR_13));



 VAR_18->hdr.count--;
 VAR_12->i_d.di_size = VAR_15;



 FUNC_15(VAR_12, VAR_15 - VAR_16, VAR_3);
 VAR_18 = (xfs_dir2_sf_t *)VAR_12->i_df.if_u1.if_data;
 FUNC_7(VAR_10);
 FUNC_16(VAR_10->trans, VAR_12, VAR_6 | VAR_7);
 return 0;
}
