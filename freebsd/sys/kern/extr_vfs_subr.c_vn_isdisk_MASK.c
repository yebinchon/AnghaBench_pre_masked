
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnode {scalar_t__ v_type; TYPE_2__* v_rdev; } ;
struct TYPE_4__ {TYPE_1__* si_devsw; } ;
struct TYPE_3__ {int d_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

int
FUNC_2(struct vnode *VAR_4, int *VAR_5)
{
 int VAR_6;

 if (VAR_4->v_type != VAR_3) {
  VAR_6 = VAR_1;
  goto out;
 }
 VAR_6 = 0;
 FUNC_0();
 if (VAR_4->v_rdev == ((void*)0))
  VAR_6 = VAR_2;
 else if (VAR_4->v_rdev->si_devsw == ((void*)0))
  VAR_6 = VAR_2;
 else if (!(VAR_4->v_rdev->si_devsw->d_flags & VAR_0))
  VAR_6 = VAR_1;
 FUNC_1();
out:
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_6;
 return (VAR_6 == 0);
}
