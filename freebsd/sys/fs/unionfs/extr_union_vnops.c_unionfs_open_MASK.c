
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_open_args {int a_mode; TYPE_1__* a_vp; int * a_fp; struct thread* a_td; struct ucred* a_cred; } ;
struct vnode {scalar_t__ v_type; int v_object; } ;
struct unionfs_node_status {scalar_t__ uns_lower_opencnt; scalar_t__ uns_upper_opencnt; int uns_lower_openmode; int uns_node_flag; } ;
struct unionfs_node {struct vnode* un_uppervp; struct vnode* un_lowervp; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_3__ {int v_object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct vnode* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct vnode*,int,struct ucred*,struct thread*) ;
 int FUNC_3 (struct vnode*,int,struct ucred*,struct thread*,int *) ;
 scalar_t__ VAR_6 ;
 struct unionfs_node* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct unionfs_node*,int,struct ucred*,struct thread*) ;
 int FUNC_6 (struct unionfs_node*,struct thread*,struct unionfs_node_status**) ;
 int FUNC_7 (struct unionfs_node*,struct unionfs_node_status*) ;

__attribute__((used)) static int
FUNC_8(struct vop_open_args *VAR_7)
{
 int VAR_8;
 struct unionfs_node *VAR_9;
 struct unionfs_node_status *VAR_10;
 struct vnode *VAR_11;
 struct vnode *VAR_12;
 struct vnode *VAR_13;
 struct ucred *VAR_14;
 struct thread *VAR_15;

 FUNC_1("unionfs_open: enter\n");

 FUNC_0(VAR_7->a_vp);

 VAR_8 = 0;
 VAR_9 = FUNC_4(VAR_7->a_vp);
 VAR_11 = VAR_9->un_uppervp;
 VAR_12 = VAR_9->un_lowervp;
 VAR_13 = VAR_2;
 VAR_14 = VAR_7->a_cred;
 VAR_15 = VAR_7->a_td;

 FUNC_6(VAR_9, VAR_15, &VAR_10);

 if (VAR_10->uns_lower_opencnt > 0 || VAR_10->uns_upper_opencnt > 0) {

  if (VAR_10->uns_upper_opencnt > 0)
   VAR_13 = VAR_11;
  else
   VAR_13 = VAR_12;

  if (VAR_13 == VAR_12 &&
      (VAR_7->a_mode & VAR_1) && VAR_12->v_type == VAR_6)
   VAR_13 = VAR_2;
 }
 if (VAR_13 == VAR_2) {
  if (VAR_11 == VAR_2) {
   if ((VAR_7->a_mode & VAR_1) && VAR_12->v_type == VAR_6) {
    VAR_8 = FUNC_5(VAR_9,
        !(VAR_7->a_mode & VAR_3), VAR_14, VAR_15);
    if (VAR_8 != 0)
     goto unionfs_open_abort;
    VAR_13 = VAR_11 = VAR_9->un_uppervp;
   } else
    VAR_13 = VAR_12;
  } else
   VAR_13 = VAR_11;
 }

 VAR_8 = FUNC_3(VAR_13, VAR_7->a_mode, VAR_14, VAR_15, VAR_7->a_fp);
 if (VAR_8 == 0) {
  if (VAR_13 == VAR_11) {
   if (VAR_11->v_type == VAR_5 && VAR_12 != VAR_2 &&
       VAR_10->uns_lower_opencnt <= 0) {

    VAR_8 = FUNC_3(VAR_12, VAR_0, VAR_14, VAR_15, ((void*)0));
    if (VAR_8 != 0) {
     FUNC_2(VAR_11, VAR_7->a_mode, VAR_14, VAR_15);
     goto unionfs_open_abort;
    }
    VAR_10->uns_node_flag |= VAR_4;
    VAR_10->uns_lower_opencnt++;
   }
   VAR_10->uns_upper_opencnt++;
  } else {
   VAR_10->uns_lower_opencnt++;
   VAR_10->uns_lower_openmode = VAR_7->a_mode;
  }
  VAR_7->a_vp->v_object = VAR_13->v_object;
 }

unionfs_open_abort:
 if (VAR_8 != 0)
  FUNC_7(VAR_9, VAR_10);

 FUNC_1("unionfs_open: leave (%d)\n", VAR_8);

 return (VAR_8);
}
