
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ufid {int ufid_ino; scalar_t__ ufid_gen; } ;
struct mount {int dummy; } ;
struct m_ext2fs {int e2fs_gcount; TYPE_1__* e2fs; } ;
struct inode {scalar_t__ i_mode; scalar_t__ i_gen; scalar_t__ i_nlink; } ;
struct fid {int dummy; } ;
struct TYPE_4__ {struct m_ext2fs* um_e2fs; } ;
struct TYPE_3__ {int e2fs_ipg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vnode* VAR_3 ;
 TYPE_2__* FUNC_0 (struct mount*) ;
 int FUNC_1 (struct mount*,int,int ,struct vnode**) ;
 struct inode* FUNC_2 (struct vnode*) ;
 int VAR_4 ;
 int FUNC_3 (struct vnode*,int ,int ) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct mount *VAR_5, struct fid *VAR_6, int VAR_7, struct vnode **VAR_8)
{
 struct inode *VAR_9;
 struct ufid *VAR_10;
 struct vnode *VAR_11;
 struct m_ext2fs *VAR_12;
 int VAR_13;

 VAR_10 = (struct ufid *)VAR_6;
 VAR_12 = FUNC_0(VAR_5)->um_e2fs;
 if (VAR_10->ufid_ino < VAR_1 ||
     VAR_10->ufid_ino > VAR_12->e2fs_gcount * VAR_12->e2fs->e2fs_ipg)
  return (VAR_0);

 VAR_13 = FUNC_1(VAR_5, VAR_10->ufid_ino, VAR_2, &VAR_11);
 if (VAR_13) {
  *VAR_8 = VAR_3;
  return (VAR_13);
 }
 VAR_9 = FUNC_2(VAR_11);
 if (VAR_9->i_mode == 0 ||
     VAR_9->i_gen != VAR_10->ufid_gen || VAR_9->i_nlink <= 0) {
  FUNC_4(VAR_11);
  *VAR_8 = VAR_3;
  return (VAR_0);
 }
 *VAR_8 = VAR_11;
 FUNC_3(*VAR_8, 0, VAR_4);
 return (0);
}
