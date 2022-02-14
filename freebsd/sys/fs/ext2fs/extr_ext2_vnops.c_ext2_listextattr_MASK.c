
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_listextattr_args {scalar_t__* a_size; int a_uio; int a_attrnamespace; int a_td; int a_cred; TYPE_1__* a_vp; } ;
struct m_ext2fs {int dummy; } ;
struct inode {scalar_t__ i_facl; struct m_ext2fs* i_e2fs; } ;
struct TYPE_3__ {scalar_t__ v_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct m_ext2fs*,int ) ;
 scalar_t__ FUNC_1 (struct m_ext2fs*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct inode*,int ,int ,scalar_t__*) ;
 int FUNC_4 (struct inode*,int ,int ,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct vop_listextattr_args *VAR_6)
{
 struct inode *VAR_7;
 struct m_ext2fs *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6->a_vp);
 VAR_8 = VAR_7->i_e2fs;

 if (!FUNC_0(VAR_7->i_e2fs, VAR_2))
  return (VAR_1);

 if (VAR_6->a_vp->v_type == VAR_4 || VAR_6->a_vp->v_type == VAR_3)
  return (VAR_1);

 VAR_9 = FUNC_5(VAR_6->a_vp, VAR_6->a_attrnamespace,
     VAR_6->a_cred, VAR_6->a_td, VAR_5);
 if (VAR_9)
  return (VAR_9);

 if (VAR_6->a_size != ((void*)0))
  *VAR_6->a_size = 0;

 if (FUNC_1(VAR_8) != VAR_0) {
  VAR_9 = FUNC_4(VAR_7, VAR_6->a_attrnamespace,
      VAR_6->a_uio, VAR_6->a_size);
  if (VAR_9)
   return (VAR_9);
 }

 if (VAR_7->i_facl)
  VAR_9 = FUNC_3(VAR_7, VAR_6->a_attrnamespace,
      VAR_6->a_uio, VAR_6->a_size);

 return (VAR_9);
}
