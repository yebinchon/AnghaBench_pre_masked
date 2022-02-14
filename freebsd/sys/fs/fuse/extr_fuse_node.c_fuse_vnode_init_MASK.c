
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vnode {int v_type; struct fuse_vnode_data* v_data; int v_vflag; } ;
struct fuse_vnode_data {int cached_attrs; int handles; scalar_t__ nid; } ;
typedef enum vtype { ____Placeholder_vtype } vtype ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct vnode *VAR_3, struct fuse_vnode_data *VAR_4,
    uint64_t VAR_5, enum vtype VAR_6)
{
 VAR_4->nid = VAR_5;
 FUNC_0(&VAR_4->handles);
 FUNC_2(&VAR_4->cached_attrs);
 if (VAR_5 == VAR_0) {
  VAR_3->v_vflag |= VAR_1;
 }
 VAR_3->v_type = VAR_6;
 VAR_3->v_data = VAR_4;

 FUNC_1(VAR_2, 1);
}
