
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_window {int vw_flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct vt_window *VAR_2)
{

 if (VAR_2->vw_flags & VAR_1) {
  VAR_2->vw_flags &= ~VAR_1;
  return (0);
 }
 return (VAR_0);
}
