
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vop_open_args {TYPE_1__* a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct TYPE_4__ {scalar_t__ fd_type; int fd_fd; } ;
struct TYPE_3__ {int td_dupfd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct vnode*) ;

__attribute__((used)) static int
FUNC_1(struct vop_open_args *VAR_2)
{
 struct vnode *VAR_3 = VAR_2->a_vp;

 if (FUNC_0(VAR_3)->fd_type == VAR_1)
  return (0);
 VAR_2->a_td->td_dupfd = FUNC_0(VAR_3)->fd_fd;
 return (VAR_0);
}
