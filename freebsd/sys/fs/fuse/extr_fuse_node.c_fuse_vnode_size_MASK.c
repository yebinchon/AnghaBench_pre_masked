
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {scalar_t__ va_size; } ;
struct fuse_vnode_data {int flag; TYPE_1__ cached_attrs; } ;
typedef scalar_t__ off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct fuse_vnode_data* FUNC_0 (struct vnode*) ;
 int * FUNC_1 (struct vnode*) ;
 int FUNC_2 (struct vnode*,int *,struct ucred*,struct thread*) ;

int
FUNC_3(struct vnode *VAR_2, off_t *VAR_3, struct ucred *VAR_4,
 struct thread *VAR_5)
{
 struct fuse_vnode_data *VAR_6 = FUNC_0(VAR_2);
 int VAR_7 = 0;

 if (!(VAR_6->flag & VAR_0) &&
  (FUNC_1(VAR_2) == ((void*)0) || VAR_6->cached_attrs.va_size == VAR_1))
  VAR_7 = FUNC_2(VAR_2, ((void*)0), VAR_4, VAR_5);

 if (!VAR_7)
  *VAR_3 = VAR_6->cached_attrs.va_size;

 return VAR_7;
}
