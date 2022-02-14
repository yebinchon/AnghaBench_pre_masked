
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_setextattr_args {int a_uio; int a_name; int a_attrnamespace; int a_td; int a_cred; TYPE_1__* a_vp; } ;
struct m_ext2fs {int dummy; } ;
struct inode {struct m_ext2fs* i_e2fs; } ;
struct TYPE_3__ {scalar_t__ v_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct inode* FUNC_2 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_3 (struct inode*,int ,int ,int ) ;
 int FUNC_4 (struct inode*,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct vop_setextattr_args *VAR_7)
{
 struct inode *VAR_8;
 struct m_ext2fs *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7->a_vp);
 VAR_9 = VAR_8->i_e2fs;

 if (!FUNC_0(VAR_8->i_e2fs, VAR_3))
  return (VAR_2);

 if (VAR_7->a_vp->v_type == VAR_5 || VAR_7->a_vp->v_type == VAR_4)
  return (VAR_2);

 VAR_10 = FUNC_6(VAR_7->a_vp, VAR_7->a_attrnamespace,
     VAR_7->a_cred, VAR_7->a_td, VAR_6);
 if (VAR_10)
  return (VAR_10);

 VAR_10 = FUNC_5(VAR_7->a_attrnamespace, VAR_7->a_name);
 if (VAR_10)
  return (VAR_10);

 if (FUNC_1(VAR_9) != VAR_0) {
  VAR_10 = FUNC_4(VAR_8, VAR_7->a_attrnamespace,
      VAR_7->a_name, VAR_7->a_uio);
  if (VAR_10 != VAR_1)
   return (VAR_10);
 }

 VAR_10 = FUNC_3(VAR_8, VAR_7->a_attrnamespace,
     VAR_7->a_name, VAR_7->a_uio);

 return (VAR_10);
}
