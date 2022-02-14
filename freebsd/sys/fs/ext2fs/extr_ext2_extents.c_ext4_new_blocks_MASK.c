
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int dummy; } ;
struct m_ext2fs {scalar_t__ e2fs_bsize; } ;
struct inode {int i_flag; int i_vnode; int i_ump; struct m_ext2fs* i_e2fs; } ;
typedef scalar_t__ e4fs_daddr_t ;
typedef int daddr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*,int ,scalar_t__,int,struct ucred*,scalar_t__*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static e4fs_daddr_t
FUNC_3(struct inode *VAR_2, daddr_t VAR_3, e4fs_daddr_t VAR_4,
    struct ucred *VAR_5, unsigned long *VAR_6, int *VAR_7)
{
 struct m_ext2fs *VAR_8;
 e4fs_daddr_t VAR_9;




 if (*VAR_6 > 1)
  return (0);

 VAR_8 = VAR_2->i_e2fs;
 FUNC_0(VAR_2->i_ump);
 *VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, (int)VAR_8->e2fs_bsize, VAR_5, &VAR_9);
 if (*VAR_7)
  return (0);

 if (VAR_9) {
  VAR_2->i_flag |= VAR_0 | VAR_1;
  FUNC_2(VAR_2->i_vnode, 1);
 }

 return (VAR_9);
}
