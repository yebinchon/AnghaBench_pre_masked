
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct vop_print_args {int a_vp; } ;
struct fuse_vnode_data {int flag; scalar_t__ nlookup; scalar_t__ parent_nid; } ;


 struct fuse_vnode_data* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct vop_print_args *VAR_0)
{
 struct fuse_vnode_data *VAR_1 = FUNC_0(VAR_0->a_vp);

 FUNC_2("nodeid: %ju, parent nodeid: %ju, nlookup: %ju, flag: %#x\n",
     (uintmax_t)FUNC_1(VAR_0->a_vp), (uintmax_t)VAR_1->parent_nid,
     (uintmax_t)VAR_1->nlookup,
     VAR_1->flag);

 return 0;
}
