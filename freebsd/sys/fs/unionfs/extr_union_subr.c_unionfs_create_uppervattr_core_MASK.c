
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vattr {int va_mode; int va_gid; int va_uid; int va_type; int va_ctime; int va_mtime; int va_atime; } ;
struct unionfs_mount {int um_copymode; int um_udir; int um_ufile; int um_gid; int um_uid; } ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_4__ {TYPE_1__* p_fd; } ;
struct TYPE_3__ {int fd_cmask; } ;




 int FUNC_0 (struct vattr*) ;
 int VAR_0 ;

void
FUNC_1(struct unionfs_mount *VAR_1,
          struct vattr *VAR_2,
          struct vattr *VAR_3,
          struct thread *VAR_4)
{
 FUNC_0(VAR_3);
 VAR_3->va_type = VAR_2->va_type;
 VAR_3->va_atime = VAR_2->va_atime;
 VAR_3->va_mtime = VAR_2->va_mtime;
 VAR_3->va_ctime = VAR_2->va_ctime;

 switch (VAR_1->um_copymode) {
 case 128:
  VAR_3->va_mode = VAR_2->va_mode;
  VAR_3->va_uid = VAR_2->va_uid;
  VAR_3->va_gid = VAR_2->va_gid;
  break;
 case 129:
  if (VAR_1->um_uid == VAR_2->va_uid) {
   VAR_3->va_mode = VAR_2->va_mode & 077077;
   VAR_3->va_mode |= (VAR_2->va_type == VAR_0 ? VAR_1->um_udir : VAR_1->um_ufile) & 0700;
   VAR_3->va_uid = VAR_2->va_uid;
   VAR_3->va_gid = VAR_2->va_gid;
  } else {
   VAR_3->va_mode = (VAR_2->va_type == VAR_0 ? VAR_1->um_udir : VAR_1->um_ufile);
   VAR_3->va_uid = VAR_1->um_uid;
   VAR_3->va_gid = VAR_1->um_gid;
  }
  break;
 default:
  VAR_3->va_mode = 0777 & ~VAR_4->td_proc->p_fd->fd_cmask;
  VAR_3->va_uid = VAR_1->um_uid;
  VAR_3->va_gid = VAR_1->um_gid;
  break;
 }
}
