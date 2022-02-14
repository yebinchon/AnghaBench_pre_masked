
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ v_type; int v_mount; } ;
typedef TYPE_1__ vnode_t ;
struct vattr {int va_mask; scalar_t__ va_uid; scalar_t__ va_gid; int va_vaflags; int va_mode; } ;
typedef int cred_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct vattr*,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,struct vattr*,struct vattr const*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__) ;

int
FUNC_6(cred_t *VAR_11, vnode_t *VAR_12, struct vattr *VAR_13,
    const struct vattr *VAR_14, int VAR_15,
    int VAR_16(void *, int, cred_t *), void *VAR_17)
{
 int VAR_18 = VAR_13->va_mask;
 int VAR_19;

 if (VAR_18 & VAR_4) {
  if (VAR_12->v_type == VAR_9)
   return (VAR_6);
  VAR_19 = VAR_16(VAR_17, VAR_10, VAR_11);
  if (VAR_19)
   return (VAR_19);
 }
 if (VAR_18 & VAR_2) {
  VAR_19 = FUNC_5(VAR_12, VAR_11, VAR_14->va_uid);
  if (VAR_19)
   return (VAR_19);
  VAR_19 = FUNC_4(VAR_12, VAR_13, VAR_14, VAR_11);
  if (VAR_19)
   return (VAR_19);
 } else {
  VAR_13->va_mode = VAR_14->va_mode;
 }
 if (VAR_18 & (VAR_5 | VAR_1)) {
  VAR_19 = FUNC_5(VAR_12, VAR_11, VAR_14->va_uid);
  if (VAR_19)
   return (VAR_19);






  if (((VAR_18 & VAR_5) && VAR_13->va_uid != VAR_14->va_uid) ||
      ((VAR_18 & VAR_1) && VAR_13->va_gid != VAR_14->va_gid &&
       !FUNC_0(VAR_13->va_gid, VAR_11))) {
   if (FUNC_2(VAR_12->v_mount, VAR_11) != 0) {
    VAR_19 = FUNC_1(VAR_11, VAR_7);
    if (VAR_19)
     return (VAR_19);
   }
  }

  if (((VAR_18 & VAR_5) && VAR_13->va_uid != VAR_14->va_uid) ||
      ((VAR_18 & VAR_1) && VAR_13->va_gid != VAR_14->va_gid)) {
   FUNC_3(VAR_13, VAR_12, VAR_11);
  }
 }
 if (VAR_18 & (VAR_0 | VAR_3)) {
  VAR_19 = FUNC_5(VAR_12, VAR_11, VAR_14->va_uid);
  if (VAR_19 && (VAR_13->va_vaflags & VAR_8))
   VAR_19 = VAR_16(VAR_17, VAR_10, VAR_11);
  if (VAR_19)
   return (VAR_19);
 }
 return (0);
}
