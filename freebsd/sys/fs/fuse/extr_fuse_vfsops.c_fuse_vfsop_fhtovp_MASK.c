
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct mount {int dummy; } ;
struct fuse_vnode_data {scalar_t__ generation; } ;
struct fuse_fid {scalar_t__ gen; int nid; } ;
struct fid {int dummy; } ;
struct TYPE_2__ {int dataflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vnode* VAR_4 ;
 int FUNC_0 (struct mount*,int ,int ,struct vnode**) ;
 struct fuse_vnode_data* FUNC_1 (struct vnode*) ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 (struct mount*) ;
 int FUNC_3 (struct vnode*,int ,int ) ;
 int FUNC_4 (struct vnode*) ;

__attribute__((used)) static int
FUNC_5(struct mount *VAR_6, struct fid *VAR_7, int VAR_8,
 struct vnode **VAR_9)
{
 struct fuse_fid *VAR_10 = (struct fuse_fid *)VAR_7;
 struct fuse_vnode_data *VAR_11;
 struct vnode *VAR_12;
 int VAR_13;

 if (!(FUNC_2(VAR_6)->dataflags & VAR_2))
  return VAR_0;

 VAR_13 = FUNC_0(VAR_6, VAR_10->nid, VAR_3, &VAR_12);
 if (VAR_13) {
  *VAR_9 = VAR_4;
  return (VAR_13);
 }
 VAR_11 = FUNC_1(VAR_12);
 if (VAR_11->generation != VAR_10->gen ) {
  FUNC_4(VAR_12);
  *VAR_9 = VAR_4;
  return (VAR_1);
 }
 *VAR_9 = VAR_12;
 FUNC_3(*VAR_9, 0, VAR_5);
 return (0);
}
