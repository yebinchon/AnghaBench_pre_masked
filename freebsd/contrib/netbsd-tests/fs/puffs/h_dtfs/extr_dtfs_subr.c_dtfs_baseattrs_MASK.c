
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct vattr {int va_type; int va_mode; int va_nlink; int va_filerev; struct timespec va_birthtime; struct timespec va_ctime; struct timespec va_mtime; struct timespec va_atime; scalar_t__ va_vaflags; scalar_t__ va_bytes; int va_rdev; scalar_t__ va_flags; int va_gen; int va_blocksize; scalar_t__ va_size; int va_fileid; scalar_t__ va_gid; scalar_t__ va_uid; } ;
struct timeval {int dummy; } ;
typedef int ino_t ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*,struct timespec*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct timeval*,int *) ;
 int FUNC_3 () ;

void
FUNC_4(struct vattr *VAR_2, enum vtype VAR_3, ino_t VAR_4)
{
 struct timeval VAR_5;
 struct timespec VAR_6;

 FUNC_2(&VAR_5, ((void*)0));
 FUNC_0(&VAR_5, &VAR_6);

 VAR_2->va_type = VAR_3;
 if (VAR_3 == VAR_1) {
  VAR_2->va_mode = 0777;
  VAR_2->va_nlink = 1;
 } else {
  VAR_2->va_mode = 0666;
  VAR_2->va_nlink = 0;
 }
 VAR_2->va_uid = 0;
 VAR_2->va_gid = 0;
 VAR_2->va_fileid = VAR_4;
 VAR_2->va_size = 0;
 VAR_2->va_blocksize = FUNC_1();
 VAR_2->va_gen = FUNC_3();
 VAR_2->va_flags = 0;
 VAR_2->va_rdev = VAR_0;
 VAR_2->va_bytes = 0;
 VAR_2->va_filerev = 1;
 VAR_2->va_vaflags = 0;

 VAR_2->va_atime = VAR_2->va_mtime = VAR_2->va_ctime = VAR_2->va_birthtime = VAR_6;
}
