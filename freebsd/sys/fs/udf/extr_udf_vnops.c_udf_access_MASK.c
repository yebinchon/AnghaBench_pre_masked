
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vop_access_args {int a_accmode; int a_cred; struct vnode* a_vp; } ;
struct vnode {int v_type; } ;
struct udf_node {TYPE_1__* fentry; } ;
typedef int mode_t ;
typedef int accmode_t ;
struct TYPE_2__ {int gid; int uid; } ;


 int VAR_0 ;



 struct udf_node* FUNC_0 (struct vnode*) ;
 int VAR_1 ;
 int FUNC_1 (struct udf_node*) ;
 int FUNC_2 (int,int ,int ,int ,int,int ,int *) ;

__attribute__((used)) static int
FUNC_3(struct vop_access_args *VAR_2)
{
 struct vnode *VAR_3;
 struct udf_node *VAR_4;
 accmode_t VAR_5;
 mode_t VAR_6;

 VAR_3 = VAR_2->a_vp;
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_2->a_accmode;

 if (VAR_5 & VAR_1) {
  switch (VAR_3->v_type) {
  case 130:
  case 129:
  case 128:
   return (VAR_0);

  default:
   break;
  }
 }

 VAR_6 = FUNC_1(VAR_4);

 return (FUNC_2(VAR_3->v_type, VAR_6, VAR_4->fentry->uid, VAR_4->fentry->gid,
     VAR_5, VAR_2->a_cred, ((void*)0)));
}
