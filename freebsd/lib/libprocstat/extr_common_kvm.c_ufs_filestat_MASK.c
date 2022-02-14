
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int um ;
struct vnstat {int vn_size; scalar_t__ vn_mode; int vn_fileid; int vn_fsid; } ;
struct vnode {int dummy; } ;
struct ufsmount {int i_size; scalar_t__ i_mode; int i_number; int um_dev; scalar_t__ i_ump; } ;
struct inode {int i_size; scalar_t__ i_mode; int i_number; int um_dev; scalar_t__ i_ump; } ;
typedef scalar_t__ mode_t ;
typedef int kvm_t ;
typedef int inode ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long,struct ufsmount*,int) ;
 int FUNC_3 (char*,void*) ;

int
FUNC_4(kvm_t *VAR_0, struct vnode *VAR_1, struct vnstat *VAR_2)
{
 struct inode VAR_3;
 struct ufsmount VAR_4;

 if (!FUNC_2(VAR_0, (unsigned long)FUNC_0(VAR_1), &VAR_3, sizeof(VAR_3))) {
  FUNC_3("can't read inode at %p", (void *)FUNC_0(VAR_1));
  return (1);
 }
 if (!FUNC_2(VAR_0, (unsigned long)VAR_3.i_ump, &VAR_4, sizeof(VAR_4))) {
  FUNC_3("can't read ufsmount at %p", (void *)VAR_3.i_ump);
  return (1);
 }





 VAR_2->vn_fsid = FUNC_1(VAR_0, VAR_4.um_dev);
 VAR_2->vn_fileid = VAR_3.i_number;
 VAR_2->vn_mode = (mode_t)VAR_3.i_mode;
 VAR_2->vn_size = VAR_3.i_size;
 return (0);
}
