
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_pathconf_args {int a_name; int* a_retval; struct vnode* a_vp; } ;
struct vnode {TYPE_2__* v_mount; int v_type; } ;
struct thread {int td_ucred; } ;
struct nfsvattr {int na_suppattr; } ;
struct nfsv3_pathconf {int pc_linkmax; int pc_namemax; int pc_notrunc; int pc_chownrestricted; int pc_casepreserving; scalar_t__ pc_caseinsensitive; } ;
struct TYPE_3__ {int f_bsize; int f_iosize; } ;
struct TYPE_4__ {TYPE_1__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (struct vnode*) ;
 scalar_t__ FUNC_3 (struct vnode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct thread* VAR_11 ;
 int FUNC_4 (struct vnode**,struct nfsvattr*,int *,int *,int ,int) ;
 int FUNC_5 (struct vnode*,struct nfsv3_pathconf*,int ,struct thread*,struct nfsvattr*,int*,int *) ;
 int VAR_12 ;
 int FUNC_6 (struct vop_pathconf_args*) ;

__attribute__((used)) static int
FUNC_7(struct vop_pathconf_args *VAR_13)
{
 struct nfsv3_pathconf VAR_14;
 struct nfsvattr VAR_15;
 struct vnode *VAR_16 = VAR_13->a_vp;
 struct thread *VAR_17 = VAR_11;
 int VAR_18, VAR_19;

 if ((FUNC_2(VAR_16) && (VAR_13->a_name == 138 ||
     VAR_13->a_name == 137 || VAR_13->a_name == 140 ||
     VAR_13->a_name == 136)) ||
     (FUNC_3(VAR_16) && VAR_13->a_name == 143)) {






  VAR_19 = FUNC_5(VAR_16, &VAR_14, VAR_17->td_ucred, VAR_17, &VAR_15,
      &VAR_18, ((void*)0));
  if (VAR_18 != 0)
   (void) FUNC_4(&VAR_16, &VAR_15, ((void*)0), ((void*)0), 0,
       1);
  if (VAR_19 != 0)
   return (VAR_19);
 } else {




  VAR_14.pc_linkmax = VAR_4;
  VAR_14.pc_namemax = VAR_5;
  VAR_14.pc_notrunc = 1;
  VAR_14.pc_chownrestricted = 1;
  VAR_14.pc_caseinsensitive = 0;
  VAR_14.pc_casepreserving = 1;
  VAR_19 = 0;
 }
 switch (VAR_13->a_name) {
 case 138:

  *VAR_13->a_retval = VAR_14.pc_linkmax;



  break;
 case 137:
  *VAR_13->a_retval = VAR_14.pc_namemax;
  break;
 case 135:
  if (VAR_13->a_vp->v_type == VAR_9 || VAR_13->a_vp->v_type == VAR_10)
   *VAR_13->a_retval = VAR_8;
  else
   VAR_19 = VAR_1;
  break;
 case 140:
  *VAR_13->a_retval = VAR_14.pc_chownrestricted;
  break;
 case 136:
  *VAR_13->a_retval = VAR_14.pc_notrunc;
  break;
 case 143:
  if (FUNC_3(VAR_16) && VAR_12 != 0 && VAR_18 != 0 &&
      FUNC_1(&VAR_15.na_suppattr, VAR_3))
   *VAR_13->a_retval = 1;
  else
   *VAR_13->a_retval = 0;
  break;
 case 142:
  if (FUNC_3(VAR_16))
   *VAR_13->a_retval = VAR_0;
  else
   *VAR_13->a_retval = 3;
  break;
 case 134:
  *VAR_13->a_retval = 0;
  break;
 case 128:
  *VAR_13->a_retval = 0;
  break;
 case 141:
  *VAR_13->a_retval = VAR_16->v_mount->mnt_stat.f_bsize;
  break;
 case 139:
  if (FUNC_2(VAR_16))
   *VAR_13->a_retval = 64;
  else
   *VAR_13->a_retval = 32;
  break;
 case 133:
  *VAR_13->a_retval = VAR_16->v_mount->mnt_stat.f_iosize;
  break;
 case 132:
  *VAR_13->a_retval = -1;
  break;
 case 131:
  *VAR_13->a_retval = VAR_16->v_mount->mnt_stat.f_iosize;
  break;
 case 130:
  *VAR_13->a_retval = VAR_7;
  break;
 case 129:
  *VAR_13->a_retval = VAR_6;
  break;

 default:
  VAR_19 = FUNC_6(VAR_13);
  break;
 }
 return (VAR_19);
}
