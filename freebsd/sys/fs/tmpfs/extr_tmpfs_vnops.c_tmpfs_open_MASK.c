
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_open_args {int a_mode; int a_td; struct vnode* a_vp; } ;
struct vnode {scalar_t__ v_type; } ;
struct TYPE_4__ {TYPE_1__* tn_aobj; } ;
struct tmpfs_node {int tn_links; int tn_flags; int tn_size; TYPE_2__ tn_reg; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct vnode*) ;
 struct tmpfs_node* FUNC_3 (struct vnode*) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct vnode*,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct vop_open_args *VAR_7)
{
 struct vnode *VAR_8 = VAR_7->a_vp;
 int VAR_9 = VAR_7->a_mode;

 int VAR_10;
 struct tmpfs_node *VAR_11;

 FUNC_1(FUNC_2(VAR_8));

 VAR_11 = FUNC_3(VAR_8);




 if (VAR_11->tn_links < 1)
  return (VAR_1);


 if (VAR_11->tn_flags & VAR_0 && (VAR_9 & (VAR_3 | VAR_5)) == VAR_3)
  VAR_10 = VAR_2;
 else {
  VAR_10 = 0;

  FUNC_0(VAR_8->v_type != VAR_6 || (VAR_11->tn_reg.tn_aobj->flags &
      VAR_4) == 0, ("dead object"));
  FUNC_4(VAR_8, VAR_11->tn_size, VAR_7->a_td);
 }

 FUNC_1(FUNC_2(VAR_8));
 return VAR_10;
}
