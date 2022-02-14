
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_12__ {int i_mount; } ;
typedef TYPE_1__ xfs_inode_t ;
struct TYPE_13__ {int if_flags; } ;
typedef TYPE_2__ xfs_ifork_t ;
typedef scalar_t__ xfs_fsblock_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef int xfs_extnum_t ;
struct TYPE_14__ {scalar_t__ br_startoff; scalar_t__ br_startblock; scalar_t__ br_blockcount; } ;
typedef TYPE_3__ xfs_bmbt_irec_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;
 TYPE_2__* FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_1__*,scalar_t__,int,int*,int *,TYPE_3__*,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_1__*,int) ;
 int VAR_7 ;

int
FUNC_11(
 xfs_trans_t *VAR_8,
 xfs_inode_t *VAR_9,
 int VAR_10,
 xfs_fsblock_t *VAR_11,
 xfs_fileoff_t VAR_12)
{
 int VAR_13;
 int VAR_14;
 xfs_bmbt_irec_t VAR_15;
 xfs_ifork_t *VAR_16;
 xfs_extnum_t VAR_17;
 xfs_bmbt_irec_t VAR_18;

 VAR_16 = FUNC_5(VAR_9, VAR_10);
 if (FUNC_8(
     FUNC_4(VAR_9, VAR_10) != VAR_3 &&
     FUNC_4(VAR_9, VAR_10) != VAR_4)) {
        FUNC_2("xfs_bmapi_single", VAR_5,
    VAR_9->i_mount);
        return FUNC_1(VAR_0);
 }
 if (FUNC_3(VAR_9->i_mount))
  return FUNC_1(VAR_1);
 FUNC_6(VAR_7);
 if (!(VAR_16->if_flags & VAR_6) &&
     (VAR_14 = FUNC_10(VAR_8, VAR_9, VAR_10)))
  return VAR_14;
 (void)FUNC_9(VAR_9, VAR_12, VAR_10, &VAR_13, &VAR_17, &VAR_15,
  &VAR_18);




 if (VAR_13 || VAR_15.br_startoff > VAR_12) {
  *VAR_11 = VAR_2;
  return 0;
 }
 FUNC_0(!FUNC_7(VAR_15.br_startblock));
 FUNC_0(VAR_12 < VAR_15.br_startoff + VAR_15.br_blockcount);
 *VAR_11 = VAR_15.br_startblock + (VAR_12 - VAR_15.br_startoff);
 return 0;
}
