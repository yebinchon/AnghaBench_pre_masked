
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int xfs_flock64_t ;
struct xfs_inode {TYPE_1__* i_mount; } ;
struct inode {int i_flags; int i_mode; } ;
struct file {int f_mode; int f_flags; int f_pos; } ;
struct TYPE_2__ {int m_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct xfs_inode*,unsigned int,int *,int ,int) ;
 int FUNC_6 (int *) ;

int
FUNC_7(
 struct xfs_inode *VAR_14,
 struct inode *VAR_15,
 struct file *VAR_16,
 int VAR_17,
 unsigned int VAR_18,
 xfs_flock64_t *VAR_19)
{
 int VAR_20 = 0;
 int VAR_21;





 if (!FUNC_6(&VAR_14->i_mount->m_sb) &&
     !FUNC_2(VAR_0))
  return -FUNC_1(VAR_3);

 if (VAR_15->i_flags & (VAR_10|VAR_9))
  return -FUNC_1(VAR_3);

 if (!(VAR_16->f_mode & VAR_4))
  return -FUNC_1(VAR_1);

 if (!FUNC_0(VAR_15->i_mode))
  return -FUNC_1(VAR_2);

 if (VAR_16->f_flags & (VAR_6|VAR_7))
  VAR_20 |= VAR_12;

 if (VAR_16->f_flags & VAR_8)
  VAR_20 |= VAR_13;

 if (VAR_17 & VAR_5)
  VAR_20 |= VAR_11;

 VAR_21 = FUNC_4(VAR_16);
 if (VAR_21)
  return VAR_21;
 VAR_21 = FUNC_5(VAR_14, VAR_18, VAR_19, VAR_16->f_pos, VAR_20);
 FUNC_3(VAR_16);
 return -VAR_21;
}
