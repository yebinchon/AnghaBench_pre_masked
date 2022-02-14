
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_3__ {int mi_up; int mi_refc; int mi_reloads; int mi_nentries; int mi_flags; int mi_modify; int mi_wildcard; int mi_name; } ;
typedef TYPE_1__ amq_map_info ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

bool_t
FUNC_3(XDR *VAR_2, amq_map_info *VAR_3)
{
  if (!FUNC_0(VAR_2, &VAR_3->mi_name)) {
    return (VAR_0);
  }

  if (!FUNC_0(VAR_2, &VAR_3->mi_wildcard)) {
    return (VAR_0);
  }

  if (!FUNC_2(VAR_2, &VAR_3->mi_modify)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mi_flags)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mi_nentries)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->mi_reloads)) {
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
