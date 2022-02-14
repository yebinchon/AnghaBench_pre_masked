
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct unionfs_node {scalar_t__ un_uppervp; scalar_t__ un_lowervp; } ;
struct unionfs_mount {TYPE_2__* um_lowervp; TYPE_1__* um_uppervp; } ;
struct mount {int dummy; } ;
struct TYPE_4__ {int v_mount; } ;
struct TYPE_3__ {int v_mount; } ;


 struct unionfs_mount* FUNC_0 (struct mount*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int,scalar_t__,int,char const*) ;
 struct unionfs_node* FUNC_2 (struct vnode*) ;

__attribute__((used)) static int
FUNC_3(struct mount *VAR_1, int VAR_2, struct vnode *VAR_3,
    int VAR_4, const char *VAR_5)
{
 struct unionfs_mount *VAR_6;
 struct unionfs_node *VAR_7;

 VAR_6 = FUNC_0(VAR_1);
 VAR_7 = FUNC_2(VAR_3);

 if (VAR_7->un_uppervp != VAR_0) {
  return (FUNC_1(VAR_6->um_uppervp->v_mount, VAR_2,
      VAR_7->un_uppervp, VAR_4, VAR_5));
 } else {
  return (FUNC_1(VAR_6->um_lowervp->v_mount, VAR_2,
      VAR_7->un_lowervp, VAR_4, VAR_5));
 }
}
