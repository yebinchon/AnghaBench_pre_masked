
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int xfs_off_t ;
struct TYPE_18__ {scalar_t__ m_dirdatablk; } ;
typedef TYPE_1__ xfs_mount_t ;
struct TYPE_19__ {TYPE_1__* i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_20__ {int length; int freetag; } ;
typedef TYPE_3__ xfs_dir2_data_unused_t ;
struct TYPE_21__ {int inumber; int namelen; scalar_t__ name; } ;
typedef TYPE_4__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_block_tail_t ;
struct TYPE_22__ {scalar_t__ u; } ;
typedef TYPE_5__ xfs_dir2_block_t ;
struct TYPE_23__ {TYPE_5__* data; } ;
typedef TYPE_6__ xfs_dabuf_t ;
typedef scalar_t__ (* filldir_t ) (void*,char*,int ,int,int ,int ) ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_6__*) ;
 int FUNC_4 (int *,TYPE_2__*,scalar_t__,int,TYPE_6__**,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int * FUNC_6 (TYPE_1__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_2__*,TYPE_6__*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (TYPE_1__*,scalar_t__,int) ;

int
FUNC_12(
 xfs_inode_t *VAR_3,
 void *VAR_4,
 xfs_off_t *VAR_5,
 filldir_t VAR_6)
{
 xfs_dir2_block_t *VAR_7;
 xfs_dabuf_t *VAR_8;
 xfs_dir2_block_tail_t *VAR_9;
 xfs_dir2_data_entry_t *VAR_10;
 xfs_dir2_data_unused_t *VAR_11;
 char *VAR_12;
 int VAR_13;
 xfs_mount_t *VAR_14;
 char *VAR_15;
 int VAR_16;
 xfs_off_t VAR_17;

 VAR_14 = VAR_3->i_mount;



 if (FUNC_9(VAR_14, *VAR_5) > VAR_14->m_dirdatablk) {
  return 0;
 }



 VAR_13 = FUNC_4(((void*)0), VAR_3, VAR_14->m_dirdatablk, -1,
    &VAR_8, VAR_1);
 if (VAR_13)
  return VAR_13;

 FUNC_0(VAR_8 != ((void*)0));




 VAR_16 = FUNC_10(VAR_14, *VAR_5);
 VAR_7 = VAR_8->data;
 FUNC_7(VAR_3, VAR_8);



 VAR_9 = FUNC_6(VAR_14, VAR_7);
 VAR_15 = (char *)VAR_7->u;
 VAR_12 = (char *)FUNC_5(VAR_9);





 while (VAR_15 < VAR_12) {
  VAR_11 = (xfs_dir2_data_unused_t *)VAR_15;



  if (FUNC_1(VAR_11->freetag) == VAR_2) {
   VAR_15 += FUNC_1(VAR_11->length);
   continue;
  }

  VAR_10 = (xfs_dir2_data_entry_t *)VAR_15;




  VAR_15 += FUNC_8(VAR_10->namelen);



  if ((char *)VAR_10 - (char *)VAR_7 < VAR_16)
   continue;

  VAR_17 = FUNC_11(VAR_14, VAR_14->m_dirdatablk,
         (char *)VAR_10 - (char *)VAR_7);




  if (VAR_6(VAR_4, (char *)VAR_10->name, VAR_10->namelen,
       VAR_17 & 0x7fffffff, FUNC_2(VAR_10->inumber),
       VAR_0)) {
   *VAR_5 = VAR_17 & 0x7fffffff;
   FUNC_3(((void*)0), VAR_8);
   return 0;
  }
 }





 *VAR_5 = FUNC_11(VAR_14, VAR_14->m_dirdatablk + 1, 0) &
   0x7fffffff;
 FUNC_3(((void*)0), VAR_8);
 return 0;
}
