
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct fuse_data {int dataflags; } ;


 int VAR_0 ;
 struct fuse_data* FUNC_0 (int ) ;
 int FUNC_1 (struct vnode*) ;

__attribute__((used)) static inline bool
FUNC_2(struct vnode *VAR_1)
{
 struct fuse_data *VAR_2 = FUNC_0(FUNC_1(VAR_1));

 return (VAR_2->dataflags & VAR_0);
}
