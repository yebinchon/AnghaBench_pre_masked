
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int xfs_off_t ;
struct TYPE_25__ {scalar_t__ m_dirdatablk; } ;
typedef TYPE_5__ xfs_mount_t ;
struct TYPE_23__ {scalar_t__ di_size; } ;
struct TYPE_21__ {int * if_data; } ;
struct TYPE_22__ {int if_flags; scalar_t__ if_bytes; TYPE_1__ if_u1; } ;
struct TYPE_26__ {int i_ino; TYPE_3__ i_d; TYPE_2__ i_df; TYPE_5__* i_mount; } ;
typedef TYPE_6__ xfs_inode_t ;
typedef int xfs_ino_t ;
struct TYPE_24__ {int count; int parent; int i8count; } ;
struct TYPE_27__ {TYPE_4__ hdr; } ;
typedef TYPE_7__ xfs_dir2_sf_t ;
struct TYPE_28__ {int namelen; scalar_t__ name; } ;
typedef TYPE_8__ xfs_dir2_sf_entry_t ;
typedef int xfs_dir2_dataptr_t ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int,int,int ,int ) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_5__*,int) ;
 int FUNC_5 (TYPE_5__*,scalar_t__,int ) ;
 TYPE_8__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int *) ;
 int FUNC_8 (TYPE_8__*) ;
 scalar_t__ FUNC_9 (int ) ;
 int VAR_7 ;
 int * FUNC_10 (TYPE_8__*) ;
 TYPE_8__* FUNC_11 (TYPE_7__*,TYPE_8__*) ;

int
FUNC_12(
 xfs_inode_t *VAR_8,
 void *VAR_9,
 xfs_off_t *VAR_10,
 filldir_t VAR_11)
{
 int VAR_12;
 xfs_mount_t *VAR_13;
 xfs_dir2_dataptr_t VAR_14;
 xfs_dir2_sf_entry_t *VAR_15;
 xfs_dir2_sf_t *VAR_16;
 xfs_dir2_dataptr_t VAR_17;
 xfs_dir2_dataptr_t VAR_18;
 xfs_ino_t VAR_19;

 VAR_13 = VAR_8->i_mount;

 FUNC_0(VAR_8->i_df.if_flags & VAR_5);



 if (VAR_8->i_d.di_size < FUNC_3(VAR_7, VAR_6)) {
  FUNC_0(FUNC_2(VAR_13));
  return FUNC_1(VAR_2);
 }

 FUNC_0(VAR_8->i_df.if_bytes == VAR_8->i_d.di_size);
 FUNC_0(VAR_8->i_df.if_u1.if_data != ((void*)0));

 VAR_16 = (xfs_dir2_sf_t *)VAR_8->i_df.if_u1.if_data;

 FUNC_0(VAR_8->i_d.di_size >= FUNC_9(VAR_16->hdr.i8count));




 if (FUNC_4(VAR_13, *VAR_10) > VAR_13->m_dirdatablk)
  return 0;







 VAR_17 = FUNC_5(VAR_13, VAR_13->m_dirdatablk,
          VAR_4);
 VAR_18 = FUNC_5(VAR_13, VAR_13->m_dirdatablk,
      VAR_3);




 if (*VAR_10 <= VAR_17) {
  if (VAR_11(VAR_9, ".", 1, VAR_17 & 0x7fffffff, VAR_8->i_ino, VAR_0)) {
   *VAR_10 = VAR_17 & 0x7fffffff;
   return 0;
  }
 }




 if (*VAR_10 <= VAR_18) {
  VAR_19 = FUNC_7(VAR_16, &VAR_16->hdr.parent);
  if (VAR_11(VAR_9, "..", 2, VAR_18 & 0x7fffffff, VAR_19, VAR_0)) {
   *VAR_10 = VAR_18 & 0x7fffffff;
   return 0;
  }
 }




 VAR_15 = FUNC_6(VAR_16);
 for (VAR_12 = 0; VAR_12 < VAR_16->hdr.count; VAR_12++) {
  VAR_14 = FUNC_5(VAR_13, VAR_13->m_dirdatablk,
    FUNC_8(VAR_15));

  if (*VAR_10 > VAR_14) {
   VAR_15 = FUNC_11(VAR_16, VAR_15);
   continue;
  }

  VAR_19 = FUNC_7(VAR_16, FUNC_10(VAR_15));
  if (VAR_11(VAR_9, (char *)VAR_15->name, VAR_15->namelen,
       VAR_14 & 0x7fffffff, VAR_19, VAR_1)) {
   *VAR_10 = VAR_14 & 0x7fffffff;
   return 0;
  }
  VAR_15 = FUNC_11(VAR_16, VAR_15);
 }

 *VAR_10 = FUNC_5(VAR_13, VAR_13->m_dirdatablk + 1, 0) &
   0x7fffffff;
 return 0;
}
