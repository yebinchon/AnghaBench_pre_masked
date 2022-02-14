
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct vattr {scalar_t__ va_mode; scalar_t__ va_uid; scalar_t__ va_gid; scalar_t__ va_size; TYPE_1__ va_mtime; TYPE_1__ va_atime; int va_vaflags; } ;
struct nfsvattr {scalar_t__ na_mode; scalar_t__ na_uid; scalar_t__ na_gid; scalar_t__ na_size; } ;
typedef scalar_t__ mode_t ;
typedef scalar_t__ gid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(struct vattr *VAR_2, struct nfsvattr *VAR_3)
{

 if (VAR_2->va_mode != (mode_t)VAR_1) {
  if (VAR_2->va_mode == VAR_3->na_mode)
   VAR_2->va_mode = (mode_t)VAR_1;
 }
 if (VAR_2->va_uid != (uid_t)VAR_1) {
  if (VAR_2->va_uid == VAR_3->na_uid)
   VAR_2->va_uid = (uid_t)VAR_1;
 }
 if (VAR_2->va_gid != (gid_t)VAR_1) {
  if (VAR_2->va_gid == VAR_3->na_gid)
   VAR_2->va_gid = (gid_t)VAR_1;
 }
 if (VAR_2->va_size != VAR_1) {
  if (VAR_2->va_size == VAR_3->na_size)
   VAR_2->va_size = VAR_1;
 }
 if (VAR_2->va_mtime.tv_sec == VAR_1) {
  FUNC_0(&VAR_2->va_mtime);
  VAR_2->va_vaflags |= VAR_0;
 }
 if (VAR_2->va_atime.tv_sec == VAR_1)
  VAR_2->va_atime = VAR_2->va_mtime;
 return (1);
}
