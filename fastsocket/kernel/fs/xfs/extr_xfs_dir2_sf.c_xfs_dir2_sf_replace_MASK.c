
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


struct TYPE_28__ {int * if_data; } ;
struct TYPE_29__ {int if_flags; scalar_t__ if_bytes; TYPE_2__ if_u1; } ;
struct TYPE_27__ {scalar_t__ di_size; } ;
struct TYPE_31__ {TYPE_3__ i_df; TYPE_1__ i_d; int i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
typedef scalar_t__ xfs_ino_t ;
struct TYPE_30__ {int i8count; int count; int parent; } ;
struct TYPE_32__ {TYPE_4__ hdr; } ;
typedef TYPE_6__ xfs_dir2_sf_t ;
struct TYPE_33__ {int namelen; int name; } ;
typedef TYPE_7__ xfs_dir2_sf_entry_t ;
typedef int xfs_dir2_ino8_t ;
typedef int xfs_dir2_ino4_t ;
struct TYPE_34__ {scalar_t__ inumber; int namelen; char* name; int op_flags; int trans; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ,int ) ;
 int FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__*) ;
 TYPE_7__* FUNC_9 (TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_8 ;
 int * FUNC_12 (TYPE_7__*) ;
 TYPE_7__* FUNC_13 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_14 (TYPE_6__*,scalar_t__*,int *) ;
 int FUNC_15 (TYPE_8__*) ;
 int FUNC_16 (TYPE_8__*) ;
 int FUNC_17 (TYPE_8__*) ;
 int FUNC_18 (int ,TYPE_5__*,int ) ;

int
FUNC_19(
 xfs_da_args_t *VAR_9)
{
 xfs_inode_t *VAR_10;
 int VAR_11;






 xfs_dir2_sf_entry_t *VAR_12;
 xfs_dir2_sf_t *VAR_13;

 FUNC_5(VAR_9);

 VAR_10 = VAR_9->dp;

 FUNC_0(VAR_10->i_df.if_flags & VAR_5);



 if (VAR_10->i_d.di_size < FUNC_4(VAR_8, VAR_7)) {
  FUNC_0(FUNC_2(VAR_10->i_mount));
  return FUNC_1(VAR_0);
 }
 FUNC_0(VAR_10->i_df.if_bytes == VAR_10->i_d.di_size);
 FUNC_0(VAR_10->i_df.if_u1.if_data != ((void*)0));
 VAR_13 = (xfs_dir2_sf_t *)VAR_10->i_df.if_u1.if_data;
 FUNC_0(VAR_10->i_d.di_size >= FUNC_11(VAR_13->hdr.i8count));
 FUNC_0(VAR_9->namelen != 1 || VAR_9->name[0] != '.');



 if (VAR_9->namelen == 2 &&
     VAR_9->name[0] == '.' && VAR_9->name[1] == '.') {




  FUNC_14(VAR_13, &VAR_9->inumber, &VAR_13->hdr.parent);
 }



 else {
  for (VAR_11 = 0, VAR_12 = FUNC_9(VAR_13);
    VAR_11 < VAR_13->hdr.count;
    VAR_11++, VAR_12 = FUNC_13(VAR_13, VAR_12)) {
   if (FUNC_6(VAR_9, VAR_12->name, VAR_12->namelen) ==
        VAR_2) {





    FUNC_14(VAR_13, &VAR_9->inumber,
     FUNC_12(VAR_12));
    break;
   }
  }



  if (VAR_11 == VAR_13->hdr.count) {
   FUNC_0(VAR_9->op_flags & VAR_3);




   return FUNC_1(VAR_1);
  }
 }
 FUNC_8(VAR_9);
 FUNC_18(VAR_9->trans, VAR_10, VAR_6);
 return 0;
}
