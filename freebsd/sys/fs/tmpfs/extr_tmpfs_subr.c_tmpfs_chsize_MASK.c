
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_quad_t ;
struct vnode {int v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct tmpfs_node {int tn_flags; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int mnt_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 struct tmpfs_node* FUNC_1 (struct vnode*) ;

 int FUNC_2 (struct vnode*,int ) ;

int
FUNC_3(struct vnode *VAR_7, u_quad_t VAR_8, struct ucred *VAR_9,
    struct thread *VAR_10)
{
 int VAR_11;
 struct tmpfs_node *VAR_12;

 FUNC_0(VAR_7, "chsize");

 VAR_12 = FUNC_1(VAR_7);


 VAR_11 = 0;
 switch (VAR_7->v_type) {
 case 130:
  return VAR_1;

 case 128:
  if (VAR_7->v_mount->mnt_flag & VAR_6)
   return VAR_4;
  break;

 case 132:

 case 131:

 case 129:



  return 0;

 default:

  return VAR_2;
 }


 if (VAR_12->tn_flags & (VAR_5 | VAR_0))
  return VAR_3;

 VAR_11 = FUNC_2(VAR_7, VAR_8);



 FUNC_0(VAR_7, "chsize2");

 return (VAR_11);
}
