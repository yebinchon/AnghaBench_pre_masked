
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ v_type; int v_mount; } ;
typedef TYPE_1__ vnode_t ;
typedef int uid_t ;
typedef int cred_t ;
typedef int accmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

int
FUNC_2(cred_t *VAR_9, vnode_t *VAR_10, uid_t VAR_11, accmode_t VAR_12)
{

 if (FUNC_1(VAR_10->v_mount, VAR_9) == 0)
  return (0);

 if ((VAR_12 & VAR_7) && FUNC_0(VAR_9, VAR_3) != 0)
  return (VAR_0);
 if ((VAR_12 & VAR_8) &&
     FUNC_0(VAR_9, VAR_4) != 0) {
  return (VAR_0);
 }
 if (VAR_12 & VAR_6) {
  if (VAR_10->v_type == VAR_5) {
   if (FUNC_0(VAR_9, VAR_2) != 0)
    return (VAR_0);
  } else {
   if (FUNC_0(VAR_9, VAR_1) != 0)
    return (VAR_0);
  }
 }
 return (0);
}
