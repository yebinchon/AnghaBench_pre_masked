
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_long ;
struct vnode {int dummy; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {struct thread* cn_thread; void* cn_flags; void* cn_nameiop; } ;
struct nameidata {int ni_segflg; char const* ni_dirp; int ni_dirfd; int ni_rightsneeded; TYPE_1__ ni_cnd; int ni_filecaps; scalar_t__ ni_resflags; struct vnode* ni_startdir; } ;
typedef enum uio_seg { ____Placeholder_uio_seg } uio_seg ;
typedef int cap_rights_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct nameidata *VAR_0, u_long VAR_1, u_long VAR_2, enum uio_seg VAR_3,
    const char *VAR_4, int VAR_5, struct vnode *VAR_6, cap_rights_t *VAR_7,
    struct thread *VAR_8)
{

 VAR_0->ni_cnd.cn_nameiop = VAR_1;
 VAR_0->ni_cnd.cn_flags = VAR_2;
 VAR_0->ni_segflg = VAR_3;
 VAR_0->ni_dirp = VAR_4;
 VAR_0->ni_dirfd = VAR_5;
 VAR_0->ni_startdir = VAR_6;
 VAR_0->ni_resflags = 0;
 FUNC_1(&VAR_0->ni_filecaps);
 VAR_0->ni_cnd.cn_thread = VAR_8;
 if (VAR_7 != ((void*)0))
  VAR_0->ni_rightsneeded = *VAR_7;
 else
  FUNC_0(&VAR_0->ni_rightsneeded);
}
