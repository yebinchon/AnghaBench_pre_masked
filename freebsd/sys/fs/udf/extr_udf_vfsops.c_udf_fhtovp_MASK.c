
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct udf_node {TYPE_1__* fentry; } ;
struct mount {int dummy; } ;
struct ifid {int ifid_ino; } ;
struct fid {int dummy; } ;
typedef int off_t ;
struct TYPE_2__ {int inf_len; } ;


 int VAR_0 ;
 struct vnode* VAR_1 ;
 int FUNC_0 (struct mount*,int ,int ,struct vnode**) ;
 struct udf_node* FUNC_1 (struct vnode*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vnode*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct mount *VAR_3, struct fid *VAR_4, int VAR_5, struct vnode **VAR_6)
{
 struct ifid *VAR_7;
 struct vnode *VAR_8;
 struct udf_node *VAR_9;
 off_t VAR_10;
 int VAR_11;

 VAR_7 = (struct ifid *)VAR_4;

 if ((VAR_11 = FUNC_0(VAR_3, VAR_7->ifid_ino, VAR_0, &VAR_8)) != 0) {
  *VAR_6 = VAR_1;
  return (VAR_11);
 }

 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = FUNC_2(VAR_9->fentry->inf_len);

 *VAR_6 = VAR_8;
 FUNC_3(*VAR_6, VAR_10, VAR_2);
 return (0);
}
