
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
typedef scalar_t__ u_quad_t ;
struct vnode {scalar_t__ v_type; TYPE_1__* v_mount; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct TYPE_6__ {scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ va_size; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; TYPE_3__ va_mtime; TYPE_2__ va_atime; } ;
struct nfsvattr {TYPE_4__ na_vattr; } ;
struct nfsexstuff {int dummy; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;
struct TYPE_5__ {int mnt_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct vnode*,TYPE_4__*,struct ucred*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct vnode*,int ,int ,struct ucred*,struct thread*,int ,int *,int *,int *,struct nfsvattr*,int *) ;

int
FUNC_3(struct vnode *VAR_6, struct nfsvattr *VAR_7, struct ucred *VAR_8,
    struct thread *VAR_9, struct nfsexstuff *VAR_10)
{
 u_quad_t VAR_11 = 0;
 int VAR_12, VAR_13;





 VAR_13 = 0;
 VAR_12 = 0;
 if (VAR_6->v_type == VAR_4 && (VAR_6->v_mount->mnt_flag & VAR_1) != 0 &&
     VAR_5 != 0 && VAR_7->na_vattr.va_size != VAR_3 &&
     VAR_7->na_vattr.va_size > 0) {
  VAR_11 = VAR_7->na_vattr.va_size;
  VAR_7->na_vattr.va_size = VAR_3;
  if (VAR_7->na_vattr.va_uid != (uid_t)VAR_3 ||
      VAR_7->na_vattr.va_gid != (gid_t)VAR_3 ||
      VAR_7->na_vattr.va_mode != (mode_t)VAR_3 ||
      VAR_7->na_vattr.va_atime.tv_sec != VAR_3 ||
      VAR_7->na_vattr.va_mtime.tv_sec != VAR_3)
   VAR_13 = 1;
  else
   VAR_13 = 2;
 }
 if (VAR_13 != 2)
  VAR_12 = FUNC_1(VAR_6, &VAR_7->na_vattr, VAR_8);
 if (VAR_13 != 0)
  VAR_7->na_vattr.va_size = VAR_11;
 if (VAR_12 == 0 && (VAR_7->na_vattr.va_uid != (uid_t)VAR_3 ||
     VAR_7->na_vattr.va_gid != (gid_t)VAR_3 ||
     VAR_7->na_vattr.va_size != VAR_3 ||
     VAR_7->na_vattr.va_mode != (mode_t)VAR_3 ||
     VAR_7->na_vattr.va_atime.tv_sec != VAR_3 ||
     VAR_7->na_vattr.va_mtime.tv_sec != VAR_3)) {

  VAR_12 = FUNC_2(VAR_6, 0, 0, VAR_8, VAR_9, VAR_2,
      ((void*)0), ((void*)0), ((void*)0), VAR_7, ((void*)0));
  if (VAR_12 == VAR_0)
   VAR_12 = 0;
 }
 FUNC_0(VAR_12);
 return (VAR_12);
}
