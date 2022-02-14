
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {scalar_t__ v_type; struct vm_object* v_object; } ;
struct vm_object {int flags; scalar_t__ generation; scalar_t__ cleangeneration; } ;
struct tmpfs_node {int tn_status; } ;


 int FUNC_0 (struct vnode*,char*) ;
 int FUNC_1 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct vm_object*) ;
 int FUNC_3 (struct vm_object*) ;
 struct tmpfs_node* FUNC_4 (struct vnode*) ;
 scalar_t__ VAR_4 ;

void
FUNC_5(struct vnode *VAR_5)
{
 struct tmpfs_node *VAR_6;
 struct vm_object *VAR_7;

 FUNC_0(VAR_5, "check_mtime");
 if (VAR_5->v_type != VAR_4)
  return;
 VAR_7 = VAR_5->v_object;
 FUNC_1((VAR_7->flags & (VAR_1 | VAR_0)) ==
     (VAR_1 | VAR_0), ("non-tmpfs obj"));

 if (VAR_7->generation != VAR_7->cleangeneration) {
  FUNC_2(VAR_7);
  if (VAR_7->generation != VAR_7->cleangeneration) {
   VAR_7->cleangeneration = VAR_7->generation;
   VAR_6 = FUNC_4(VAR_5);
   VAR_6->tn_status |= VAR_3 |
       VAR_2;
  }
  FUNC_3(VAR_7);
 }
}
