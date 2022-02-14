
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int v_mount; } ;
struct tmpfs_node {scalar_t__ tn_size; int tn_status; } ;
typedef scalar_t__ off_t ;
struct TYPE_2__ {scalar_t__ tm_maxfilesize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ) ;
 struct tmpfs_node* FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,scalar_t__,int ) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vnode *VAR_5, off_t VAR_6)
{
 int VAR_7;
 struct tmpfs_node *VAR_8;

 VAR_8 = FUNC_1(VAR_5);

 if (VAR_6 < 0) {
  VAR_7 = VAR_1;
  goto out;
 }

 if (VAR_8->tn_size == VAR_6) {
  VAR_7 = 0;
  goto out;
 }

 if (VAR_6 > FUNC_0(VAR_5->v_mount)->tm_maxfilesize)
  return (VAR_0);

 VAR_7 = FUNC_2(VAR_5, VAR_6, VAR_2);
 if (VAR_7 == 0)
  VAR_8->tn_status |= VAR_3 | VAR_4;

out:
 FUNC_3(VAR_5);

 return (VAR_7);
}
