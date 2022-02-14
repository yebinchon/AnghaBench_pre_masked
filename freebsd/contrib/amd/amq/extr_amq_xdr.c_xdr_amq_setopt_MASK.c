
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int bool_t ;
struct TYPE_3__ {int as_str; int as_opt; } ;
typedef TYPE_1__ amq_setopt ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_2, amq_setopt *VAR_3)
{

  if (!FUNC_0(VAR_2, &VAR_3->as_opt)) {
    return (VAR_0);
  }

  if (!FUNC_1(VAR_2, &VAR_3->as_str)) {
    return (VAR_0);
  }

  return (VAR_1);
}
