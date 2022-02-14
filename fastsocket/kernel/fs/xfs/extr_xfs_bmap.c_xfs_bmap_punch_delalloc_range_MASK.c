
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct TYPE_6__ {scalar_t__ br_startblock; scalar_t__ br_blockcount; } ;
typedef TYPE_1__ xfs_bmbt_irec_t ;
struct TYPE_7__ {int xbf_first; int xbf_count; } ;
typedef TYPE_2__ xfs_bmap_free_t ;
struct xfs_inode {int i_ino; int i_mount; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ,char*,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (int *,struct xfs_inode*,scalar_t__,int,int ,int *,int ,TYPE_1__*,int*,int *) ;
 int FUNC_6 (int *,struct xfs_inode*,scalar_t__,int,int ,int,int *,TYPE_2__*,int*) ;
 int FUNC_7 (struct xfs_inode*,int ) ;

int
FUNC_8(
 struct xfs_inode *VAR_3,
 xfs_fileoff_t VAR_4,
 xfs_fileoff_t VAR_5)
{
 xfs_fileoff_t VAR_6 = VAR_5;
 int VAR_7 = 0;

 FUNC_0(FUNC_7(VAR_3, VAR_2));

 do {
  int VAR_8;
  xfs_bmbt_irec_t VAR_9;
  int VAR_10 = 1;
  xfs_fsblock_t VAR_11;
  xfs_bmap_free_t VAR_12;







  VAR_7 = FUNC_5(((void*)0), VAR_3, VAR_4, 1,
    VAR_1, ((void*)0), 0, &VAR_9,
    &VAR_10, ((void*)0));

  if (VAR_7) {

   if (!FUNC_2(VAR_3->i_mount)) {
    FUNC_3(VAR_3->i_mount,
   "Failed delalloc mapping lookup ino %lld fsb %lld.",
      VAR_3->i_ino, VAR_4);
   }
   break;
  }
  if (!VAR_10) {

   goto next_block;
  }
  if (VAR_9.br_startblock != VAR_0) {

   goto next_block;
  }
  FUNC_1(VAR_9.br_blockcount == 0);







  FUNC_4(&VAR_12, &VAR_11);
  VAR_7 = FUNC_6(((void*)0), VAR_3, VAR_4, 1, 0, 1, &VAR_11,
     &VAR_12, &VAR_8);
  if (VAR_7)
   break;

  FUNC_0(!VAR_12.xbf_count && !VAR_12.xbf_first);
next_block:
  VAR_4++;
  VAR_6--;
 } while(VAR_6 > 0);

 return VAR_7;
}
