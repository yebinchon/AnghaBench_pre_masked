
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zfsvfs_t ;
typedef int vnode_t ;
typedef int u_char ;
struct vop_listextattr_args {size_t* a_size; int a_cred; int a_vp; int a_attrnamespace; struct thread* a_td; struct uio* a_uio; } ;
struct uio {int uio_iovcnt; int uio_resid; int uio_rw; scalar_t__ uio_offset; struct thread* uio_td; int uio_segflg; struct iovec* uio_iov; } ;
struct thread {int dummy; } ;
struct nameidata {int * ni_vp; } ;
struct iovec {int iov_len; void* iov_base; } ;
struct dirent {scalar_t__ d_type; int* d_name; int d_namlen; scalar_t__ d_reclen; } ;
typedef int dirbuf ;
typedef int attrprefix ;
struct TYPE_2__ {int * z_zfsvfs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct nameidata*,int ) ;
 int VAR_7 ;
 int FUNC_1 (struct nameidata*,int ,int,int ,char*,int *,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,struct uio*,int ,int*,int *,int *) ;
 int VAR_11 ;
 TYPE_1__* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,struct thread*,int ) ;
 int FUNC_7 (struct nameidata*) ;
 size_t FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int*,char*,size_t) ;
 int FUNC_10 (int*,int,int ,struct uio*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,char*,int) ;
 int FUNC_13 (int ,int *,int **,int *,int ,int ,struct thread*,int ) ;

__attribute__((used)) static int
FUNC_14(struct vop_listextattr_args *VAR_12)
{
 zfsvfs_t *VAR_13 = FUNC_3(VAR_12->a_vp)->z_zfsvfs;
 struct thread *VAR_14 = VAR_12->a_td;
 struct nameidata VAR_15;
 char VAR_16[16];
 u_char VAR_17[sizeof(struct dirent)];
 struct dirent *VAR_18;
 struct iovec VAR_19;
 struct uio VAR_20, *VAR_21 = VAR_12->a_uio;
 size_t *VAR_22 = VAR_12->a_size;
 size_t VAR_23;
 vnode_t *VAR_24 = ((void*)0), *VAR_25;
 int VAR_26, VAR_27, VAR_28, VAR_29;

 VAR_27 = FUNC_6(VAR_12->a_vp, VAR_12->a_attrnamespace,
     VAR_12->a_cred, VAR_12->a_td, VAR_11);
 if (VAR_27 != 0)
  return (VAR_27);

 VAR_27 = FUNC_12(VAR_12->a_attrnamespace, "", VAR_16,
     sizeof(VAR_16));
 if (VAR_27 != 0)
  return (VAR_27);
 VAR_23 = FUNC_8(VAR_16);

 FUNC_4(VAR_13);

 if (VAR_22 != ((void*)0))
  *VAR_22 = 0;

 VAR_27 = FUNC_13(VAR_12->a_vp, ((void*)0), &VAR_24, ((void*)0), 0, VAR_12->a_cred, VAR_14,
     VAR_6);
 if (VAR_27 != 0) {
  FUNC_5(VAR_13);




  if (VAR_27 == VAR_2)
   VAR_27 = 0;
  return (VAR_27);
 }

 FUNC_1(&VAR_15, VAR_5, VAR_8 | VAR_3 | VAR_4,
     VAR_10, ".", VAR_24, VAR_14);
 VAR_27 = FUNC_7(&VAR_15);
 VAR_25 = VAR_15.ni_vp;
 FUNC_0(&VAR_15, VAR_7);
 if (VAR_27 != 0) {
  FUNC_5(VAR_13);
  return (VAR_27);
 }

 VAR_20.uio_iov = &VAR_19;
 VAR_20.uio_iovcnt = 1;
 VAR_20.uio_segflg = VAR_10;
 VAR_20.uio_td = VAR_14;
 VAR_20.uio_rw = VAR_9;
 VAR_20.uio_offset = 0;

 do {
  u_char VAR_30;

  VAR_19.iov_base = (void *)VAR_17;
  VAR_19.iov_len = sizeof(VAR_17);
  VAR_20.uio_resid = sizeof(VAR_17);
  VAR_27 = FUNC_2(VAR_25, &VAR_20, VAR_12->a_cred, &VAR_28, ((void*)0), ((void*)0));
  VAR_26 = sizeof(VAR_17) - VAR_20.uio_resid;
  if (VAR_27 != 0)
   break;
  for (VAR_29 = 0; VAR_29 < VAR_26;) {
   VAR_18 = (struct dirent *)(VAR_17 + VAR_29);
   VAR_29 += VAR_18->d_reclen;




   if (VAR_18->d_type != VAR_0 && VAR_18->d_type != VAR_1)
    continue;
   if (VAR_23 == 0 && FUNC_9(VAR_18->d_name, "freebsd:", 8) == 0)
    continue;
   else if (FUNC_9(VAR_18->d_name, VAR_16, VAR_23) != 0)
    continue;
   VAR_30 = VAR_18->d_namlen - VAR_23;
   if (VAR_22 != ((void*)0))
    *VAR_22 += 1 + VAR_30;
   else if (VAR_21 != ((void*)0)) {




    VAR_27 = FUNC_10(&VAR_30, 1, VAR_21->uio_rw, VAR_21);
    if (VAR_27 == 0) {
     VAR_27 = FUNC_10(VAR_18->d_name + VAR_23, VAR_30,
         VAR_21->uio_rw, VAR_21);
    }
    if (VAR_27 != 0)
     break;
   }
  }
 } while (!VAR_28 && VAR_27 == 0);

 FUNC_11(VAR_25);
 FUNC_5(VAR_13);

 return (VAR_27);
}
