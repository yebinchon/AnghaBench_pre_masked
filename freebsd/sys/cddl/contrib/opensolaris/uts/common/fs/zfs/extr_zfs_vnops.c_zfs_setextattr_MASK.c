
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfsvfs_t ;
typedef int vnode_t ;
struct vop_setextattr_args {int a_cred; int a_uio; int a_vp; int a_name; int a_attrnamespace; struct thread* a_td; } ;
struct vattr {scalar_t__ va_size; } ;
struct thread {int dummy; } ;
struct nameidata {int * ni_vp; } ;
typedef int attrname ;
struct TYPE_2__ {int * z_zfsvfs; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct nameidata*,int ) ;
 int VAR_4 ;
 int FUNC_2 (struct nameidata*,int ,int ,int ,char*,int *,struct thread*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct vattr*) ;
 int FUNC_4 (int *,struct vattr*,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 TYPE_1__* FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int ,int ,struct thread*,int ) ;
 int FUNC_11 (int *,int,int ,struct thread*) ;
 int FUNC_12 (struct nameidata*,int*,int,int ,int ,int *) ;
 int FUNC_13 (int ,int ,char*,int) ;
 int FUNC_14 (int ,int *,int **,int *,int ,int ,struct thread*,int) ;

__attribute__((used)) static int
FUNC_15(struct vop_setextattr_args *VAR_10)
{
 zfsvfs_t *VAR_11 = FUNC_7(VAR_10->a_vp)->z_zfsvfs;
 struct thread *VAR_12 = VAR_10->a_td;
 struct nameidata VAR_13;
 char VAR_14[255];
 struct vattr VAR_15;
 vnode_t *VAR_16 = ((void*)0), *VAR_17;
 int VAR_18, VAR_19;

 VAR_18 = FUNC_10(VAR_10->a_vp, VAR_10->a_attrnamespace,
     VAR_10->a_cred, VAR_10->a_td, VAR_9);
 if (VAR_18 != 0)
  return (VAR_18);

 VAR_18 = FUNC_13(VAR_10->a_attrnamespace, VAR_10->a_name, VAR_14,
     sizeof(VAR_14));
 if (VAR_18 != 0)
  return (VAR_18);

 FUNC_8(VAR_11);

 VAR_18 = FUNC_14(VAR_10->a_vp, ((void*)0), &VAR_16, ((void*)0), 0, VAR_10->a_cred, VAR_12,
     VAR_3 | VAR_0);
 if (VAR_18 != 0) {
  FUNC_9(VAR_11);
  return (VAR_18);
 }

 VAR_19 = FUNC_0(VAR_7 | VAR_6);
 FUNC_2(&VAR_13, VAR_2, VAR_5, VAR_8, VAR_14,
     VAR_16, VAR_12);
 VAR_18 = FUNC_12(&VAR_13, &VAR_19, 0600, 0, VAR_10->a_cred, ((void*)0));
 VAR_17 = VAR_13.ni_vp;
 FUNC_1(&VAR_13, VAR_4);
 if (VAR_18 != 0) {
  FUNC_9(VAR_11);
  return (VAR_18);
 }

 FUNC_3(&VAR_15);
 VAR_15.va_size = 0;
 VAR_18 = FUNC_4(VAR_17, &VAR_15, VAR_10->a_cred);
 if (VAR_18 == 0)
  FUNC_6(VAR_17, VAR_10->a_uio, VAR_1, VAR_10->a_cred);

 FUNC_5(VAR_17, 0);
 FUNC_11(VAR_17, VAR_19, VAR_10->a_cred, VAR_12);
 FUNC_9(VAR_11);

 return (VAR_18);
}
