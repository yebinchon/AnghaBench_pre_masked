
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_copy_file_range_args {int a_fsizetd; int a_outcred; int a_incred; int a_flags; int a_lenp; int a_outoffp; int a_outvp; int a_inoffp; int a_invp; } ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct vop_copy_file_range_args *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->a_invp, VAR_0->a_inoffp,
     VAR_0->a_outvp, VAR_0->a_outoffp, VAR_0->a_lenp, VAR_0->a_flags, VAR_0->a_incred,
     VAR_0->a_outcred, VAR_0->a_fsizetd);
 return (VAR_1);
}
