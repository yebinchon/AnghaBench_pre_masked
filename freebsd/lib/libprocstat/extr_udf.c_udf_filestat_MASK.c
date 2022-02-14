
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnstat {int vn_fsid; int vn_fileid; } ;
struct vnode {int dummy; } ;
struct udf_node {int im_dev; int hash_id; scalar_t__ udfmp; } ;
struct udf_mnt {int im_dev; int hash_id; scalar_t__ udfmp; } ;
typedef int node ;
typedef int mnt ;
typedef struct vnstat kvm_t ;


 scalar_t__ FUNC_0 (struct vnode*) ;
 int FUNC_1 (struct vnstat*) ;
 int FUNC_2 (struct vnstat*,int ) ;
 int FUNC_3 (struct vnstat*,unsigned long,struct udf_node*,int) ;
 int FUNC_4 (char*,void*,...) ;

int
FUNC_5(kvm_t *VAR_0, struct vnode *VAR_1, struct vnstat *VAR_2)
{
 struct udf_node VAR_3;
 struct udf_mnt VAR_4;
 int VAR_5;

 FUNC_1(VAR_0);
 FUNC_1(VAR_2);
 VAR_5 = FUNC_3(VAR_0, (unsigned long)FUNC_0(VAR_1), &VAR_3, sizeof(VAR_3));
 if (VAR_5 != 0) {
  FUNC_4("can't read udf fnode at %p", (void *)FUNC_0(VAR_1));
  return (1);
 }
        VAR_5 = FUNC_3(VAR_0, (unsigned long)VAR_3.udfmp, &VAR_4, sizeof(VAR_4));
        if (VAR_5 != 0) {
                FUNC_4("can't read udf_mnt at %p for vnode %p",
                    (void *)VAR_3.udfmp, VAR_1);
                return (1);
        }
 VAR_2->vn_fileid = VAR_3.hash_id;
 VAR_2->vn_fsid = FUNC_2(VAR_0, VAR_4.im_dev);
 return (0);
}
