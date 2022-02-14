
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct vattr {scalar_t__ va_vaflags; void* va_gen; void* va_flags; TYPE_4__ va_birthtime; TYPE_3__ va_ctime; TYPE_2__ va_mtime; TYPE_1__ va_atime; void* va_rdev; void* va_blocksize; void* va_fileid; void* va_fsid; void* va_gid; void* va_uid; void* va_nlink; void* va_mode; void* va_bytes; void* va_size; int va_type; } ;


 int VAR_0 ;
 void* VAR_1 ;

void
FUNC_0(struct vattr *VAR_2)
{

 VAR_2->va_type = VAR_0;
 VAR_2->va_size = VAR_1;
 VAR_2->va_bytes = VAR_1;
 VAR_2->va_mode = VAR_1;
 VAR_2->va_nlink = VAR_1;
 VAR_2->va_uid = VAR_1;
 VAR_2->va_gid = VAR_1;
 VAR_2->va_fsid = VAR_1;
 VAR_2->va_fileid = VAR_1;
 VAR_2->va_blocksize = VAR_1;
 VAR_2->va_rdev = VAR_1;
 VAR_2->va_atime.tv_sec = VAR_1;
 VAR_2->va_atime.tv_nsec = VAR_1;
 VAR_2->va_mtime.tv_sec = VAR_1;
 VAR_2->va_mtime.tv_nsec = VAR_1;
 VAR_2->va_ctime.tv_sec = VAR_1;
 VAR_2->va_ctime.tv_nsec = VAR_1;
 VAR_2->va_birthtime.tv_sec = VAR_1;
 VAR_2->va_birthtime.tv_nsec = VAR_1;
 VAR_2->va_flags = VAR_1;
 VAR_2->va_gen = VAR_1;
 VAR_2->va_vaflags = 0;
}
