
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int m_dirblksize; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_15__ {int length; int freetag; } ;
typedef TYPE_3__ xfs_dir2_data_unused_t ;
struct TYPE_13__ {int magic; int bestfree; } ;
struct TYPE_16__ {TYPE_1__ hdr; scalar_t__ u; } ;
typedef TYPE_4__ xfs_dir2_data_t ;
struct TYPE_17__ {int namelen; } ;
typedef TYPE_5__ xfs_dir2_data_entry_t ;
typedef int xfs_dir2_block_tail_t ;
typedef int xfs_dir2_block_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (int *) ;
 int * FUNC_5 (TYPE_2__*,int *) ;
 int * FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*,int*) ;
 int * FUNC_9 (TYPE_3__*) ;

void
FUNC_10(
 xfs_mount_t *VAR_3,
 xfs_dir2_data_t *VAR_4,
 int *VAR_5)
{
 xfs_dir2_block_tail_t *VAR_6;
 xfs_dir2_data_entry_t *VAR_7;
 xfs_dir2_data_unused_t *VAR_8;
 char *VAR_9;
 char *VAR_10;
 FUNC_3(VAR_4->hdr.bestfree, 0, sizeof(VAR_4->hdr.bestfree));
 *VAR_5 = 1;



 VAR_10 = (char *)VAR_4->u;
 if (FUNC_2(VAR_4->hdr.magic) == VAR_0) {
  VAR_6 = FUNC_5(VAR_3, (xfs_dir2_block_t *)VAR_4);
  VAR_9 = (char *)FUNC_4(VAR_6);
 } else
  VAR_9 = (char *)VAR_4 + VAR_3->m_dirblksize;



 while (VAR_10 < VAR_9) {
  VAR_8 = (xfs_dir2_data_unused_t *)VAR_10;



  if (FUNC_1(VAR_8->freetag) == VAR_1) {
   FUNC_0((char *)VAR_8 - (char *)VAR_4 ==
          FUNC_1(*FUNC_9(VAR_8)));
   FUNC_8(VAR_4, VAR_8, VAR_5);
   VAR_10 += FUNC_1(VAR_8->length);
  }



  else {
   VAR_7 = (xfs_dir2_data_entry_t *)VAR_10;
   FUNC_0((char *)VAR_7 - (char *)VAR_4 ==
          FUNC_1(*FUNC_6(VAR_7)));
   VAR_10 += FUNC_7(VAR_7->namelen);
  }
 }
}
