
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_26__ {int di_size; } ;
struct TYPE_23__ {scalar_t__ if_data; } ;
struct TYPE_24__ {TYPE_1__ if_u1; } ;
struct TYPE_27__ {TYPE_4__ i_d; TYPE_2__ i_df; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_25__ {int i8count; int count; } ;
struct TYPE_28__ {int namelen; TYPE_3__ hdr; struct TYPE_28__* name; } ;
typedef TYPE_6__ xfs_dir2_sf_t ;
typedef TYPE_6__ xfs_dir2_sf_entry_t ;
typedef scalar_t__ xfs_dir2_data_aoff_t ;
struct TYPE_29__ {int namelen; scalar_t__ inumber; TYPE_6__* name; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (int,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__*) ;
 TYPE_6__* FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 TYPE_6__* FUNC_8 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,scalar_t__*,int ) ;
 int FUNC_10 (TYPE_6__*,scalar_t__) ;
 int FUNC_11 (TYPE_5__*,int,int ) ;

__attribute__((used)) static void
FUNC_12(
 xfs_da_args_t *VAR_4,
 int VAR_5,
 int VAR_6)
{
 int VAR_7;
 char *VAR_8;
 xfs_inode_t *VAR_9;
 int VAR_10;
 int VAR_11;
 xfs_dir2_data_aoff_t VAR_12;
 xfs_dir2_data_aoff_t VAR_13;
 int VAR_14;
 xfs_dir2_sf_entry_t *VAR_15;
 xfs_dir2_sf_t *VAR_16;
 xfs_dir2_sf_entry_t *VAR_17;
 xfs_dir2_sf_t *VAR_18;




 VAR_9 = VAR_4->dp;

 VAR_18 = (xfs_dir2_sf_t *)VAR_9->i_df.if_u1.if_data;
 VAR_14 = (int)VAR_9->i_d.di_size;
 VAR_8 = FUNC_0(VAR_14, VAR_0);
 VAR_16 = (xfs_dir2_sf_t *)VAR_8;
 FUNC_2(VAR_16, VAR_18, VAR_14);





 for (VAR_13 = VAR_2,
       VAR_15 = FUNC_5(VAR_16),
       VAR_7 = FUNC_3(VAR_4->namelen),
       VAR_10 = (char *)VAR_15 == &VAR_8[VAR_14];
      !VAR_10;
      VAR_13 = VAR_12 + FUNC_3(VAR_15->namelen),
       VAR_15 = FUNC_8(VAR_16, VAR_15),
       VAR_10 = (char *)VAR_15 == &VAR_8[VAR_14]) {
  VAR_12 = FUNC_6(VAR_15);
  if (VAR_13 + VAR_7 <= VAR_12)
   break;
 }





 FUNC_11(VAR_9, -VAR_14, VAR_1);
 FUNC_11(VAR_9, VAR_6, VAR_1);



 VAR_18 = (xfs_dir2_sf_t *)VAR_9->i_df.if_u1.if_data;



 VAR_11 = (int)((char *)VAR_15 - (char *)VAR_16);
 FUNC_2(VAR_18, VAR_16, VAR_11);
 VAR_17 = (xfs_dir2_sf_entry_t *)((char *)VAR_18 + VAR_11);



 VAR_17->namelen = VAR_4->namelen;
 FUNC_10(VAR_17, VAR_13);
 FUNC_2(VAR_17->name, VAR_4->name, VAR_17->namelen);
 FUNC_9(VAR_18, &VAR_4->inumber,
  FUNC_7(VAR_17));
 VAR_18->hdr.count++;







 if (!VAR_10) {
  VAR_17 = FUNC_8(VAR_18, VAR_17);
  FUNC_2(VAR_17, VAR_15, VAR_14 - VAR_11);
 }
 FUNC_1(VAR_8);
 VAR_9->i_d.di_size = VAR_6;
 FUNC_4(VAR_4);
}
