
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct vattr {int va_nlink; } ;
struct ucred {int dummy; } ;
typedef int fhandle_t ;
struct TYPE_2__ {int mnt_flag; } ;
typedef int NFSPROC_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucred*) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (int,int ,int ) ;
 struct ucred* FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct vnode*,int ,char*,int*,int*,int *,struct vnode**,int *,int *,char*,int *,int *,int *,int *,int *) ;
 int FUNC_6 (struct vnode*,int *,int *) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(struct vnode *VAR_5, NFSPROC_T *VAR_6, struct vnode **VAR_7,
    int *VAR_8, char *VAR_9, fhandle_t *VAR_10)
{
 struct vattr VAR_11;
 struct ucred *VAR_12;
 char *VAR_13;
 int VAR_14, VAR_15;

 VAR_7[0] = ((void*)0);

 if (VAR_5->v_type != VAR_3 || (VAR_5->v_mount->mnt_flag & VAR_0) == 0 ||
     VAR_4 == 0)
  return;


 VAR_12 = FUNC_4();
 VAR_15 = FUNC_1(VAR_5, &VAR_11, VAR_12);
 FUNC_0(VAR_12);
 if (VAR_15 != 0) {
  FUNC_7("pNFS: nfsrv_pnfsremovesetup getattr=%d\n", VAR_15);
  return;
 }
 if (VAR_11.va_nlink > 1)
  return;

 VAR_15 = FUNC_6(VAR_5, VAR_10, VAR_6);
 if (VAR_15 != 0) {
  FUNC_7("pNFS: nfsrv_pnfsremovesetup getfh=%d\n", VAR_15);
  return;
 }

 VAR_14 = 1024;
 VAR_13 = FUNC_3(VAR_14, VAR_1, VAR_2);

 VAR_15 = FUNC_5(VAR_5, 0, VAR_13, &VAR_14, VAR_8, VAR_6, VAR_7,
     ((void*)0), ((void*)0), VAR_9, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
 FUNC_2(VAR_13, VAR_1);
 if (VAR_15 != 0)
  FUNC_7("pNFS: nfsrv_pnfsremovesetup getsockmnt=%d\n", VAR_15);
}
