
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ex_next; int ex_groups; int ex_dir; } ;
typedef TYPE_1__ exportnode ;
typedef int bool_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

bool_t
FUNC_5(XDR *VAR_4, exportnode *VAR_5)
{
  if (FUNC_0(VAR_0))
    FUNC_1(VAR_3, "xdr_exportnode:");

  if (!FUNC_2(VAR_4, &VAR_5->ex_dir)) {
    return (VAR_1);
  }
  if (!FUNC_4(VAR_4, &VAR_5->ex_groups)) {
    return (VAR_1);
  }
  if (!FUNC_3(VAR_4, &VAR_5->ex_next)) {
    return (VAR_1);
  }
  return (VAR_2);
}
