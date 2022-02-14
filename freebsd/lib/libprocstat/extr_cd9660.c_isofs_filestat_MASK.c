
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnstat {int vn_size; int vn_fileid; scalar_t__ vn_mode; int vn_fsid; } ;
struct vnode {int dummy; } ;
struct TYPE_2__ {scalar_t__ iso_mode; } ;
struct iso_node {int i_size; int i_number; TYPE_1__ inode; int im_dev; scalar_t__ i_mnt; } ;
struct iso_mnt {int i_size; int i_number; TYPE_1__ inode; int im_dev; scalar_t__ i_mnt; } ;
typedef scalar_t__ mode_t ;
typedef int mnt ;
typedef int kvm_t ;
typedef int isonode ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned long,struct iso_node*,int) ;
 int FUNC_3 (char*,void*) ;

int
FUNC_4(kvm_t *VAR_0, struct vnode *VAR_1, struct vnstat *VAR_2)
{
 struct iso_node VAR_3;
 struct iso_mnt VAR_4;

 if (!FUNC_2(VAR_0, (unsigned long)FUNC_0(VAR_1), &VAR_3,
     sizeof(VAR_3))) {
  FUNC_3("can't read iso_node at %p",
      (void *)FUNC_0(VAR_1));
  return (1);
 }
 if (!FUNC_2(VAR_0, (unsigned long)VAR_3.i_mnt, &VAR_4,
     sizeof(VAR_4))) {
  FUNC_3("can't read iso_mnt at %p",
      (void *)FUNC_0(VAR_1));
  return (1);
 }
 VAR_2->vn_fsid = FUNC_1(VAR_0, VAR_4.im_dev);
 VAR_2->vn_mode = (mode_t)VAR_3.inode.iso_mode;
 VAR_2->vn_fileid = VAR_3.i_number;
 VAR_2->vn_size = VAR_3.i_size;
 return (0);
}
