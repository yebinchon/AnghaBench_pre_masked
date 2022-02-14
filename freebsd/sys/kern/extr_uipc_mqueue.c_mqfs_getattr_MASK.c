
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vop_getattr_args {struct vattr* a_vap; struct vnode* a_vp; } ;
struct vnode {TYPE_3__* v_mount; int v_type; } ;
struct vattr {int va_nlink; scalar_t__ va_filerev; scalar_t__ va_bytes; int va_rdev; scalar_t__ va_flags; scalar_t__ va_gen; int va_birthtime; int va_ctime; int va_mtime; int va_atime; scalar_t__ va_size; int va_blocksize; int va_fileid; int va_fsid; int va_gid; int va_uid; int va_mode; int va_type; } ;
struct mqfs_node {int mn_birth; int mn_ctime; int mn_mtime; int mn_atime; int mn_fileno; int mn_gid; int mn_uid; int mn_mode; } ;
struct TYPE_4__ {int * val; } ;
struct TYPE_5__ {TYPE_1__ f_fsid; } ;
struct TYPE_6__ {TYPE_2__ mnt_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mqfs_node* FUNC_0 (struct vnode*) ;

__attribute__((used)) static int
FUNC_1(struct vop_getattr_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;
 struct mqfs_node *VAR_4 = FUNC_0(VAR_3);
 struct vattr *VAR_5 = VAR_2->a_vap;
 int VAR_6 = 0;

 VAR_5->va_type = VAR_3->v_type;
 VAR_5->va_mode = VAR_4->mn_mode;
 VAR_5->va_nlink = 1;
 VAR_5->va_uid = VAR_4->mn_uid;
 VAR_5->va_gid = VAR_4->mn_gid;
 VAR_5->va_fsid = VAR_3->v_mount->mnt_stat.f_fsid.val[0];
 VAR_5->va_fileid = VAR_4->mn_fileno;
 VAR_5->va_size = 0;
 VAR_5->va_blocksize = VAR_1;
 VAR_5->va_bytes = VAR_5->va_size = 0;
 VAR_5->va_atime = VAR_4->mn_atime;
 VAR_5->va_mtime = VAR_4->mn_mtime;
 VAR_5->va_ctime = VAR_4->mn_ctime;
 VAR_5->va_birthtime = VAR_4->mn_birth;
 VAR_5->va_gen = 0;
 VAR_5->va_flags = 0;
 VAR_5->va_rdev = VAR_0;
 VAR_5->va_bytes = 0;
 VAR_5->va_filerev = 0;
 return (VAR_6);
}
