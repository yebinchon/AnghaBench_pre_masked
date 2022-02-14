
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int xfs_mru_cache_t ;
struct TYPE_24__ {int sb_agcount; } ;
struct TYPE_25__ {int m_flags; int m_agfrotor; TYPE_2__ m_sb; int * m_filestream; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_23__ {int di_mode; } ;
struct TYPE_26__ {int i_ino; TYPE_3__* i_mount; TYPE_1__ i_d; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int xfs_agnumber_t ;
struct TYPE_27__ {int ag; TYPE_4__* ip; } ;
typedef TYPE_5__ fstrm_item_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,TYPE_4__*,int,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_3__*,int,int*,int ,int ) ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (int *) ;
 TYPE_5__* FUNC_11 (int *,int ) ;
 int VAR_6 ;

int
FUNC_12(
 xfs_inode_t *VAR_7,
 xfs_inode_t *VAR_8)
{
 xfs_mount_t *VAR_9;
 xfs_mru_cache_t *VAR_10;
 fstrm_item_t *VAR_11;
 xfs_agnumber_t VAR_12, VAR_13, VAR_14;
 int VAR_15 = 0;

 FUNC_0(VAR_7->i_d.di_mode & VAR_2);
 FUNC_0(VAR_8->i_d.di_mode & VAR_3);
 if (!(VAR_7->i_d.di_mode & VAR_2) || !(VAR_8->i_d.di_mode & VAR_3))
  return -VAR_0;

 VAR_9 = VAR_7->i_mount;
 VAR_10 = VAR_9->m_filestream;
 if (!FUNC_8(VAR_7, VAR_4))
  return 1;


 VAR_11 = FUNC_11(VAR_10, VAR_7->i_ino);
 if (VAR_11) {
  FUNC_0(VAR_11->ip == VAR_7);
  VAR_12 = VAR_11->ag;
  FUNC_10(VAR_10);

  FUNC_2(VAR_9, VAR_7, VAR_7, VAR_12, FUNC_6(VAR_9, VAR_12));
  VAR_15 = FUNC_5(VAR_8, VAR_7, VAR_12);

  goto exit;
 }





 if (VAR_9->m_flags & VAR_5) {
  VAR_13 = VAR_6;
  VAR_14 = (VAR_9->m_agfrotor / VAR_13) % VAR_9->m_sb.sb_agcount;
  VAR_9->m_agfrotor = (VAR_9->m_agfrotor + 1) %
                   (VAR_9->m_sb.sb_agcount * VAR_13);
 } else
  VAR_14 = FUNC_3(VAR_9, VAR_7->i_ino);


 VAR_15 = FUNC_4(VAR_9, VAR_14, &VAR_12, 0, 0);
 if (VAR_15 || VAR_12 == VAR_1)
  goto exit_did_pick;


 VAR_15 = FUNC_5(VAR_7, ((void*)0), VAR_12);
 if (VAR_15)
  goto exit_did_pick;


 VAR_15 = FUNC_5(VAR_8, VAR_7, VAR_12);
 if (VAR_15)
  goto exit_did_pick;

 FUNC_1(VAR_9, VAR_8, VAR_7, VAR_12, FUNC_6(VAR_9, VAR_12));

exit_did_pick:





 if (VAR_12 != VAR_1)
  FUNC_7(VAR_9, VAR_12);

exit:
 FUNC_9(VAR_7, VAR_4);
 return -VAR_15;
}
