
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int v_mount; } ;
typedef TYPE_1__ vnode_t ;
struct vattr {int va_mode; int va_mask; } ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void
FUNC_2(struct vattr *VAR_4, vnode_t *VAR_5, cred_t *VAR_6)
{

 if (FUNC_1(VAR_5->v_mount, VAR_6) == 0)
  return;

 if ((VAR_4->va_mode & (VAR_3 | VAR_2)) != 0) {
  if (FUNC_0(VAR_6, VAR_1)) {
   VAR_4->va_mask |= VAR_0;
   VAR_4->va_mode &= ~(VAR_3|VAR_2);
  }
 }
}
