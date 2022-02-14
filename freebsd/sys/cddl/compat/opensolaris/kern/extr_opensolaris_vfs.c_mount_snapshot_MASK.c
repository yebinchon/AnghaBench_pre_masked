
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ v_type; int v_iflag; struct mount* v_mountedhere; TYPE_1__* v_mount; } ;
typedef TYPE_2__ vnode_t ;
struct vfsconf {int dummy; } ;
struct ucred {int dummy; } ;
struct mount {int mnt_flag; int * mnt_optnew; int mnt_stat; int * mnt_opt; int * mnt_vnodecovered; } ;
struct TYPE_18__ {struct ucred* td_ucred; } ;
typedef TYPE_3__ kthread_t ;
struct TYPE_16__ {int mnt_cred; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,struct mount*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct mount*) ;
 scalar_t__ FUNC_3 (struct mount*,int,TYPE_2__**) ;
 int FUNC_4 (struct mount*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_13 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int VAR_14 ;
 int FUNC_8 (TYPE_2__*) ;
 struct ucred* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (char const*) ;
 struct vfsconf* FUNC_13 (char const*,TYPE_3__*,int*) ;
 int FUNC_14 (int *,int ,int ) ;
 int FUNC_15 (int *) ;
 struct mount* FUNC_16 (TYPE_2__*,struct vfsconf*,char*,int ) ;
 int FUNC_17 (struct mount*) ;
 int FUNC_18 (struct mount*) ;
 int FUNC_19 (struct mount*,char*,char*,int ) ;
 int FUNC_20 (struct mount*) ;
 int FUNC_21 (TYPE_2__*,int) ;
 int FUNC_22 (TYPE_2__*) ;

int
FUNC_23(kthread_t *VAR_19, vnode_t **VAR_20, const char *VAR_21, char *VAR_22,
    char *VAR_23, int VAR_24)
{
 struct vfsconf *VAR_25;
 struct mount *VAR_26;
 vnode_t *VAR_27, *VAR_28;
 struct ucred *VAR_29;
 int VAR_30;

 FUNC_0(*VAR_20, "mount_snapshot");

 VAR_27 = *VAR_20;
 *VAR_20 = ((void*)0);
 VAR_30 = 0;






 if (FUNC_12(VAR_21) >= VAR_6 || FUNC_12(VAR_22) >= VAR_7)
  VAR_30 = VAR_1;
 if (VAR_30 == 0 && (VAR_25 = FUNC_13(VAR_21, VAR_19, &VAR_30)) == ((void*)0))
  VAR_30 = VAR_2;
 if (VAR_30 == 0 && VAR_27->v_type != VAR_12)
  VAR_30 = VAR_3;




 if (VAR_30 == 0) {
  FUNC_5(VAR_27);
  if ((VAR_27->v_iflag & VAR_13) == 0 && VAR_27->v_mountedhere == ((void*)0))
   VAR_27->v_iflag |= VAR_13;
  else
   VAR_30 = VAR_0;
  FUNC_6(VAR_27);
 }
 if (VAR_30 != 0) {
  FUNC_22(VAR_27);
  return (VAR_30);
 }
 FUNC_7(VAR_27, 0);






 VAR_26 = FUNC_16(VAR_27, VAR_25, VAR_22, VAR_27->v_mount->mnt_cred);

 VAR_26->mnt_optnew = ((void*)0);
 FUNC_19(VAR_26, "from", VAR_23, 0);
 VAR_26->mnt_optnew = VAR_26->mnt_opt;
 VAR_26->mnt_opt = ((void*)0);




 VAR_26->mnt_flag = VAR_24 & VAR_11;



 VAR_26->mnt_flag |= VAR_10;




 VAR_26->mnt_flag |= VAR_9;




 VAR_26->mnt_flag |= VAR_8;




 VAR_29 = VAR_19->td_ucred;
 VAR_19->td_ucred = VAR_15;
 VAR_30 = FUNC_2(VAR_26);
 VAR_19->td_ucred = VAR_29;

 if (VAR_30 != 0) {






  FUNC_21(VAR_27, VAR_4 | VAR_5);
  FUNC_5(VAR_27);
  VAR_27->v_iflag &= ~VAR_13;
  FUNC_6(VAR_27);
  FUNC_22(VAR_27);
  FUNC_20(VAR_26);
  FUNC_15(VAR_26->mnt_optnew);
  VAR_26->mnt_vnodecovered = ((void*)0);
  FUNC_17(VAR_26);
  return (VAR_30);
 }

 if (VAR_26->mnt_opt != ((void*)0))
  FUNC_15(VAR_26->mnt_opt);
 VAR_26->mnt_opt = VAR_26->mnt_optnew;
 (void)FUNC_4(VAR_26, &VAR_26->mnt_stat);





 VAR_26->mnt_optnew = ((void*)0);

 FUNC_21(VAR_27, VAR_4 | VAR_5);



 FUNC_5(VAR_27);
 VAR_27->v_iflag &= ~VAR_13;
 FUNC_6(VAR_27);

 VAR_27->v_mountedhere = VAR_26;

 FUNC_9(&VAR_18);
 FUNC_1(&VAR_17, VAR_26, VAR_16);
 FUNC_10(&VAR_18);
 FUNC_14(((void*)0), VAR_14, 0);
 if (FUNC_3(VAR_26, VAR_4, &VAR_28))
  FUNC_11("mount: lost mount");
 FUNC_7(VAR_27, 0);
 FUNC_18(VAR_26);
 FUNC_20(VAR_26);
 *VAR_20 = VAR_28;
 return (0);
}
