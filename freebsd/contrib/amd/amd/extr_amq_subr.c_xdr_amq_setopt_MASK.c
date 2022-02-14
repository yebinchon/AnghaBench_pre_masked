
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ voidp ;
typedef int enum_t ;
typedef int bool_t ;
struct TYPE_3__ {int as_str; int as_opt; } ;
typedef TYPE_1__ amq_setopt ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int ) ;

bool_t
FUNC_2(XDR *VAR_3, amq_setopt *VAR_4)
{
  if (!FUNC_0(VAR_3, (enum_t *) ((voidp) &VAR_4->as_opt))) {
    return (VAR_1);
  }
  if (!FUNC_1(VAR_3, &VAR_4->as_str, VAR_0)) {
    return (VAR_1);
  }
  return (VAR_2);
}
