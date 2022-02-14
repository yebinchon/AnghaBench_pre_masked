
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vop_getextattr_args {char* a_name; struct uio* a_uio; struct ucred* a_cred; struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct vattr {int dummy; } ;
struct uio {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct smbnode {int n_dosattr; } ;


 int VAR_0 ;
 int FUNC_0 (struct vnode*,int ,struct ucred*,struct thread*) ;
 int FUNC_1 (struct vnode*,struct vattr*,struct ucred*) ;
 int VAR_1 ;
 struct smbnode* FUNC_2 (struct vnode*) ;
 char* VAR_2 ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_5(struct vop_getextattr_args *VAR_3)
{
 struct vnode *VAR_4 = VAR_3->a_vp;
 struct thread *VAR_5 = VAR_3->a_td;
 struct ucred *VAR_6 = VAR_3->a_cred;
 struct uio *VAR_7 = VAR_3->a_uio;
 const char *VAR_8 = VAR_3->a_name;
 struct smbnode *VAR_9 = FUNC_2(VAR_4);
 struct vattr VAR_10;
 char VAR_11[10];
 int VAR_12, VAR_13, VAR_14;

 VAR_14 = FUNC_0(VAR_4, VAR_1, VAR_6, VAR_5);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_1(VAR_4, &VAR_10, VAR_6);
 if (VAR_14)
  return VAR_14;
 if (FUNC_3(VAR_8, "dosattr") == 0) {
  VAR_13 = VAR_9->n_dosattr;
  for (VAR_12 = 0; VAR_12 < 6; VAR_12++, VAR_13 >>= 1)
   VAR_11[VAR_12] = (VAR_13 & 1) ? VAR_2[VAR_12] : '-';
  VAR_11[VAR_12] = 0;
  VAR_14 = FUNC_4(VAR_11, VAR_12, VAR_7);

 } else
  VAR_14 = VAR_0;
 return VAR_14;
}
