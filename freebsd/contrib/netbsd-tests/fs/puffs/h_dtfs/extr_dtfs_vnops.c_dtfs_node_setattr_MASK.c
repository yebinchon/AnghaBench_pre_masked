
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct vattr {scalar_t__ va_flags; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_mode; int va_vaflags; scalar_t__ va_size; TYPE_2__ va_mtime; TYPE_1__ va_atime; } ;
struct puffs_usermount {int dummy; } ;
struct TYPE_6__ {int va_type; scalar_t__ va_bytes; int va_mode; int va_gid; int va_uid; } ;
struct puffs_node {TYPE_3__ pn_va; } ;
struct puffs_cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;





 int FUNC_0 (struct puffs_node*,scalar_t__) ;
 int FUNC_1 (int ,int ,int,scalar_t__,struct puffs_cred const*) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,struct puffs_cred const*) ;
 int FUNC_3 (int ,int ,int ,int,struct puffs_cred const*) ;
 int FUNC_4 (TYPE_3__*,struct vattr const*) ;

int
FUNC_5(struct puffs_usermount *VAR_4, void *VAR_5,
 const struct vattr *VAR_6, const struct puffs_cred *VAR_7)
{
 struct puffs_node *VAR_8 = VAR_5;
 int VAR_9;


 if (VAR_6->va_flags != VAR_2)
  return VAR_1;

 if (VAR_6->va_uid != VAR_2 || VAR_6->va_gid != VAR_2) {
  VAR_9 = FUNC_2(VAR_8->pn_va.va_uid, VAR_8->pn_va.va_gid,
      VAR_6->va_uid, VAR_6->va_gid, VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_6->va_mode != VAR_2) {
  VAR_9 = FUNC_1(VAR_8->pn_va.va_uid, VAR_8->pn_va.va_gid,
      VAR_8->pn_va.va_type, VAR_6->va_mode, VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 if ((VAR_6->va_atime.tv_sec != VAR_2
       && VAR_6->va_atime.tv_nsec != VAR_2)
     || (VAR_6->va_mtime.tv_sec != VAR_2
       && VAR_6->va_mtime.tv_nsec != VAR_2)) {
  VAR_9 = FUNC_3(VAR_8->pn_va.va_uid, VAR_8->pn_va.va_gid,
      VAR_8->pn_va.va_mode, VAR_6->va_vaflags & VAR_3, VAR_7);
  if (VAR_9)
   return VAR_9;
 }

 if (VAR_6->va_size != VAR_2) {
  switch (VAR_8->pn_va.va_type) {
  case 128:
   FUNC_0(VAR_8, VAR_6->va_size);
   VAR_8->pn_va.va_bytes = VAR_6->va_size;
   break;
  case 132:
  case 131:
  case 129:
   break;
  case 130:
   return VAR_0;
  default:
   return VAR_1;
  }
 }

 FUNC_4(&VAR_8->pn_va, VAR_6);

 return 0;
}
