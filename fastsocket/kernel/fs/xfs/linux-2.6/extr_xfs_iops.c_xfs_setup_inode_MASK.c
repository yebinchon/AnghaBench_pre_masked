
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {int if_rdev; } ;
struct TYPE_13__ {int if_flags; TYPE_2__ if_u2; } ;
struct TYPE_23__ {int t_nsec; int t_sec; } ;
struct TYPE_21__ {int t_nsec; int t_sec; } ;
struct TYPE_19__ {int t_nsec; int t_sec; } ;
struct TYPE_24__ {int di_mode; TYPE_8__ di_ctime; TYPE_6__ di_mtime; TYPE_4__ di_atime; int di_size; int di_gen; int di_gid; int di_uid; int di_nlink; } ;
struct TYPE_22__ {int tv_nsec; int tv_sec; } ;
struct TYPE_20__ {int tv_nsec; int tv_sec; } ;
struct TYPE_18__ {int tv_nsec; int tv_sec; } ;
struct inode {int i_state; int i_mode; int i_rdev; int * i_op; TYPE_11__* i_mapping; int * i_fop; int i_sb; TYPE_7__ i_ctime; TYPE_5__ i_mtime; TYPE_3__ i_atime; int i_generation; int i_gid; int i_uid; int i_nlink; int i_ino; } ;
struct xfs_inode {TYPE_10__ i_df; TYPE_9__ i_d; TYPE_1__* i_mount; int i_ino; struct inode i_vnode; } ;
struct TYPE_16__ {int m_super; } ;
struct TYPE_15__ {int m_sb; } ;
struct TYPE_14__ {int * a_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;




 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 TYPE_12__* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (struct inode*,int,int ) ;
 int FUNC_5 (int ,struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct inode*) ;
 int VAR_5 ;
 int FUNC_9 (struct inode*,struct xfs_inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (struct xfs_inode*,int ) ;
 int VAR_10 ;
 int FUNC_11 (int *) ;
 int VAR_11 ;

void
FUNC_12(
 struct xfs_inode *VAR_12)
{
 struct inode *VAR_13 = &VAR_12->i_vnode;

 VAR_13->i_ino = VAR_12->i_ino;
 VAR_13->i_state = VAR_1|VAR_0;
 FUNC_5(VAR_12->i_mount->m_super, VAR_13);

 VAR_13->i_mode = VAR_12->i_d.di_mode;
 VAR_13->i_nlink = VAR_12->i_d.di_nlink;
 VAR_13->i_uid = VAR_12->i_d.di_uid;
 VAR_13->i_gid = VAR_12->i_d.di_gid;

 switch (VAR_13->i_mode & VAR_2) {
 case 132:
 case 131:
  VAR_13->i_rdev =
   FUNC_0(FUNC_6(VAR_12->i_df.if_u2.if_rdev) & 0x1ff,
         FUNC_7(VAR_12->i_df.if_u2.if_rdev));
  break;
 default:
  VAR_13->i_rdev = 0;
  break;
 }

 VAR_13->i_generation = VAR_12->i_d.di_gen;
 FUNC_3(VAR_13, VAR_12->i_d.di_size);
 VAR_13->i_atime.tv_sec = VAR_12->i_d.di_atime.t_sec;
 VAR_13->i_atime.tv_nsec = VAR_12->i_d.di_atime.t_nsec;
 VAR_13->i_mtime.tv_sec = VAR_12->i_d.di_mtime.t_sec;
 VAR_13->i_mtime.tv_nsec = VAR_12->i_d.di_mtime.t_nsec;
 VAR_13->i_ctime.tv_sec = VAR_12->i_d.di_ctime.t_sec;
 VAR_13->i_ctime.tv_nsec = VAR_12->i_d.di_ctime.t_nsec;
 FUNC_9(VAR_13, VAR_12);

 switch (VAR_13->i_mode & VAR_2) {
 case 128:
  VAR_13->i_op = &VAR_10;
  VAR_13->i_fop = &VAR_9;
  VAR_13->i_mapping->a_ops = &VAR_5;
  break;
 case 130:
  if (FUNC_11(&FUNC_1(VAR_13->i_sb)->m_sb))
   VAR_13->i_op = &VAR_6;
  else
   VAR_13->i_op = &VAR_8;
  VAR_13->i_fop = &VAR_7;
  break;
 case 129:
  VAR_13->i_op = &VAR_11;
  if (!(VAR_12->i_df.if_flags & VAR_3))
   VAR_13->i_mapping->a_ops = &VAR_5;
  break;
 default:
  VAR_13->i_op = &VAR_10;
  FUNC_4(VAR_13, VAR_13->i_mode, VAR_13->i_rdev);
  break;
 }

 FUNC_10(VAR_12, VAR_4);
 FUNC_2();

 FUNC_8(VAR_13);
}
