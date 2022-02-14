
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_3__ {int mi_up; int mi_refc; int mi_error; int mi_fserver; int mi_mountinfo; int mi_mountpt; int mi_type; } ;
typedef TYPE_1__ amq_mount_info ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_2, amq_mount_info *VAR_3)
{

  if (!FUNC_0(VAR_2, &VAR_3->mi_type)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mi_mountpt)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mi_mountinfo)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mi_fserver)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mi_error)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mi_refc)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mi_up)) {
    return (VAR_0);
  }

  return (VAR_1);
}
