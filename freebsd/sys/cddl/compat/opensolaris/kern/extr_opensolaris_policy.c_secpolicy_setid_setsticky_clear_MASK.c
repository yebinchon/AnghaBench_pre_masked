
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ v_type; int v_mount; } ;
typedef TYPE_1__ vnode_t ;
struct vattr {int va_mode; scalar_t__ va_uid; int va_gid; } ;
struct TYPE_10__ {scalar_t__ cr_uid; } ;
typedef TYPE_2__ cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,int ) ;

int
FUNC_3(vnode_t *VAR_7, struct vattr *VAR_8,
    const struct vattr *VAR_9, cred_t *VAR_10)
{
        int VAR_11;

 if (FUNC_1(VAR_7->v_mount, VAR_10) == 0)
  return (0);






 if (VAR_7->v_type != VAR_6 && (VAR_8->va_mode & VAR_4)) {
  if (FUNC_0(VAR_10, VAR_2))
   return (VAR_0);
 }




 if ((VAR_8->va_mode & VAR_3) != 0) {
  VAR_11 = FUNC_2(VAR_7, VAR_10, VAR_9->va_gid);
  if (VAR_11)
   return (VAR_11);
 }



 if ((VAR_8->va_mode & VAR_5) && VAR_9->va_uid != VAR_10->cr_uid) {
  VAR_11 = FUNC_0(VAR_10, VAR_1);
  if (VAR_11)
   return (VAR_11);
 }
 return (0);
}
