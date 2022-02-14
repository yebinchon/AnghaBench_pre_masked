
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_3__ {int as_uerr; int as_merr; int as_mok; int as_stale; int as_drops; } ;
typedef TYPE_1__ amq_mount_stats ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

bool_t
FUNC_1(XDR *VAR_2, amq_mount_stats *VAR_3)
{
  if (!FUNC_0(VAR_2, &VAR_3->as_drops)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, &VAR_3->as_stale)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, &VAR_3->as_mok)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, &VAR_3->as_merr)) {
    return (VAR_0);
  }
  if (!FUNC_0(VAR_2, &VAR_3->as_uerr)) {
    return (VAR_0);
  }
  return (VAR_1);
}
