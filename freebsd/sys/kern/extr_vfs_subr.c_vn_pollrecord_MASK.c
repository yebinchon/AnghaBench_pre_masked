
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {TYPE_1__* v_pollinfo; } ;
struct thread {int dummy; } ;
struct TYPE_2__ {int vpi_revents; int vpi_events; int vpi_lock; int vpi_selinfo; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct thread*,int *) ;
 int FUNC_3 (struct vnode*) ;

int
FUNC_4(struct vnode *VAR_0, struct thread *VAR_1, int VAR_2)
{

 FUNC_3(VAR_0);
 FUNC_0(&VAR_0->v_pollinfo->vpi_lock);
 if (VAR_0->v_pollinfo->vpi_revents & VAR_2) {







  VAR_2 &= VAR_0->v_pollinfo->vpi_revents;
  VAR_0->v_pollinfo->vpi_revents &= ~VAR_2;

  FUNC_1(&VAR_0->v_pollinfo->vpi_lock);
  return (VAR_2);
 }
 VAR_0->v_pollinfo->vpi_events |= VAR_2;
 FUNC_2(VAR_1, &VAR_0->v_pollinfo->vpi_selinfo);
 FUNC_1(&VAR_0->v_pollinfo->vpi_lock);
 return (0);
}
